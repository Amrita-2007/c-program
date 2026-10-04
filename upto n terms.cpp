/* 5,10,15,20,....upto n terms */


#include <stdio.h>

int main() {
    int n, i = 1, term = 5;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    printf("Series: ");
    while(i <= n) {
        printf("%d ", term);
        term += 5; // Increase by 5 for the next term
        i++;
    }
    printf("\n");
    return 0;
}
