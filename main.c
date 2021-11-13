#include <stdio.h>
#include "my_mat.h"

int main()
{

    char menu;
    scanf("%c", &menu);
    while (menu=='A' ||menu=='B'||menu=='C')
    {
        if (menu=='A') initializeMat();
        if (menu=='B') isConnected();
        if (menu=='C') shortestPath();
        scanf(" %c", &menu);

    }
    return 0;
}

