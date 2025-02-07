#include "bibliotecas.h"

string modificarFrase(const string& frase, char simbolo) {
    string fraseComTracos = frase;

    for (char& c : fraseComTracos) {
        if (c != ' ') {
            c = simbolo;
        } else {
            c = ' ';
        }
    }

    return fraseComTracos;
}

void revelarLetra(const string& fraseOriginal, string& fraseOculta, char letra) {
    bool letraEncontrada = false;
    letra = toupper(letra);
    
    for (size_t i = 0; i < fraseOriginal.size(); i++) {
        if (fraseOriginal[i] == letra) {
            fraseOculta[i] = letra;
            letraEncontrada = true;
        }
    }

    if (!letraEncontrada) {
        cout << "\033[31m \nLetra incorreta! Tente novamente.\033[37m" << endl;
    }
}

void frasses() {
    string frase, fraseOculta, tentativas;
    char simbolo = '_', tentativa;
    
    cout << "Diga uma frase: ";
    getline(cin, frase);
    for (char &c : frase) {
        c = toupper(c);
    }
    system("clear || cls");

    fraseOculta = modificarFrase(frase, simbolo);

    while (fraseOculta != frase) {
        cout << "\nFrase atual: " << fraseOculta << endl;
        cout << "Digite uma letra: ";
        cin >> tentativa;
        tentativa = toupper(tentativa);

        if (tentativas.find(tentativa) == string::npos){ //find vai servir para ver se ja foi usada.
            if (!tentativas.empty()) { //verifica se a string ta vazia.
                tentativas += " ";
            }
            tentativas += tentativa;
        }

        system("clear || cls");
        
        revelarLetra(frase, fraseOculta, tentativa);
        cout << "Usaste: " << tentativas << endl;
    }

    cout << "\n\033[32m Acertaste: " <<"\033[37m" << frase << endl;
}

int main() {
    system("clear || cls");
    frasses();
    return 0;
}