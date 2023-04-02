//Diretiva do pré-processador com a biblioteca iostream
#include <iostream>
//Diretiva do pré-processador com a biblioteca string
#include <string>
//Definir o uso do namespace std
using namespace std;

//Função principal do programa, que é executada quando ele é iniciado
int main() {
   
//variaveis que representam as notas do aluno nas avaliações ac1, ac2 e af
   double ac1, ac2, af;
//aqui exibe a mensagem na tela para digitar a primeira nota
   cout << "Digite sua primeira nota do semestre >>> ";
//aqui é lido a mensagem do usuário e armazenado variavel correspondente
   cin >> ac1;
//aqui exibe a mensagem na tela para digitar a segunda nota
   cout << "Digite a sua segunda nota do semestre >>> ";
//aqui é lido a mensagem do usuário e armazenado variavel correspondente
   cin >> ac2;
//aqui exibe a mensagem na tela para digitar a terceira nota
   cout << "Digite a sua terceira nota do semestre ";
//aqui é lido a mensagem do usuário e armazenado variavel correspondente
   cin >> af;
   
//aplicação de formula para calcular a média. O peso de AC1 é 15%
   ac1 = (ac1 * 0.15);
//aplicação de formula para calcular a média. O peso de AC2 é 35%
   ac2 = (ac2 * 0.35);
//aplicação de formula para calcular a média. O peso de AF é 50%
   af = (af * 0.5);
   
//calculo da soma das notas
   double soma = (ac1 + ac2 + af);
   
//o resultado da média do aluno na tela
   cout << " A sua media do semestre foi: " << soma << endl << endl;

//se a nota do aluno foi maior ou igual a 5 ele é aprovado
   if(soma >= 5){
//aparece a mensagem na tela que foi aprovado com uma nota de 5 ou mais que 5
       cout << "Parabéns! Você foi aprovado! " << endl;
//caso a nota seja menor que 5, o aluno é reprovado
   }else{
//aparece a mensagem na tela indicando que foi reprovado
       cout << "Eita! Você foi reprovado!" << endl;
       
   }

    return 0;
}