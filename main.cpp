#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int jogador, computador;
    int vitorias = 0, derrotas = 0, empates = 0;
    char continuar;

    cout << "=== PEDRA, PAPEL E TESOURA ===" << endl;
    cout << "1 - Pedra\n2 - Papel\n3 - Tesoura\n\n";

    do {
        cout << "Escolha sua jogada: ";
        cin >> jogador;
        computador = rand() % 3 + 1;

        cout << "\nVocê: ";
        switch(jogador) {
            case 1: cout << "Pedra"; break;
            case 2: cout << "Papel"; break;
            case 3: cout << "Tesoura"; break;
        }

        cout << " vs Computador: ";
        switch(computador) {
            case 1: cout << "Pedra"; break;
            case 2: cout << "Papel"; break;
            case 3: cout << "Tesoura"; break;
        }
        cout << endl;

        if (jogador == computador) {
            cout << "Empate!\n";
            empates++;
        } else if ((jogador == 1 && computador == 3) ||
                   (jogador == 2 && computador == 1) ||
                   (jogador == 3 && computador == 2)) {
            cout << "Você ganhou!\n";
            vitorias++;
        } else {
            cout << "Você perdeu!\n";
            derrotas++;
        }

        cout << "\nPlacar: Você " << vitorias << " x " << derrotas << " Computador";
        cout << " (Empates: " << empates << ")\n";

        cout << "\nJogar novamente? (s/n): ";
        cin >> continuar;
        cout << endl;

    } while (continuar == 's' || continuar == 'S');

    cout << "Obrigado por jogar!";
    return 0;
}