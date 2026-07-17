#include <bits/stdc++.h>

using namespace std;
const int MAXN = 220, MAXK = 11, INF = 0x3f3f3f3f;
int n, k, a[MAXN], dp[(1 << MAXK)][(1 << MAXK)];

int main()
{
    // Inicializar o array dp com grandes valores
	memset(dp, INF, sizeof dp);
	scanf("%d %d", &n, &k);
    // Ler a entrada e definir os bits correspondentes no array a
	for(int i = 1, h, t; i <= n; ++i)
		for(scanf("%d", &h); h--;)
			scanf("%d", &t), a[i] |= (1 << (t - 1));
    // Inicializar o caso base
	dp[0][0] = 0;
    // Para cada competidor, tente adicioná-los à equipe
	for(int i = 1, mask1, mask2; i <= n; ++i)
		for(mask1 = 0; mask1 < (1 << k); ++mask1)
			for(mask2 = 0; mask2 < (1 << k); ++mask2)
                // Atualizar o estado dp
				dp[mask1 | a[i]][mask2 | (~a[i] & ((1 << k) - 1))] = min(dp[mask1 | a[i]][mask2 | (~a[i] & ((1 << k) - 1))], dp[mask1][mask2] + 1);
    // Imprimir o resultado
	printf("%d\n", dp[(1 << k) - 1][(1 << k) - 1] > n ? -1 : dp[(1 << k) - 1][(1 << k) - 1]);
}

#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 205;
const int MAX_K = 10;
const int INF = 0x3f3f3f3f;

int n, k;

// mascaraConhecimento[i] = bitmask dos temas dominados pelo competidor i
int mascaraConhecimento[MAX_N];

// dp[domina][naoDomina] = menor quantidade de pessoas necessária
int dp[1 << MAX_K][1 << MAX_K];

int main() {

    cin >> n >> k;

    // Inicializa toda a DP com infinito
    memset(dp, 0x3f, sizeof(dp));

    // Leitura dos competidores
    for (int i = 1; i <= n; i++) {

        int quantidadeTemas;
        cin >> quantidadeTemas;

        while (quantidadeTemas--) {

            int tema;
            cin >> tema;

            // Liga o bit correspondente ao tema
            mascaraConhecimento[i] |= (1 << (tema - 1));
        }
    }

    // Nenhum competidor escolhido
    dp[0][0] = 0;

    int todosOsTemas = (1 << k) - 1;

    // Processa cada competidor
    for (int pessoa = 1; pessoa <= n; pessoa++) {

        int domina = mascaraConhecimento[pessoa];

        // Bits dos temas que essa pessoa NÃO domina
        int naoDomina = (~domina) & todosOsTemas;

        for (int mascaraDomina = 0; mascaraDomina <= todosOsTemas; mascaraDomina++) {

            for (int mascaraNaoDomina = 0; mascaraNaoDomina <= todosOsTemas; mascaraNaoDomina++) {

                // Se esse estado nunca foi alcançado, ignora
                if (dp[mascaraDomina][mascaraNaoDomina] == INF)
                    continue;

                // Novo conjunto de temas dominados
                int novoDomina = mascaraDomina | domina;

                // Novo conjunto de temas NÃO dominados
                int novoNaoDomina = mascaraNaoDomina | naoDomina;

                dp[novoDomina][novoNaoDomina] = min(
                    dp[novoDomina][novoNaoDomina],
                    dp[mascaraDomina][mascaraNaoDomina] + 1
                );
            }
        }
    }

    if (dp[todosOsTemas][todosOsTemas] == INF)
        cout << -1 << '\n';
    else
        cout << dp[todosOsTemas][todosOsTemas] << '\n';

    return 0;
}