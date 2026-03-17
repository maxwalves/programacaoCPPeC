// ============================================================
//  EXERCÍCIO 5 — float vs double: qual a diferença?
//  Semana 03 | Tipos de dado: float e double
// ============================================================
//
//  TANTO float QUANTO double GUARDAM NÚMEROS COM VÍRGULA.
//  ENTÃO QUAL É A DIFERENÇA?
//
//  A diferença está na PRECISÃO (quantas casas decimais
//  o tipo consegue representar corretamente):
//
//    float   -> ocupa 4 bytes -> ~6 casas decimais precisas
//    double  -> ocupa 8 bytes -> ~15 casas decimais precisas
//
//  Exemplo com o número 1 dividido por 3:
//    O resultado real é: 0.333333333333333...
//
//    float  armazena: 0.333333  (para após ~6 casas)
//    double armazena: 0.333333333333333  (muito mais preciso)
//
//  QUANDO USAR CADA UM?
//    float  -> quando a precisão não é crítica e a memória
//              é limitada (ex: jogos, gráficos)
//    double -> quando a precisão é importante
//              (ex: cálculos científicos, financeiros)
//
//  O slide da aula destaca: float ≠ double
//
// ------------------------------------------------------------
//  ENUNCIADO:
//  Crie um programa que demonstre a diferença de precisão
//  entre float e double.
//
//  1) Declare a variável  resultado_float  do tipo float
//     e a variável  resultado_double  do tipo double.
//
//  2) Atribua a AMBAS o resultado de 1.0 dividido por 3.0.
//
//  3) Exiba cada resultado com 2, 6 e 10 casas decimais,
//     usando setprecision().
//     Observe onde os valores começam a divergir.
//
// ------------------------------------------------------------
//  EXEMPLO DE SAÍDA ESPERADA:
//
//  === Comparando float e double ===
//
//  Com 2 casas decimais:
//    float:  0.33
//    double: 0.33
//
//  Com 6 casas decimais:
//    float:  0.333333
//    double: 0.333333
//
//  Com 10 casas decimais:
//    float:  0.3333333433
//    double: 0.3333333333
//
//  Conclusao: a partir de ~7 casas, float perde precisao!
//
// ============================================================
//  GABARITO
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Declaração: mesmo cálculo, tipos diferentes
    float  resultado_float  = 1.0f / 3.0f;  // o sufixo f indica float
    double resultado_double = 1.0  / 3.0;   // sem sufixo = double

    cout << "=== Comparando float e double ===" << endl;
    cout << fixed; // garante exibição com casas decimais fixas

    // Com 2 casas decimais — ainda não há diferença visível
    cout << endl << "Com 2 casas decimais:" << endl;
    cout << "  float:  " << setprecision(2) << resultado_float  << endl;
    cout << "  double: " << setprecision(2) << resultado_double << endl;

    // Com 6 casas decimais — ainda praticamente iguais
    cout << endl << "Com 6 casas decimais:" << endl;
    cout << "  float:  " << setprecision(6) << resultado_float  << endl;
    cout << "  double: " << setprecision(6) << resultado_double << endl;

    // Com 10 casas decimais — aqui a diferença fica clara!
    cout << endl << "Com 10 casas decimais:" << endl;
    cout << "  float:  " << setprecision(10) << resultado_float  << endl;
    cout << "  double: " << setprecision(10) << resultado_double << endl;

    cout << endl;
    cout << "Conclusao: a partir de ~7 casas, float perde precisao!" << endl;

    return 0;
}