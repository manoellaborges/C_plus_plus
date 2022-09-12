#include <iostream>
#include <cmath>
using namespace std;

//tabuada usando laço de repetição FOR
int main(){
    int numero;
    cout<<"Informe qual numero de tabuada deseja fazer: ";
    cin>>numero;

    for(int i = 1; i<=10; i++){
        cout<<numero<<" * "<<i<<" = "<<numero*i<<"\n";
    }
}