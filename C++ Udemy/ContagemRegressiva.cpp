#include <iostream>
#include <cmath>
using namespace std;

//Criar algoritmo que conte de 0 a 10 de forma regressiva. Utilizando FOR, While e DO While
int main(){
    int a = 10, b = 10;
    //utilizando FOR
    for(int i = 10; i >= 0; i--){
        cout<<"\n"<<i;
    }

    //utilizando While
    while (a > 0){
        cout<<"\n"<<a;
        a--;
    }

    //utilizando Do While
    do{
        cout<<"\n"<<b;
        b--;
    }while(b > 0);
}