#include <iostream>
#include <cmath>
using namespace std;

int main(){
float salario, valor_imposto;
    cout<<"Informe o salario: R$";
    cin>>salario;

    if(salario>=0.00 && salario <= 2000.00){
        cout<<"Isento.";
    }else if (salario>=2000.01 && salario <= 3000.00){
        valor_imposto=salario*0.08;
        cout<<"O valor do imposto a ser pago e de R$"<<valor_imposto;
    }else if (salario>=3000.01 && salario <= 4500.00){
        valor_imposto=salario*0.18;
        cout<<"O valor do imposto a ser pago e de R$"<<valor_imposto;
    }else if (salario>4500.00){
        valor_imposto=salario*0.28;
        cout<<"O valor do imposto a ser pago e de R$"<<valor_imposto;
    }
    
}