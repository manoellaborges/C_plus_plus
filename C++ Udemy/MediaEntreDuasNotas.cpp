#include <iostream>
#include <cmath>
using namespace std;

//Crie um algoritmo que leia duas notas e mostre a média entre elas.
int main(){
    float nota1, nota2, media;

    cout<<"Informe as duas notas: ";
    cin>>nota1>>nota2;
    media = (nota1 + nota2)/2;

    cout<<"A media: "<<media;
}