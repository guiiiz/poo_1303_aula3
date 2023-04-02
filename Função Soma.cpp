#include <iostream>
using namespace std;

// Declaração da função Soma
int Soma(int a, int b)
{
    int Resultado;
    Resultado = a + b; // realiza a operação de adição entre a e b
    return Resultado; // retorna o resultado da adição
}

// Função principal do programa
int main()
{
    cout << Soma(7, 6) << endl; // chama a função Soma com os argumentos 7 e 6 e imprime o resultado na tela
    return 0;
}
