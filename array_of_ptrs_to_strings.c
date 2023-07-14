#include <stdio.h>

int main()
{
    int i;
    char *arrp[] = { "white",
                        "red",
                        "green",
                        "yellow",
                        "blue"};
    for(i=0; i<5; i++)
    {
        printf("string : %s\n",arrp[i]);
    }
    return 0; 
}