//write a c program to calculate sum of numbers from 1-10...
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
