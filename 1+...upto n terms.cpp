//1+11+111+1111+....upto n terms......


#include <stdio.h>

int main() {
    int n, i = 1;
     long term = 1, sum = 0; 
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    while(i <= n) {
        sum += term;
        printf("%d", term);
        if(i < n) printf(" + ");
        
        term = term * 10 + 1; 
        i++;
    }
    printf("\nTotal Sum = %d\n", sum);
    return 0;
}
