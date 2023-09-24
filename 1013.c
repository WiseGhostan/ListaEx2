#include <stdio.h>
#include <stdlib.h>
int main() {
 
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int maiorAB = (n1 + n2 + abs(n1-n2))/2;
    if (maiorAB < n3)
    {
        printf("%d eh o maior\n", n3);
    }
    else
    {
        printf("%d eh o maior\n", maiorAB);
    }
    
    


    return 0;
}
