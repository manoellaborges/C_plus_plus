#include <iostream>
#include <cmath>
using namespace std;

//Ler um valor e informar se ele é primo ou não.
int main(){
    int num;
    cout<<"Informe um numero: ";
    cin>>num;
    if((num % 1 == 0) && (num % num == 1)){
        cout<<"O numero e primo! ";
    }
    else{
        cout<<"O numero nao e primo. ";
    }
}