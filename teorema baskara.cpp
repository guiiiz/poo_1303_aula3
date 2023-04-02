//programação C++
#include <iostream>
#include <cmath> //biblioteca para usar a função sqrt() para calcular a raiz quadrada
using namespace std;

//ponto de entrada para o programa
int main() {
//lados a, b, c, x1, x2, delta
float a, b, c, x1, x2, delta;
//aqui o valor de a será ditado
cout << "Digite o valor de a: ";
cin >> a;
//aqui o valor de b será ditado
cout << "Digite o valor de b: ";
cin >> b;
//aqui o valor de c será ditado
cout << "Digite o valor de c: ";
cin >> c;
//formula de bascara
delta = pow(b,2) - 4 * a * c;
//calculo da formula
if (delta >=0) {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

//aqui vai aparecer o resultado
cout << "As raizes da equacao sao: " << x1 << " e " << x2 << endl;
}
//formato para uma condição
else {
    //se as raizes nao forem reais será indicado aqui
    cout << "A equacao nao tem raises reias." << endl;
}

return 0;
}