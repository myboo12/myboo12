#include <stdio.h>
int main()
{
    int row;
    printf("Enter row");
    scanf("%d", &row);
    for (int i = 0; i <= row; i++)
    {
        for (int space = 0; space <= row - i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}