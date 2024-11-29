#include "bibliotecas.h"

vector<int> numeros = {6, 7, 3, 2, 9};


int main(){
    
    numeros.insert(numeros.begin() + 2, 4);

    for(int n : numeros){
        cout << n << endl;
    }


    return 0;
}