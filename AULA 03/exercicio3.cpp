// ============================================================
//  EXERCÍCIO 3 — Variáveis e Constantes
//  Semana 03 | Declaração de variáveis e constantes
// ============================================================
//
//  O QUE É UMA VARIÁVEL?
//  É um espaço na memória que pode ser alterado a qualquer
//  momento durante a execução do programa.
//  Para criar uma variável, usamos a notação:
//
//    TIPO  nome_do_identificador;
//
//  Exemplos:
//    int    idade;
//    float  altura;
//    char   sexo;
//
//  O QUE É UMA CONSTANTE?
//  É um espaço na memória que NÃO pode ser alterado.
//  Usamos a palavra reservada "const" antes do tipo:
//
//    const TIPO nome = valor;
//
//  Exemplo:
//    const int ANO_FUNDACAO = 1822;
//
//  Por convenção, constantes são escritas em MAIÚSCULAS.
//
//  BOAS PRÁTICAS PARA NOMES DE VARIÁVEIS:
//    - Use até 32 caracteres
//    - Comece sempre com letra ou underscore (_)
//    - Não use acentos (á, ã, ç...)
//    - C++ é sensível a maiúsculas: "idade" != "Idade"
//
// ------------------------------------------------------------
//  ENUNCIADO:
//  Em uma loja, o desconto para clientes especiais é sempre
//  fixo em 10%. Crie um programa que:
//
//  1) Declare uma CONSTANTE chamada DESCONTO com valor 10.0.
//
//  2) Leia o nome da loja (apenas a inicial, um char),
//     o preço original do produto (float)
//     e a quantidade comprada (int).
//
//  3) Calcule e mostre:
//       - O preço total sem desconto (preço x quantidade)
//       - O valor do desconto (total x DESCONTO / 100)
//       - O preço final (total - desconto)
//
// ------------------------------------------------------------
//  EXEMPLO DE SAÍDA ESPERADA:
//
//  Inicial da loja: M
//  Preço unitário (R$): 50.0
//  Quantidade: 3
//
//  === Loja M — Resumo da Compra ===
//  Total sem desconto: R$ 150.00
//  Desconto (10%):     R$ 15.00
//  Total com desconto: R$ 135.00
//
// ------------------------------------------------------------
//  EXEMPLO DE SAÍDA ESPERADA (outro caso):
//
//  Inicial da loja: K
//  Preço unitário (R$): 29.9
//  Quantidade: 2
//
//  === Loja K — Resumo da Compra ===
//  Total sem desconto: R$ 59.80
//  Desconto (10%):     R$ 5.98
//  Total com desconto: R$ 53.82
//
// ============================================================
//  GABARITO
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Constante: o desconto é sempre 10% e nunca muda
    const float DESCONTO = 10.0;

    // Variáveis: esses valores mudam a cada compra
    char  inicialLoja;
    float preco;
    int   quantidade;

    // Variáveis para guardar os resultados
    float totalSemDesconto;
    float valorDesconto;
    float totalComDesconto;

    // Leitura dos dados
    cout << "Inicial da loja: ";
    cin  >> inicialLoja;
    cout << "Preço unitário (R$): ";
    cin  >> preco;
    cout << "Quantidade: ";
    cin  >> quantidade;

    // Cálculos
    totalSemDesconto = preco * quantidade;
    valorDesconto    = totalSemDesconto * DESCONTO / 100;
    totalComDesconto = totalSemDesconto - valorDesconto;

    // Saída
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "=== Loja " << inicialLoja << " — Resumo da Compra ===" << endl;
    cout << "Total sem desconto: R$ " << totalSemDesconto << endl;
    cout << "Desconto (10%):     R$ " << valorDesconto    << endl;
    cout << "Total com desconto: R$ " << totalComDesconto << endl;

    return 0;
}