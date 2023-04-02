#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaração das variáveis e atribuição dos valores
    int num1 = 10, num2 = 4;
    int soma, multi, divi, modulo, subt;

    // Operações matemáticas entre as variáveis
    soma = num1 + num2;
    multi = num1 * num2;
    divi = num1 / num2;
    modulo = num1%num2;
    subt = num1 - num2;

    // Saída dos resultados das operações na tela
    cout << soma << endl;
    cout << multi << endl;
    cout << divi << endl;
    cout << modulo << endl;
    cout << subt << endl;

    return 0;
}