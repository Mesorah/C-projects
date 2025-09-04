#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


struct ProfileStats {
    char username[20];
    int energy;
    float money;
};


void work(int *energy, float *money) {
    float money_earned = 10;
    
    *energy -= 50;
    *money += money_earned;

    printf(
        "voce trabalhou duro! \n"
        "e conseguiu: %0.2f reais e agora voce tem no total: %0.2f reais, \n"
        "mas sua energia agora é: %d", 
        money_earned, *money, *energy
    );
}


void menu(int *energy, float *money) {
    int choice;

    printf(
        "Digite \n"
        "[1] para trabalhar \n"
        "[2] para descansar \n"
        "[3] para ir a loja \n"
        "[4] para sair do jogo \n"
    );

    scanf("%d", &choice);

    if (choice == 1) work(energy, money);
}


void profile() {
    struct ProfileStats profile_stats;

    printf("Digite seu nome: ");
    scanf("%s", profile_stats.username);

    profile_stats.energy = 100;
    profile_stats.money = 0;

    system("cls");

    printf(
        "Bem vindo %s, \n "
        "neste mundo voce comeca com %.0f de dinheiro e %d de energia, \n"
        "trabalhe para ganhar mais dinheiro, mas isso gasta sua energia, \n"
        "boa sorte! \n",
        profile_stats.username, profile_stats.money, profile_stats.energy
    );

    menu(&profile_stats.energy, &profile_stats.money);
}


int main() {
    setlocale(LC_ALL, "Portuguese");

    profile();

    return 0;
}
