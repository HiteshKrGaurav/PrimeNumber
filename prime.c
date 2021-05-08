#include <stdio.h>

int main()
{
    int index, num = 0;
    printf("Enter range for prime number from 1 to :");
    scanf("%d", &index);

    int PrimeList[index - 1];

    for (int i = 1; i <= index; i++)
    {
        int flag = 0;
        for (int j = 2; j < i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && i != 1)
        {
            PrimeList[num] = i;
            num++;
        }
    }

    printf("\nPrime numbers between 1 and %d\n", index);

    for (int i = 0; i < num; i++)
    {
        if (i < num - 1)
        {
            printf("%d, ", PrimeList[i]);
        }
        else
        {
            printf("%d\n", PrimeList[i]);
        }
    }

    return 0;
}
