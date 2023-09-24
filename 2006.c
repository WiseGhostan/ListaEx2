#include <stdio.h>
 
int main() {
 
    int cha, chute, acerto = 0;
    scanf("%d", &cha);
for (size_t i = 0; i < 4; i++)
{
    scanf("%d", &chute);
    if (chute == cha)
    {
        acerto++;
    }
    
}
printf("%d\n", acerto);


    return 0;
}