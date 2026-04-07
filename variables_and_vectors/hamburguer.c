#include <stdio.h>

const float hamburguer = 15.30;
const float soda = 5.50;

int main(void)
{
    int number_of_hamburguers = 0;
    printf("How many hamburguers do you want? ");
    if (scanf("%d", &number_of_hamburguers) != 1)
    {
        printf("put a valid value, pls\n");
        return 1;
    }

    int number_of_sodas = 0;
    printf("How many sodas do you want? ");
    if (scanf("%d", &number_of_sodas) != 1)
    {
        printf("put a valid value, pls\n");
        return 1;
    }

    float hamburguers_total_price = number_of_hamburguers * hamburguer;
    float soda_total_price = number_of_sodas * soda;

    printf("Nice! the total of your purchase is %.2f\n",
           soda_total_price + hamburguers_total_price);

    return 0;
}
