// ============================================================
//  EXERCÍCIO 2 — Calculadora de média escolar
//  Semana 03 | Tipos de dado: int e double
// ============================================================
//
//  QUAL A DIFERENÇA ENTRE int E double?
//
//    int    -> guarda números INTEIROS (sem vírgula)
//              exemplos: 1, 5, 100, -3
//              uso típico: contagens, quantidades, notas inteiras
//
//    double -> guarda números REAIS (com vírgula)
//              exemplos: 7.5, 9.0, 3.14, -0.5
//              uso típico: médias, preços, medidas
//
//  OPERADORES ARITMÉTICOS:
//    +   soma          ex: 7 + 3  = 10
//    -   subtração     ex: 7 - 3  = 4
//    *   multiplicação ex: 7 * 3  = 21
//    /   divisão       ex: 7.0 / 2 = 3.5
//
//  ATENÇÃO: se dividir dois int, o resultado é truncado!
//    7 / 2 = 3   (errado para média)
//    7.0 / 2 = 3.5  (correto — use double)
//
// ------------------------------------------------------------
//  ENUNCIADO:
//  Crie um programa que leia as 3 notas de um aluno
//  (cada nota pode ter decimal, ex: 7.5) e mostre:
//    1) A média das três notas.
//    2) Uma mensagem: "Aprovado" se a média >= 6.0
//                 ou "Reprovado" se a média < 6.0.
//
// ------------------------------------------------------------
//  EXEMPLO DE SAÍDA ESPERADA:
//
//  === Calculadora de Média ===
//  Digite a nota 1: 8.0
//  Digite a nota 2: 6.5
//  Digite a nota 3: 7.0
//  Média: 7.17
//  Resultado: Aprovado
//
// ------------------------------------------------------------
//  EXEMPLO DE SAÍDA ESPERADA (outro caso):
//
//  === Calculadora de Média ===
//  Digite a nota 1: 4.0
//  Digite a nota 2: 5.5
//  Digite a nota 3: 3.0
//  Média: 4.17
//  Resultado: Reprovado
//
// ============================================================
//  GABARITO
// ============================================================

#include <iostream>
#include <iomanip>   // necessário para usar setprecision
using namespace std;

int main() {

    // Declaração das variáveis
    double nota1, nota2, nota3; // as três notas do aluno
    double media;               // resultado da média

    // Leitura das notas
    cout << "=== Calculadora de Média ===" << endl;
    cout << "Digite a nota 1: ";
    cin  >> nota1;
    cout << "Digite a nota 2: ";
    cin  >> nota2;
    cout << "Digite a nota 3: ";
    cin  >> nota3;

    // Cálculo da média
    // Usamos 3.0 (double) para garantir divisão com decimal
    media = (nota1 + nota2 + nota3) / 3.0;

    // Exibimos a média com 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "Média: " << media << endl;

    // Verificamos se foi aprovado ou reprovado
    if (media >= 6.0) {
        cout << "Resultado: Aprovado" << endl;
    } else {
        cout << "Resultado: Reprovado" << endl;
    }

    return 0;
}