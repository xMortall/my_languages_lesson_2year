#include "bibliotecas.h"

using namespace std;

int main(){

    system("cls");

    string ficheiro;

    cout << "Insira o nome do ficheiro: ";
    cin >> ficheiro;

while(true){
    try{
        ifstream nome(ficheiro);

        if(!nome.is_open()){
            throw "O ficheiro não foi encontrado";
        }
        throw "O ficheiro foi aberto";
    }catch(const char *e){
        if(e[0] == 'E')
            cout << "Erro ao abrir" << endl;
        else if(e[0] == 'O')
        cout << e << endl;
    }
}

    return 0;
}