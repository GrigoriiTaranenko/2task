#include <stdio.h> 
#include <stdlib.h> 

void outputSymbol(int i, int hight)
{
    if (i==0) {
        printf("%d", hight);
    } else {
        printf("#");
    }
}

int main()
{
    int height;
    do
    {
        printf("Enter height, \n");
        scanf("%d", &height);
    } while (height>23 || height<0);
    for (int i = 0; i < height; i++)
    { 
        for (int width = 0; width < height; width++)
        {
            if (width - (height - i - 1) < 0) {
                printf(" ");
            } 
            else {
                outputSymbol(i, height);
            }
        }
        printf("\n");
    }
    return 0;
}