#include <stdio.h>

    int main()
    {
        int x, y, soma = 0, minimo, maximo;

        scanf("%d %d", &x,&y);

        if(x < y)
        {
            minimo = x;
            maximo = y;
        }
        else
        {
            minimo = y;
            maximo = x;
        }

        for(int i = (minimo + 1); i < maximo; ++i)
        {
        if(i%2 != 0)
        {
        soma += i;
        }
 }

    printf("%d\n", soma);

 return 0;
}