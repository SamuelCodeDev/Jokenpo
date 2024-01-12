#pragma once

#ifdef _WIN32
#include <Windows.h>

inline void ConfigurarAcentuacaoConsole() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
}
#endif

inline void LimparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

enum { Pedra = 1, Papel, Tesoura };

void Menu();
int EscolherAcao();
void JogarNovamente();
void ValidarOpcao(char&);
void ExibirEscolha(const char*, int);