#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaração das variáveis e atribuição dos valores
    int a = 5;
    int b = 10;
    int c = 15;
    
    // Teste de condição para verificar se a < b e b < c
    if (a < b && b < c ) {
        //mensagem que mostra que a ordem é a, b e c
        cout << "A ordem é: a, b, c" << endl;
    }
    
    // Teste de condição para verificar se a > b ou b > c
    if (a > b || b > c ) {
       //mensagem que é mostrada caso uma das condições seja verdadeira
        cout << "Pelo menos uma das condições é verdadeira" << endl;
    }

    // Teste de condição para verificar se a é diferente de b
    if (!(a == b)) {
       //mensagem que é mostrada caso a seja diferente de b
        cout << "a é diferente de b" << endl;
    }
    
    return 0;
}