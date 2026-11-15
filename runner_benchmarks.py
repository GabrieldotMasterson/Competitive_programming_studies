import sys
import os
import time
import subprocess
import json

base_dir = os.path.abspath(os.path.dirname(__file__))

benchmarks = [
    {
        "name": "OBI 2014 - Fliper (Lógica Condicional)",
        "file": os.path.join(base_dir, "OBI(Brazilian_Olympiad_in_Informatics)", "PrimeiraFase", "obi_2014", "fliper.py"),
        "input": "1 0\n",
        "expected": "B"
    },
    {
        "name": "OBI 2019 - Idade de Dona Mônica (Aritmética/Max)",
        "file": os.path.join(base_dir, "OBI(Brazilian_Olympiad_in_Informatics)", "PrimeiraFase", "obi_2019", "idadeMonica.py"),
        "input": "52\n14\n18\n",
        "expected": "20"
    },
    {
        "name": "OBI 2020 - Acelerador de Partículas (Módulo/Ciclos)",
        "file": os.path.join(base_dir, "OBI(Brazilian_Olympiad_in_Informatics)", "PrimeiraFase", "obi_2020", "aceleradorDeParticulas.py"),
        "input": "8\n",
        "expected": "3"
    },
    {
        "name": "OBI 2022 - Resto/Divisão (Restaurante - Geometria/Lógica)",
        "file": os.path.join(base_dir, "OBI(Brazilian_Olympiad_in_Informatics)", "TerceiraFase", "obi_2022", "restaurante.py"),
        "input": "10\n10\n4\n4\n",
        "expected": "S"
    },
    {
        "name": "OBI 2023 - Cabo de Guerra (Combinações e Otimização)",
        "file": os.path.join(base_dir, "OBI(Brazilian_Olympiad_in_Informatics)", "TerceiraFase", "obi_2023", "cabo_de_guerra.py"),
        "input": "1 2 3 4 5 6\n",
        "expected": None  # Executado para benchmark de throughput
    }
]

print("=" * 75)
print("  COMPETITIVE PROGRAMMING SUITE - ALGORITHM BENCHMARK RUNNER")
print("  Gabriel Masterson - Soluções OBI (Olimpíada Brasileira de Informática)")
print("=" * 75)
print(f"{'Algoritmo / Problema':<45} | {'Status':<8} | {'Latência (ms)':<14}")
print("-" * 75)

results = []

for b in benchmarks:
    if not os.path.exists(b["file"]):
        print(f"{b['name']:<45} | SKIP     | Arquivo não encontrado")
        continue

    start = time.perf_counter()
    proc = subprocess.run(
        [sys.executable, b["file"]],
        input=b["input"],
        capture_output=True,
        text=True,
        timeout=5
    )
    duration_ms = (time.perf_counter() - start) * 1000

    out = proc.stdout.strip()
    status = "OK"
    if b["expected"] is not None and out != b["expected"]:
        status = f"DIFF({out})"

    print(f"{b['name']:<45} | {status:<8} | {duration_ms:>10.2f} ms")
    results.append({
        "name": b["name"],
        "status": status,
        "latency_ms": round(duration_ms, 2),
        "output": out
    })

print("-" * 75)
avg_time = sum(r["latency_ms"] for r in results) / len(results) if results else 0
print(f"Total executados: {len(results)} | Tempo médio de inferência: {avg_time:.2f} ms")
print("=" * 75)

# Salvar relatório de benchmark
bench_out = os.path.join(base_dir, "benchmark_results.json")
with open(bench_out, "w", encoding="utf-8") as f:
    json.dump({"date": time.strftime("%Y-%m-%d %H:%M:%S"), "benchmarks": results}, f, indent=2)

print(f"Resultados salvos em: {bench_out}")
