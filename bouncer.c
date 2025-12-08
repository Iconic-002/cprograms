#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Error: Invalid Age.\n");
    } else if (age <= 12) {
        printf("Child Ticket: $5.00\n");
    } else if (age <= 64) {
        printf("Adult Ticket: $10.00\n");
    } else {
        printf("Senior Ticket: $7.00\n");
    }

    return 0;
}