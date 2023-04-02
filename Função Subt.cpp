#include <iostream>
using namespace std;

// Declaração da função Subt
int Subt(int a, int b)
{
    int Resultado;
    Resultado = a - b; // realiza a operação de subtração entre a e b
    return Resultado; // retorna o resultado da subtração
}

// Função principal do programa
int main()
{
    cout << Subt(7, 6) << endl; // chama a função Subt com os argumentos 7 e 6 e imprime o resultado na tela
    return 0;
}
