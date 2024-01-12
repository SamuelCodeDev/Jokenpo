#include <iostream>
#include "placar.h"
#include "menu.h"
using std::cin;
using std::cout;

#define endl '\n'

int main() {
#ifdef _WIN32
    ConfigurarAcentuacaoConsole();
#endif

    char resposta = 'S';
    int resultado[3][3] = 
    {
        {Empate, Perder, Ganhar},
        {Ganhar, Empate, Perder},
        {Perder, Ganhar, Empate}
    };

	while(resposta != 'N' && resposta != 'n') {
		Menu();
	    int opcao;
	    cin >> opcao;
	    ValidarOpcao(opcao);

	    int & player = opcao;
		int CPU = EscolherAcao();

		ExibirEscolha("Você escolheu: ", player);
		ExibirEscolha("A CPU escolheu: ", CPU);

        int ganhador = resultado[player - 1][CPU - 1];
        Placar(ganhador);

        cout << "Deseja jogar novamente o Jokenpô [S/N]? ";
		cin >> resposta;

		while(resposta != 'N' &&
			  resposta != 'n' &&
			  resposta != 'S' &&
			  resposta != 's') {
			cout << "Opção inválida. Digite novamente: ";
			cin >> resposta;
		}
	}
}