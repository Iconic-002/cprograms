#include <stdio.h>
int main() {
    int age;

    do {
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age < 0 || age > 150) {
            printf("you are not an ansestor. Please enter a number between 0-150.\n");
        }
    } while (age < 0 || age > 150);

    if (age >= 18) {
        printf("Access Granted.\n");
    } else {
        printf("Access Denied.\n");
    }

    return 0;
}