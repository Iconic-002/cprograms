#include <stdio.h>

int main() {
    int choice;

    printf("=== DRINK MENU ===\n");
    printf("1. Coke\n");
    printf("2. Fanta\n");
    printf("3. Water\n");
    printf("4. Coffee\n");
    printf("Select a drink: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Dispensing Coke ...\n"); break;
        case 2: printf("Dispensing Fanta ...\n"); break;
        case 3: printf("Dispensing Water ...\n"); break;
        case 4: printf("Dispensing Coffee ...\n"); break;
        default: printf("Error: That selection is not available.\n");
    }

    return 0;
}