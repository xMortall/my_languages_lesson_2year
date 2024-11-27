#include "bibliotecas.h"

int main(){
    
    
    while(true){
        time_t timetamp;
        time (&timetamp);
        system("cls");
        cout << "The current tiem is:" << ctime(&timetamp) << endl;
    }

}