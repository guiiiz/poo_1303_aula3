//programação C++
#include <iostream>
using namespace std;

//ponto de entrada para o programa
int main() {
    //o raio da área é um valor fracionado
    float raio, area;
    //o valor é fracionado e constante igual a PI
    const float PI = 3.14159;
    //interface do usuário
    cout << "Digite o raio do circulo: ";
    cin >> raio;
    //cauculo da área
    area = PI * raio * raio;
    //resultado da área do circulo
    cout << "A area do circulo eh: " << area << endl;
    
    return 0;
}