#include "bibliotecas.h"

int matriz(int dim){
    system("clr");

    for(int i = 1; i <= dim; i++){
        for(int j = 1; j <= dim; j++){
            cout << setw(4) << i*j;
        }
        cout << endl;
    }

    return 0;
}

int main(){

    matriz(15);
    return 0;
}

