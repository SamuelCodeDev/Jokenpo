#include "menu.h"
#include <iostream>
#include <limits>
#include <random>
using std::cin;
using std::cout;
using std::mt19937;
using std::streamsize;
using std::random_device;
using std::numeric_limitis;
using std::uniform_int_distribution;

static void LimparBuffer() {
	cin.clear();
	cin.ignore(numeric_limitis<streamsize>::max(), '\n');
}

void Menu() {
	LimparTela();
	cout << "======================\n";
    cout << "\tJokenpô\n";
    cout << "======================\n\n";
    cout << "1) Pedra\n";
    cout << "2) Papel\n";
    cout << "3) Tesoura\n\n";
    cout << "Sua escolha: ";
}

void ValidarOpcao(int & opcao) {
	while(opcao != Pedra &&
		  opcao != Papel &&
		  opcao != Tesoura) {
		LimparBuffer();
		cout << "Opção inválida. Digite Novamente: ";
		cin >> opcao;
	}
}

int EscolherAcao() {
	random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(1, 3);
    return dis(gen);
}

void ExibirEscolha(const char * mensagem, int jogada) {
	cout << mensagem << '\n';
	switch (jogada)
    {
        case Pedra  : cout << "Pedra" << endl; break;
        case Papel  : cout << "Papel" << endl; break;
        case Tesoura: cout << "Tesoura" << endl; break;
    }
}