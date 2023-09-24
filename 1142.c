#include <stdio.h>
 
int main() {
 
    int n, i = 0, linha = 0;
    scanf("%d", &n);

    while (linha < n)
    {
        printf("%d %d %d PUM\n", i+1, i+2, i+3);
        i = i + 4;
        linha++;
    }
    
 
    return 0;
}