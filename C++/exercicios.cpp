#include <bibliotecas.h>

int input;

int sum(int n){
    int s = 0;
    while(n > 0){
        s++;
        n--;
    }
    return s;
}

int sum2(){
    int s = 0;
    while(input > 0){
        s += input;
        input--;
    }
    return s;
}

int sum3(){
    int s = 0;
    for(int i = input; i > 0; i--) s++;
    return s;
}

int main(){
    
    return 0;
}