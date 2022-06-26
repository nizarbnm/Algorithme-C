#include <stdio.h>

int calcule_2numbers ( int num1, int num2)
{
    int Res = num1 + num2;
    return Res;
}

int main ()
{
	int x,y;
	printf (" Valeur 1 : \n\n");
	scanf("%d", &x);
	printf("\n\n Valeur 2 \n\n");
	scanf("%d", &y);
    int sum = calcule_2numbers(x,y);
    printf("Some est egal: %d ", sum);
    return 0;
}