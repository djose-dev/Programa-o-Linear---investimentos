#include <stdio.h>

int main() {

    double acoes, rendaFixa, fundoImob;
    double retorno;
    double maiorRetorno = 0;

    double melhorAcoes = 0;
    double melhorRenda = 0;
    double melhorFundo = 0;

    // Testa valores de investimento
    for (acoes = 0; acoes <= 50000; acoes += 1000) {

        for (rendaFixa = 20000; rendaFixa <= 60000; rendaFixa += 1000) {

            for (fundoImob = 0; fundoImob <= 40000; fundoImob += 1000) {

                // Verifica se todo o capital foi investido
                if (acoes + rendaFixa + fundoImob == 100000) {

                    // Calcula o retorno anual
                    retorno = 0.12 * acoes
                            + 0.08 * rendaFixa
                            + 0.10 * fundoImob;

                    // Verifica se encontrou um retorno maior
                    if (retorno > maiorRetorno) {

                        maiorRetorno = retorno;

                        melhorAcoes = acoes;
                        melhorRenda = rendaFixa;
                        melhorFundo = fundoImob;
                    }
                }
            }
        }
    }

    // Exibe o resultado
    printf("========================================\n");
    printf("     PROGRAMACAO LINEAR - INVESTIMENTOS\n");
    printf("========================================\n\n");

    printf("Investimento em Acoes: R$ %.2f\n", melhorAcoes);
    printf("Investimento em Renda Fixa: R$ %.2f\n", melhorRenda);
    printf("Investimento em Fundo Imobiliario: R$ %.2f\n",
           melhorFundo);

    printf("\nRetorno anual maximo: R$ %.2f\n",
           maiorRetorno);

    return 0;
}
