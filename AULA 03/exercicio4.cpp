// ============================================================
//  EXERCÍCIO 4 — Divisão inteira e resto da divisão
//  Semana 03 | Operadores matemáticos com int
// ============================================================
//
//  DIVISÃO COM INTEIROS — ATENÇÃO!
//  Quando dividimos dois números do tipo int, o resultado
//  também é int. A parte decimal é descartada (truncada).
//
//  Exemplo:
//    7 / 2 = 3   (e NÃO 3.5 — a parte .5 é perdida!)
//    9 / 4 = 2   (e NÃO 2.25)
//
//  O OPERADOR % (RESTO DA DIVISÃO)
//  Retorna o que "sobrou" após uma divisão inteira.
//
//  Exemplo:
//    7 % 2 = 1   (7 = 2*3 + 1, sobrou 1)
//    9 % 4 = 1   (9 = 4*2 + 1, sobrou 1)
//    10 % 5 = 0  (10 = 5*2 + 0, não sobrou nada)
//
//  USO REAL DO OPERADOR %:
//  Verificar se um número é par ou ímpar:
//    numero % 2 == 0  -> par
//    numero % 2 != 0  -> ímpar
//
// ------------------------------------------------------------
//  ENUNCIADO:
//  Uma professora quer dividir balas igualmente entre alunos.
//  Crie um programa que:
//
//  1) Leia a quantidade de balas (int)
//     e a quantidade de alunos (int).
//
//  2) Calcule e mostre:
//       - Quantas balas cada aluno recebe (divisão inteira)
//       - Quantas balas sobram para a professora (resto)
//
//  3) Verifique e mostre se a quantidade de balas é
//     par ou ímpar.
//
// ------------------------------------------------------------
//  EXEMPLO DE SAÍDA ESPERADA:
//
//  Quantidade de balas: 23
//  Quantidade de alunos: 4
//
//  Balas por aluno: 5
//  Balas que sobram: 3
//  A quantidade de balas é: ímpar
//
// ------------------------------------------------------------
//  EXEMPLO DE SAÍDA ESPERADA (outro caso):
//
//  Quantidade de balas: 30
//  Quantidade de alunos: 6
//
//  Balas por aluno: 5
//  Balas que sobram: 0
//  A quantidade de balas é: par
//
// ============================================================
//  GABARITO
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declaração das variáveis
    int balas;   // quantidade total de balas
    int alunos;  // quantidade de alunos

    // Leitura dos dados
    cout << "Quantidade de balas: ";
    cin  >> balas;
    cout << "Quantidade de alunos: ";
    cin  >> alunos;

    // Divisão inteira: o resultado é truncado automaticamente
    int balasPorAluno = balas / alunos;

    // Resto da divisão: o que sobrou após a divisão inteira
    int balasSobram = balas % alunos;

    // Exibição dos resultados
    cout << endl;
    cout << "Balas por aluno: "  << balasPorAluno << endl;
    cout << "Balas que sobram: " << balasSobram   << endl;

    // Verifica par ou ímpar usando o operador %
    if (balas % 2 == 0) {
        cout << "A quantidade de balas é: par" << endl;
    } else {
        cout << "A quantidade de balas é: ímpar" << endl;
    }

    return 0;
}