/* Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern


*****
****
***
**
* -> Reversed triangular star pattern

*/
#include <stdio.h>

void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows, type;
    printf("Enter 0 for star pattern and 1 for reversed star pattern\n");
    scanf("%d", &type);

    switch (type)
    {
    case 0:
        printf("How many rows do you want?\n");
        scanf("%d", &rows);
        starPattern(rows);
        break;

    case 1:
        printf("How many rows do you want?\n");
        scanf("%d", &rows);
        reverseStarPattern(rows);
        break;

    default:
        printf("You have entered an invalid choice");
        break;
    }

    return 0;
}
