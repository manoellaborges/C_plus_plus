#include <iostream>
#include <cmath>
using namespace std;

//Ler três valores inteiros na mesma linha e multiplicar em variavel própria e imprimir
int main(){
    int num1, num2, num3, resultado;
    cout<<"Informe tres valores: ";
    cin>>num1>>num2>>num3;
    
    resultado = num1 * num2 * num3;
    cout<<"O resultado da multiplicacao: "<<resultado;
}