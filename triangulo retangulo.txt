//programação C++
#include <iostream>
using namespace std;

//ponto de entrada para o programa
int main() {
    //base, altura e area será fracionada
float base, altura, area;
//aqui a base do triangulo retangulo será digitada pelo usuário
cout << "Digite a base do triangulo retangulo: ";
cin >> base;
//aqui será digitado a altura do triangulo retangulo
cout << "Digite a altura do triangulo retangulo: ";
cin >> altura;
//a area é igual a base multiplicado pela altura divido por 2
area = (base * altura) / 2;
//aqui vai aparecer o resultado
cout << "A area do triangulo retangulo eh: " << area << endl;

return 0;
}