#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n[6], soma = 0;
    int pos = 0;

    

    for (size_t i = 0; i < 6; i++)
    {
        scanf("%f", &n[i]);
        if (n[i] > 0)
        {
            soma = soma + n[i];
            pos++;
        }
        
    }
    printf("%d valores positivos\n", pos);
    printf("%.1f\n", soma/pos);


    return 0;
}
