//write a c program to calculate of number from 1-N.....
#include <stdio.h>

int main() {
    int n;
    int i = 1;
    int sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}
