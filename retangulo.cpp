//programação C++
#include <iostream>
using namespace std;

//ponto de entrada para o programa
int main() {
    //comprimento, largura e area será fracionada
float comprimento, largura, area;
//aqui o comprimento do retangulo será digitada pelo usuário
cout << "Digite o comprimento do retangulo: ";
cin >> comprimento;
//aqui será digitado a largura do retangulo
cout << "Digite a largura do retangulo: ";
cin >> largura;
//a area é igual o comprimento multiplicado pela largura divido por 2
area = (comprimento * largura) / 2;
//aqui vai aparecer o resultado
cout << "A area do retangulo eh: " << area << endl;

return 0;
}