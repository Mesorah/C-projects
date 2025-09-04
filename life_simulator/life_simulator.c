#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


typedef struct {
    char username[20];
    int energy;
    float money;
} ProfileStats;


typedef struct {
    ProfileStats profile_stats;
    float money_earned;
} WorkResult;


WorkResult work_data() {
    WorkResult work_result = {0};

    work_result.money_earned = 10; // Hard coded

    work_result.profile_stats.money += work_result.money_earned;

    work_result.profile_stats.energy -= 50;

    return work_result;
}


void work() {
    WorkResult work_result = work_data();

    printf(
        "voce trabalhou duro! \n"
        "e conseguiu: %0.2f reais e agora voce tem no total: %0.2f reais, \n"
        "mas sua energia agora eh: %d \n", 
        work_result.money_earned,
        work_result.profile_stats.money,
        work_result.profile_stats.energy
    );
}


void menu() {
    int choice;

    while (1) {
        printf(
            "Digite \n"
            "[1] para trabalhar \n"
            "[2] para descansar \n"
            "[3] para ir a loja \n"
            "[4] para sair do jogo \n"
        );

        scanf("%d", &choice);

        if (choice == 1) work();
    }
}


void profile() {
    ProfileStats profile_stats;

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

    menu();
}


int main() {
    setlocale(LC_ALL, "Portuguese");

    profile();

    return 0;
}
