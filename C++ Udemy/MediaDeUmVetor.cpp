#include <iostream>
#include <cmath>
using namespace std;

//Ler três valores para um vetor de 3 posições e depois calcule a média dos valores acessando o vetor.
int main(){
    int vetor[3], media;
    cout<<"Informe 3 valores: ";
    cin>>vetor[0]>>vetor[1]>>vetor[2];

    media = (vetor[0] + vetor[1] + vetor[2]) / 3;

    cout<<"\n"<<vetor[0];
    cout<<"\n"<<vetor[1];
    cout<<"\n"<<vetor[2];
    cout<<"\nA media dos valores fornecidos: "<<media;

}