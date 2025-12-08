#include <stdio.h>

int main() {
    int age;

    printf("Enter your current age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("VOTING STATUS: Eligible to vote.\n");
    } else {
        printf("VOTING STATUS: Not eligible to vote yet.\n");
    }

    if (age >= 16) {
        printf("LICENSE STATUS: Eligible to apply for a license.\n");
    } else {
        printf("LICENSE STATUS: Too young to apply for a license.\n");
    }

    return 0;
}