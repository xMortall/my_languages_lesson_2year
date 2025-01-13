#include "bibliotecas.h"

void menasageOnTop(){
    cout << "\t" <<"Dados eletronicos - No ambito do modulo" << endl;
    cout << "Programacao c/c++ Estruturas basicas e conceitos fundamentais" << endl;
    cout << "\t" << "\t" << "\t" << "ENTA - 2024" << endl;
}

void dadoN1(){
    cout << "\t" << "\t" << "\t"  << " " << " " << " " << endl;
    cout << "\t" << "\t" << "\t"  << " " << "*" << " " << endl;
    cout << "\t" << "\t" << "\t"  << " " << " " << " " << endl;
}
void dadoN2(){
    cout << "\t" << "\t" << "\t"  << " " << " " << "*" << endl;
    cout << "\t" << "\t" << "\t"  << " " << " " << " " << endl;
    cout << "\t" << "\t" << "\t"  << "*" << " " << " " << endl;
}
void dadoN3(){
    cout << "\t" << "\t" << "\t"  << " " << " " << "*" << endl;
    cout << "\t" << "\t" << "\t"  << " " << "*" << " " << endl;
    cout << "\t" << "\t" << "\t"  << "*" << " " << " " << endl;
}
void dadoN4(){
    cout << "\t" << "\t" << "\t"  << "*" << " " << "*" << endl;
    cout << "\t" << "\t" << "\t"  << " " << " " << " " << endl;
    cout << "\t" << "\t" << "\t"  << "*" << " " << "*" << endl;
}
void dadoN5(){
    cout << "\t" << "\t" << "\t"  << "*" << " " << "*" << endl;
    cout << "\t" << "\t" << "\t"  << " " << "*" << " " << endl;
    cout << "\t" << "\t" << "\t"  << "*" << " " << "*" << endl;
}
void dadoN6(){
    cout << "\t" << "\t" << "\t"  << "*" << " " << "*" << endl;
    cout << "\t" << "\t" << "\t"  << "*" << " " << "*" << endl;
    cout << "\t" << "\t" << "\t"  << "*" << " " << "*" << endl;
}

void lancamentoNumero(int tentativas) {
    cout << "Lançamento número: " << tentativas << endl;
    cout << "Pressione Enter para jogar novamente ou Ctrl + C para sair." << endl;
    cin.ignore();
}

int dadoFunc(int dado) {
    switch(dado) {
        case 1: dadoN1(); break;
        case 2: dadoN2(); break;
        case 3: dadoN3(); break;
        case 4: dadoN4(); break;
        case 5: dadoN5(); break;
        case 6: dadoN6(); break;
    }
    return dado;
}

int main(){

    srand(time(NULL));
    int tentativas = 0;

    while(true){
        system("CLS");    
        menasageOnTop();

        cout << "" << endl;
        cout << "" << endl;

        dadoFunc(rand()% 6 + 1);

        cout << "" << endl;

        lancamentoNumero(++tentativas);
    }
    

    return 0;
}