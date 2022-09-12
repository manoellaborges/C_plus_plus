#include <iostream>
#include <cmath>
using namespace std;

int main(){

float A, B, C, perimetro, area_triangulo;
    cout<<"Entre com tres valores: ";
    cin>>A, B, C;
    if((A<B+C) && (B<A+C) && (C<A+B)){
        perimetro=A+B+C;
        cout<<"Perimetro = "<<perimetro;
    }
    else{
        area_triangulo=((A+B)*C)/2;
        cout<<"Area = "<<area_triangulo;

    }
}