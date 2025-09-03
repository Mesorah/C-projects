#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void work(int energy, float money) {
    energy -= 50;
    money += 10;

    printf("a energia eh %d e seu dinheiro eh %.2f \n", energy, money);
}

void profile() {
    char username[20];
    printf("Digite seu nome: ");
    scanf("%s", &username);

    int energy = 100;
    float money = 0;

    system("cls");

    printf(
        "Bem vindo %s, neste mundo voce comeca com %.0f de dinheiro e %d de energia, "
        "trabalhe para ganhar mais dinheiro, mas isso gasta sua energia, boa sorte!",
        username, money, energy
    );

    printf("a energia no profile eh %d e seu dinheiro no profile eh %d \n", energy, money);

    work(energy, money);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    profile();

    return 0;
}