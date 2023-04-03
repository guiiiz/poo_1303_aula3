#include <iostream>
#include <string>
using namespace std;

int main() {
    char continuar;
    do {
   // Declaração de variáveis para as notas do semestre
   double nota1, nota2, nota3, nota4;
   
   // Aqui aparece na tela a mensagem para que o aluno digite sua primeira nota
   cout << "Digite sua primeira nota do semestre >>> ";
//aqui é lido a mensagem do usuário e armazenado variavel correspondente
   cin >> nota1;
// Aqui aparece na tela a mensagem para que o aluno digite sua segunda nota
   cout << "Digite a sua segunda nota do semestre >>> ";
//aqui é lido a mensagem do usuário e armazenado variavel correspondente
   cin >> nota2;
// Aqui aparece na tela a mensagem para que o aluno digite sua terceira nota
   cout << "Digite a sua terceira nota do semestre ";
//aqui é lido a mensagem do usuário e armazenado variavel correspondente
   cin >> nota3;
// Aqui aparece na tela a mensagem para que o aluno digite sua quarta nota
   cout << "Digite a sua quarta nota do semestre ";
   cin >> nota4;
   
   // Cálculo da média das notas
   double soma = (nota1 + nota2 + nota3 + nota4);
   soma = (soma / 4 );
   
   // Resultado da média para o usuário na tela
   cout << " A sua media do semestre foi: " << soma << endl << endl;
   
   // Verificação de aprovação ou reprovação, se for maior ou igual a 7 é aprovado, se não, reprovado
   if(soma >= 7){
       cout << "Parabéns! Você foi aprovado! " << endl;
   }else{
       cout << "Infelizmente você foi reprovado!" << endl;
   }
   cout << "Deseja continuar? (s/n) >>> ";
   cin >> continuar;
} while (continuar == 's' || continuar == 'n');

   return 0;
}