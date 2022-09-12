#include <iostream>
#include <cmath>
using namespace std;

//Ler três notas e calcular média entre elas. Se o valor for > 7 informe aprovado, se for < 7, reprovado.
int main(){
    float nota1, nota2, nota3, media;
    cout<<"Informe suas 3 notas: ";
    cin>>nota1>>nota2>>nota3;

    media = (nota1 + nota2 + nota3)/3;

    if(media>7){
        cout<<"Aluno aprovado! ";
    }
    else{
        cout<<"Aluno reprovado! ";
    }
    
}