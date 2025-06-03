/**
 * @file backupWork.cpp
 * @brief Backup de docker feito em C++.
 * @author Emanuel Borges
 * @date 2025-06-03
 * 
 * Recebe dois nomes de ficheiros (origem e destino)
 * Abre o ficheiro de origem
 * Cria uma cópia com o nome de destino
 * 
 * Usar esse comando : ./backupWork origem.sqlite copia.sqlite
 */

#include "../bibliotecas.h"

using namespace std;

int main(int argumentoComandos, char* argumentoArray[]) {
    if (argumentoComandos < 3) {
        cout << "Uso: " << argumentoArray[0] << " <origem> <destino>\n";
        return 1;
    }

    ifstream origem(argumentoArray[1], ios::binary);
    ofstream destino(argumentoArray[2], ios::binary);       //ios::binary é importante para copiar tudo corretamente, mesmo dados não-textuais.

    destino << origem.rdbuf();                              //rdbuf serve para copiar tudo do ficheiro e enviar para o destino

    cout << "Backup feito com sucesso!\n";
    return 0;
}

