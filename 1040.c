#include <stdio.h>
 
int main() {
 
    float nota[4], soma = 0, rec;
    for (size_t i = 0; i < 4; i++)
    {
        scanf("%f", &nota[i]);
    }
    soma = (nota[0] * 2 + nota[1] * 3 + nota[2] * 4 + nota[3]) / 10;
    if (soma >= 7.0)
    {
        printf("Media: %.1f\n", soma);
        printf("Aluno aprovado.\n");
    }
    else if (soma >= 5.0)
    {
        printf("Media: %.1f\n", soma);
        printf("Aluno em exame.\n");
        scanf("%f", &rec);
        printf("Nota do exame: %.1f\n", rec);

        if ((soma + rec)/2 >= 5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", (soma+rec)/2);
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        
    }
    else
    {   
        printf("Media: %.1f\n", soma);
        printf("Aluno reprovado.\n");
    }
    
    


    
 
    return 0;
}