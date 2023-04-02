#include <iostream>
using namespace std;

// Declaração da função Divisao
float Divisao(float a, float b)
{
    float Resultado;
    Resultado = a / b; // realiza a operação de divisão entre a e b
    return Resultado; // retorna o resultado da divisão
}

// Função principal do programa
int main()
{
    cout << Divisao(7, 6) << endl; // chama a função Divisao com os argumentos 7 e 6 e imprime o resultado na tela
    return 0;
}
