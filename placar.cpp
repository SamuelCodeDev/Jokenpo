#include <iostream>
#include "placar.h"
using std::cout;

#define endl '\n'

enum { Perder = 1, Empate, Ganhar };

void Placar(int ponto) {
	static int cpu = 0;
    static int player = 0;
    static int empates = 0;
    static int tentativas = 1;

    switch (ponto) {
        case Empate: empates++; break;
        case Ganhar: player++; break;
        case Perder: cpu++; break;
    }

    cout << "======================\n";
    cout << "\tPlacar\n\n";
    cout << "Tentativas: " << tentativas << endl;
    cout << "Empates: " << empates << endl;
    cout << "Player: " << player << endl;
    cout << "CPU: " << cpu << endl << endl;
    cout << "======================\n";

    tentativas++;
}