#include <stdio.h>

const int MAX = 10;
int iseven(int number);

int main(void)
{
    int numbers[MAX];

    for (int i = 0; i < MAX; i++)
    {
        scanf("%i", &numbers[i]);
    }

    int counter = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (iseven(numbers[i]) == 1)
        {
            printf("%i, ", numbers[i]);
            counter++;
        }
    }
    printf("Total: %i\n", counter);
    return 0;
}

int iseven(int number)
{
    return number % 2 == 0;
}
