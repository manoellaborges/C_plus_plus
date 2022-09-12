#include <iostream>
#include <time.h>
using namespace std;

//gerando numeros aleatorios
int main(){
    srand((unsigned) time(NULL));
    int aleatorio = rand();
    cout<<aleatorio;
}