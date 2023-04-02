#include <iostream>
using namespace std;

int main() {
    char op; // declaração da variável que irá armazenar o operador
    float num1, num2; // declaração das variáveis que irão armazenar os números de entrada
    bool continuar = true; // variável de controle para continuar ou não no programa
    
    while (continuar) { // loop principal para continuar ou não no programa
        cout << "ENTRE COM O OPERADOR: +, -, *, /: ";
        cin >> op; // leitura do operador
        
        cout << "ENTRE COM DOIS VALORES: ";
        cin >> num1 >> num2; // leitura dos números
        
        // Switch para cada caso de operação
        switch(op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2; // soma
                break;
            case '-': 
                cout << num1 << " - " << num2 << " = " << num1 - num2; // subtração
                break;
            case '*': 
                cout << num1 << " * " << num2 << " = " << num1 * num2; // multiplicação
                break;
            case '/': 
                if (num2 == 0) { // verificação para evitar divisão por zero
                    cout << "ERRO: divisão por zero";
                } else {
                    cout << num1 << " / " << num2 << " = " << num1 / num2; // divisão
                }
                break;
            default:
                cout << "OPERADOR ERRADO, POR FAVOR INSIRA O OPERADOR CORRETO" ; // operador inválido
                break;
        }
        
        char resposta;
        cout << "\nDeseja continuar? (S/N) ";
        cin >> resposta; // leitura da resposta para continuar ou não
        
        if (resposta == 'N' || resposta == 'n') {
            continuar = false; // se a resposta for N ou n, interrompe a repetição
        }
    }
    
    return 0;
}
