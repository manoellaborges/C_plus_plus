#include <iostream>
#include <cmath>
using namespace std;

//Ler 3 valores e informar se eles são iguais entre si para formarem os lados de um triangulo equilátero.
int main(){
    int a, b, c;
    cout<<"Informe 3 valores: ";
    cin>>a>>b>>c;

    if(a == b && a == c){
        cout<<"Triangulo equilatero. ";
    }
    else{
        cout<<"Triangulo nao equilatero. ";
    }

}