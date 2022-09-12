#include <iostream>
#include <cmath>
using namespace std;

//Preencher matriz 2x2 lendo os valores do usuario e depois troque os valores entre a primeira e a segunda linha.
//matriz [0,0][0,1]
//       [1,0][1,1]
int main(){
    int matriz[2][2];
    int aux;

    //lendo valores
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            cout<<"Informe o valor referente a posicao "<<i<<" "<<j<<" da matriz: \n";
            cin>>matriz[i][j];
        }
        
    }
    //imprindo matriz original
    cout<<"Matriz original: \n";
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    //trocando valores da matriz
    for(int j = 0; j<2; j++){
        aux = matriz[0][j];
        matriz[0][j] = matriz[1][j];
        matriz[1][j] = aux;

    }
    //imprimindo nova matriz
    cout<<"Nova matriz: \n";
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}