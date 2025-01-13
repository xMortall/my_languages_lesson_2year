#include <iostream>
#include <iomanip>
using namespace std;

float pontos = 0;
float pontosPorSegundo = 1;


float upgrades(float &pontosNecesarios, float multiPontos, float &precoMultiplicador){
    if (pontos >= pontosNecesarios){
        system("CLS");

        pontosPorSegundo += multiPontos;
        pontos -= pontosNecesarios;
        cout << "Upgrade comprado\n" << endl;
        pontosNecesarios *= precoMultiplicador;

        cout << fixed << setprecision(1);
        cout << "Pontos:" << pontos << endl;
    }else{
        system("CLS");

        cout << "Nao tens o sufeciente\n" << endl;

        cout << fixed << setprecision(1);
        cout << "Pontos:" << pontos << endl;
    }
    return pontosNecesarios;
}

void loja(){
    
    float escolhaUpgrade;
    static float preco_upg1 = 10;
    static float pontos_upg1 = 0.1;
    static float preco_upg2 = 50;
    static float pontos_upg2 = 0.3;
    static float precoMultiplicador = 1.2;

    cout << "=== LOJA ===" "\n";
    

    cout << "Upgrade 1: " << "\n" << "Adiciona + 0.1 pontos por segundo" << endl;
    cout << "Custa: " << preco_upg1 << endl;

    cout << "" << "\n";

    cout << "Upgrade 2: " << "\n" << "Adiciona + 0.3 pontos por segundo" << endl;
    cout << "Custa: " << preco_upg2 << endl;
    cin >> escolhaUpgrade;

    if (escolhaUpgrade == 1){
        upgrades(preco_upg1, pontos_upg1, precoMultiplicador);
    }

    if (escolhaUpgrade == 2){
        upgrades(preco_upg2, pontos_upg2, precoMultiplicador);
    }

}

void farmPoints(){
    int escolha;

    cout << " " << endl;
    cout << "Clique 1 para farmar ou digite 2 para abrir a loja" << endl;
    cin >> escolha;

    if( escolha == 1){
        system("CLS");
        pontos += pontosPorSegundo;

        cout << fixed << setprecision(1);
        cout << "Pontos:" << pontos << endl;

    }if( escolha == 2){
        system("CLS");
        loja();
    }
}

int main(){
    while(true){
        farmPoints();
    }

    return 0;
}