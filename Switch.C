#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int choixmenu;
    printf("===  Menu  ===\n\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac");
    printf("\nVotre choix?");
    scanf("%d", &choixmenu);
    printf("\n");
    switch (choixmenu)
    {
    case 1:
        printf("Vous avez choisi le royal Cheese. Bon choix !");
        break;
    case 2:
        printf("Vous avez choisi le Mc Deluxe. Bon choix !");
        break;
    case 3:
        printf("Vous avez choisi le MC Bacon. Bon choix !");
        break;
    case 4:
        printf("Vous avez choisi le Big Mac. Bon choix !");
        break;
    default:
        printf("Vous n'avez pas rentre un nombre correct. Vous ne mangerez rien du tout !");
        break;

    }
    printf ("\n\n");
    return 0;


}
