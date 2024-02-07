#include <stdio.h>

int main() {
    int creditScore;
    float currentBalance;
    printf("Enter credit score: ");
    scanf("%d", &creditScore);
    printf("Enter current balance: ");
    scanf("%f", &currentBalance);
    float interestRate;
    if (creditScore < 600) {
        interestRate = 0.15; 
    } else if (creditScore >= 600 && creditScore <= 750) {
        interestRate = 0.12; 
    } else {
        interestRate = 0.10; 
    }
    float interest = currentBalance * interestRate;
    printf("Calculated interest: %.2f\n", interest);
    return 0;
}