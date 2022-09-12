#include <iostream>
#include <cmath>
using namespace std;

//Crie um algoritmo que leia duas notas e mostre o valor absoluto da diferença entre elas
int main(){
float nota1, nota2, diferenca, dif_vlr_abs;

    cout<<"Informe as duas notas: ";
    cin>>nota1>>nota2;
    diferenca = nota1 - nota2;
    dif_vlr_abs = diferenca;
    float x = abs(dif_vlr_abs);
    cout<<"A diferenca das duas notas: "<<diferenca<<"\n";
    cout<<"Valor absoluto da diferenca: "<<x;
}