//fibonacci number upto value n



#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next = 0;
    printf("Enter the maximum value limit (n): ");
    scanf("%d", &n);
    
    printf("Fibonacci series up to %d: ", n);
    while(a <= n) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}  

