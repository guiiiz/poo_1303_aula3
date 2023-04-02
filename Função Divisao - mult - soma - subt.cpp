#include <iostream>
using namespace std;

float Soma(float a, float b) {
    return a + b;
}

float Subtracao(float a, float b) {
    return a - b;
}

float Multiplicacao(float a, float b) {
    return a * b;
}

float Divisao(float a, float b) {
    if (b == 0) {
        cout << "Erro: divisao por zero" << endl;
        return 0;
    } else {
        return a / b;
    }
}

int main() {
    float num1, num2, resultado;
    char op;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Digite o operador (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            resultado = Soma(num1, num2);
            cout << num1 << " + " << num2 << " = " << resultado << endl;
            break;
        case '-':
            resultado = Subtracao(num1, num2);
            cout << num1 << " - " << num2 << " = " << resultado << endl;
            break;
        case '*':
            resultado = Multiplicacao(num1, num2);
            cout << num1 << " * " << num2 << " = " << resultado << endl;
            break;
        case '/':
            resultado = Divisao(num1, num2);
            if (resultado != 0) {
                cout << num1 << " / " << num2 << " = " << resultado << endl;
            }
            break;
        default:
            cout << "Operador invalido." << endl;
            break;
    }

    return 0;
}
