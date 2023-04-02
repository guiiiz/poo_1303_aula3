#include <iostream>
using namespace std;

// Declaração da função Mult
int Mult(int a, int b)
{
    int Resultado;
    Resultado = a * b; // realiza a operação de multiplicação entre a e b
    return Resultado; // retorna o resultado da multiplicação
}

// Função principal do programa
int main()
{
    cout << Mult(7, 6) << endl; // chama a função Mult com os argumentos 7 e 6 e imprime o resultado na tela
    return 0;
}
