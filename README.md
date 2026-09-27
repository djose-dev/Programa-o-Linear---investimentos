# Otimização de Investimentos em C

Este projeto apresenta um programa desenvolvido em **linguagem C** para resolver um problema simples de **Programação Linear aplicado a investimentos**.

O objetivo é encontrar a melhor distribuição de um capital de **R$ 100.000,00** entre três tipos de investimentos:

* **Ações:** retorno de 12% ao ano
* **Renda Fixa:** retorno de 8% ao ano
* **Fundo Imobiliário:** retorno de 10% ao ano

## Como funciona

O programa testa diferentes combinações de valores investidos, utilizando intervalos de **R$ 1.000,00**.

Para cada combinação, o programa verifica se todo o capital de R$ 100.000,00 foi utilizado. Em seguida, calcula o retorno anual:

```text
Retorno = 0,12 × Ações
        + 0,08 × Renda Fixa
        + 0,10 × Fundo Imobiliário
```

A combinação que apresentar o maior retorno é armazenada e apresentada ao final do programa.

## Tecnologias utilizadas

* Linguagem C
* Compilador GCC
* Programação Estruturada
* Conceitos de Programação Linear

## Exemplo de resultado

```text
========================================
     PROGRAMACAO LINEAR - INVESTIMENTOS
========================================

Investimento em Acoes: R$ 50000.00
Investimento em Renda Fixa: R$ 20000.00
Investimento em Fundo Imobiliario: R$ 30000.00

Retorno anual maximo: R$ 10200.00
```

## Objetivo do projeto

O projeto foi desenvolvido para praticar conceitos de **otimização e programação em C**, mostrando como um algoritmo pode testar diferentes possibilidades e encontrar uma solução que maximize o retorno de um investimento.

## Como executar

Compile o programa utilizando o GCC:

```bash
gcc investimentos.c -o investimentos
```

Depois, execute:

```bash
./investimentos
```

No Windows:

```bash
investimentos.exe
```

## Autor

Projeto desenvolvido como atividade de estudo em **Programação, Otimização e Programação Linear**.
