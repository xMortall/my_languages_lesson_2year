#include "bibliotecas.h"

int sum(int k){
    if (k > 0){
        return k + sum(k - 1);
    }else{
        return 0;
    }
}

int main(){
    int resultado = sum(10);
    cout << resultado;
    return 0; 
}