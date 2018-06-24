#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int a, i, j, x, y;
    x = 1;
    a = 1;
    int uii = get_int("Height: ");

    for(j=1; j<=uii; j++)
    {
        y=uii-x;

        for(i=1; i<=y; i++)
        {
            printf(" ");
        }

        for(i=1; i<=a; i++)
        {
            printf("#");
        }

        printf(" ");

        for(i=1; i<=a; i++)
        {
            printf("#");
        }
        printf("\n");
        a++;
        x++;
    }
}