#include <stdio.h>
#include <time.h>

int main() {
    int birth_year, age;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int current_year = tm.tm_year + 1900;

    printf("Please enter your 4-digit year of birth: ");
    scanf("%d", &birth_year);

    age = current_year - birth_year;
    printf("Based on the year %d, your approximate age is %d years old.\n",
           current_year, age);

    // Voting check
    if (age >= 18)
        printf("VOTING STATUS: Eligible to vote.\n");
    else
        printf("VOTING STATUS: Not eligible to vote yet.\n");

    // License check
    if (age >= 16)
        printf("LICENSE STATUS: Eligible to apply for a license.\n");
    else
        printf("LICENSE STATUS: Too young to apply for a license.\n");

    return 0;
}