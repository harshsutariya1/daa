#include <stdio.h>

// Function to calculate the factorial of a number using recursion
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; // Base case: 0! is 1
    } else {
        return n * factorial(n - 1); // Recursive case: n! = n * (n-1)!
    }
}

int main() {
    int num;
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long fact = factorial(num);
        printf("%d! = %llu\n", num, fact);
    }
    
    return 0;
}
