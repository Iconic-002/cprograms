#include <stdio.h>
int main() {
    int pin, attempts = 0;
    const int correct_pin = 1234;

    while (attempts < 3) {
        printf("Enter PIN to unlock: ");
        scanf("%d", &pin);

        if (pin == correct_pin) {
            printf("Access Granted!\n");
            return 0;
        } else {
            printf("Incorrect PIN. Try again.\n");
        }
        attempts++;
    }

    printf("sorry account blocked!\n");
    return 0;
}