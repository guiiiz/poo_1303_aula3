//programação C++
#include <iostream>
#include <cmath> //biblioteca para usar a função sqrt() para calcular a raiz quadrada
using namespace std;

//ponto de entrada para o programa
int main() {
//lados a, b e c do triangulo retangulo
float a, b, c;
//aqui os valores dos lados serão digitados pelo usuário
cout << "Digite o valor do primeiro lado do triangulo: ";
cin >> a;
cout << "Digite o valor do segundo lado do triangulo: ";
cin >> b;

//usando o teorema de Pitágoras para calcular o terceiro lado do triangulo
c = sqrt(pow(a, 2) + pow(b, 2));

//aqui vai aparecer o resultado
cout << "O valor do terceiro lado do triangulo retangulo eh: " << c << endl;

return 0;
}