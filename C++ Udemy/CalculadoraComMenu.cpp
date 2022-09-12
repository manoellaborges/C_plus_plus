#include <iostream>
#include <cmath>
using namespace std;

//Ler 2 valores e depois crie um menu (usando Switch Case) de 4 opções. 
//Somar, subtrair, dividir e multiplicar.
//Depois que o usuário escolher uma opção mostre o resultado da operação escolhida com os 2 valores lidos.
int main(){
    int valor1, valor2, opcao, soma, sub, div, multi;
    cout<<"Informe dois valores: ";
    cin>>valor1>>valor2;

    cout<<"Informe o numero da opcao desejada a seguir: \n(1) - Soma \n(2) - Subtracao \n(3) - Divisao \n(4) - Multiplicacao\n";
    cin>>opcao;

    switch (opcao)
    {
    case(1):
        soma = valor1 + valor2;
        cout<<valor1<<" + "<<valor2<<" = "<<soma;
        break;
    case(2):
        sub = valor1 - valor2;
        cout<<valor1<<" - "<<valor2<<" = "<<sub;
        break;
    case(3):
        div = valor1 / valor2;
        cout<<valor1<<" / "<<valor2<<" = "<<div;
        break;
    case(4):
        multi = valor1 * valor2;
        cout<<valor1<<" * "<<valor2<<" = "<<multi;
        break;
    default:
        cout<<"Opcao invalida.";
        break;
    }
}