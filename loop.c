#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("\nFor loop:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n\nWhile loop:\n");
    int i = 1;
    while (i <= n) {
        printf("%d ", i);
        i++;
    }

    printf("\n\nDo-while loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= n);

    printf("\n");
    return 0;
}
#include <stdio.h>
int main(){


    return 0;
}
