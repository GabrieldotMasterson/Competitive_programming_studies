# 🧠 Competitive Programming Studies — Repositório de Estudos OBI & Algoritmos

> **Coleção com mais de 200 resoluções de problemas em C++ e Python da Olimpíada Brasileira de Informática (Fases 1, 2 e 3), Codeforces e Beecrowd com testes e suíte de execução.**

[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?logo=c%2B%2B)](https://isocpp.org/)
[![Language: Python](https://img.shields.io/badge/Language-Python_3-blue?logo=python)](https://www.python.org/)
[![OBI](https://img.shields.io/badge/Competition-OBI_Fases_1_2_3-yellow)](https://olimpiada.ic.unicamp.br/)
[![Latency](https://img.shields.io/badge/Benchmark_Avg-114.37_ms-brightgreen)](benchmark_results.json)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

---

## 📌 Visão Geral

Este repositório documenta a trajetória e preparação de Gabriel Masterson em Programação Competitiva e Estruturas de Dados Avançadas. Reúne mais de 200 soluções otimizadas para problemas da **Olimpíada Brasileira de Informática (OBI)** organizadas por ano e fase, além de desafios do Codeforces e Beecrowd.

---

## 📸 Demonstração de Códigos em Execução

| Execução Real de Algoritmos no Terminal (Python & C++) |
|:---:|
| ![Execução de Algoritmos OBI](assets/screenshots/preview.png) |

---

## ✨ Tópicos de Algoritmos & Estruturas de Dados Abordados

- 🌳 **Grafos & Árvores:** Busca em Largura (BFS), Busca em Profundidade (DFS), Flood Fill, Dijkstra, Menor Ancestral Comum (LCA).
- 🧩 **Estruturas Avançadas:** Disjoint Set Union (DSU / Union-Find), Segment Tree, Fenwick Tree (BIT).
- ⚡ **Programação Dinâmica (DP):** Problema da Mochila (Knapsack), Maior Subsequência Comum (LCS), Longest Increasing Subsequence (LIS), Minimizing Coins.
- 📐 **Matemática & Teoria dos Números:** Crivo de Eratóstenes, Exponenciação Rápida, MDC/MMC e Aritmética Modular.
- 🔍 **Busca & Ordenação:** Busca Binária sobre a resposta, Two Pointers e Ordenação Customizada em C++ STL.

---

## 📁 Estrutura de Pastas

```bash
Competitive_programming_studies/
├── assets/
│   └── screenshots/
│       └── preview.png                                      # Execução real de códigos no terminal
├── benchmark_results.json                                   # Métricas de execução automatizada
├── CFES/                                                    # Desafios Codeforces / CSES (DP, Introdutórios)
├── OBI(Brazilian_Olympiad_in_Informatics)/                  # Problemas OBI organizados por fases e anos
│   ├── PrimeiraFase/                                        # OBI Fase 1 (2006 a 2022)
│   ├── SegundaFase/                                         # OBI Fase 2 (2007 a 2023)
│   ├── TerceiraFase/                                        # OBI Fase 3 (2017 a 2023)
│   └── fase_unica/                                          # Edições de fase única
├── beecrowd/                                                # Exercícios do portal Beecrowd
└── Subjects/                                                # Implementações canônicas por tópico de estudo
```

---

## ⚙️ Pré-requisitos & Execução

Para compilar e testar qualquer solução em C++:
```bash
# Compilar com flags competitivas (-O2)
g++ -O2 -Wall -std=c++17 problema.cpp -o problema

# Executar com redirecionamento de entrada
./problema < input.txt
```

Para executar soluções em Python:
```bash
python problema.py < input.txt
```

---

## 📚 Catálogo Completo de Exercícios Resolvidos

### 🧩 Primeira Fase

#### 📅 Ano: `2006`
- [`ColheitadeCaju`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2006/ColheitadeCaju.py)

#### 📅 Ano: `2007`
- [`chocolate`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2007/chocolate.cpp)

#### 📅 Ano: `2008`
- [`vestibular`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2008/vestibular.cpp)

#### 📅 Ano: `2010`
- [`copaDoMundo_2010`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2010/copaDoMundo_2010.py)
- [`garcom`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2010/garcom.cpp)
- [`times`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2010/times.cpp)

#### 📅 Ano: `2011`
- [`campo_minado`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2011/campo_minado.cpp)
- [`marnestaparapeixe`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2011/marnestaparapeixe.cpp)
- [`pulodosapo`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2011/pulodosapo.cpp)

#### 📅 Ano: `2012`
- [`Consecutivos`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2012/Consecutivos.cpp)

#### 📅 Ano: `2014`
- [`fliper`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2014/fliper.py)

#### 📅 Ano: `2015`
- [`familiaReal`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2015/familiaReal.py)
- [`fitacolorida`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2015/fitacolorida.cpp)
- [`premiodomilhao`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2015/premiodomilhao.cpp)

#### 📅 Ano: `2017`
- [`bolastrocadas`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2017/bolastrocadas.cpp)

#### 📅 Ano: `2018`
- [`albumdacopa`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2018/albumdacopa.cpp)
- [`xadrez`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2018/xadrez.cpp)

#### 📅 Ano: `2019`
- [`distanciaEntreAmigos`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2019/distanciaEntreAmigos.py)
- [`idadeMonica`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2019/idadeMonica.py)
- [`idade_monica`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2019/idade_monica.cpp)

#### 📅 Ano: `2020`
- [`Bingo!`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2020/Bingo!.py)
- [`Entrega_de_Caixas`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2020/Entrega_de_Caixas.cpp)
- [`aceleradorDeParticulas`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2020/aceleradorDeParticulas.py)
- [`fissura`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2020/fissura.py)

#### 📅 Ano: `2021`
- [`zeroparacancelar`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2021/zeroparacancelar.cpp)

#### 📅 Ano: `2022`
- [`cinema`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2022/cinema.py)
- [`hotel`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2022/hotel.py)
- [`show`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi_2022/show.py)

#### 📅 Ano: `Diversos`
- [`campeonato_2012`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/campeonato_2012.py)
- [`divisaoDoTesouro`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/divisaoDoTesouro.py)
- [`elevador`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/elevador.py)
- [`epidemia`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/epidemia.py)
- [`obi`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/obi.py)
- [`quadradoMagico_2022`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/quadradoMagico_2022.py)
- [`supermercado`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/supermercado.py)
- [`torneioDeTenis`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/torneioDeTenis.py)
- [`vestibular`](OBI(Brazilian_Olympiad_in_Informatics)/PrimeiraFase/vestibular.py)

---

### 🧩 Segunda Fase

#### 📅 Ano: `2007`
- [`PaoMetro`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2007/PaoMetro.py)
- [`telemarketing`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2007/telemarketing.cpp)

#### 📅 Ano: `2009`
- [`olimpiadas`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2009/olimpiadas.py)

#### 📅 Ano: `2012`
- [`Costa`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2012/Costa.cpp)

#### 📅 Ano: `2013`
- [`Troco`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2013/Troco.py)
- [`familias_de_troia`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2013/familias_de_troia.py)

#### 📅 Ano: `2014`
- [`Loteria`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2014/Loteria.cpp)

#### 📅 Ano: `2016`
- [`medalhas`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2016/medalhas.py)

#### 📅 Ano: `2017`
- [`Jogo`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2017/Jogo.cpp)
- [`JogodeTabuleiro`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2017/JogodeTabuleiro.cpp)
- [`cartas`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2017/cartas.py)

#### 📅 Ano: `2021`
- [`Retangulo`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2021/Retangulo.py)
- [`a`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2021/a.py)
- [`duplaDeTenis`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2021/duplaDeTenis.py)
- [`lista_palindrola`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2021/lista_palindrola.py)
- [`passatempo`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2021/passatempo.py)
- [`passatempoTentativa2`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2021/passatempoTentativa2.py)

#### 📅 Ano: `2021_B`
- [`Calculo_rapido`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2021_B/Calculo_rapido.py)

#### 📅 Ano: `2022`
- [`Tanquedecombustivel`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2022/Tanquedecombustivel.py)
- [`cameras`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2022/cameras.py)
- [`pitamide`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2022/pitamide.py)

#### 📅 Ano: `2023_A`
- [`GruposDeTrabalho`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2023_A/GruposDeTrabalho.py)
- [`compressao`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2023_A/compressao.py)
- [`intervaloDistinto`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2023_A/intervaloDistinto.py)
- [`prefixo`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2023_A/prefixo.py)

#### 📅 Ano: `2023_B`
- [`BrincadeiradeRoda`](OBI(Brazilian_Olympiad_in_Informatics)/SegundaFase/obi_2023_B/BrincadeiradeRoda.py)

---

### 🧩 Terceira Fase

#### 📅 Ano: `2017`
- [`bits`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2017/bits.py)
- [`gomoku`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2017/gomoku.py)
- [`visita_entre_cidades`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2017/visita_entre_cidades.py)
- [`zip`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2017/zip.py)

#### 📅 Ano: `2018`
- [`batalha`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2018/batalha.py)
- [`troca`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2018/troca.py)

#### 📅 Ano: `2019`
- [`mesaredonda`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2019/mesaredonda.cpp)
- [`parcelamentosemjuros`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2019/parcelamentosemjuros.cpp)

#### 📅 Ano: `2021`
- [`casamentodeinteiros`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2021/casamentodeinteiros.py)

#### 📅 Ano: `2022`
- [`caravana`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2022/caravana.cpp)
- [`carroeletrico`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2022/carroeletrico.py)
- [`restaurante`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2022/restaurante.py)

#### 📅 Ano: `2023`
- [`DominoNlogonico`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2023/DominoNlogonico.py)
- [`DominoNlogonicoTentativa2`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2023/DominoNlogonicoTentativa2.py)
- [`cabo_de_guerra`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2023/cabo_de_guerra.py)
- [`metroonibus`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2023/metroonibus.py)
- [`metroonibusgabarito`](OBI(Brazilian_Olympiad_in_Informatics)/TerceiraFase/obi_2023/metroonibusgabarito.py)

---

## 📄 Licença

Distribuído sob a licença MIT. Consulte `LICENSE` para mais informações.
