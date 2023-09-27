#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

int main() {
    int n;
    printf("How many passwords do you want to generate? ");
    scanf("%d", &n);

    srand(time(NULL)); // Seed the random number generator with current time

    for (int i = 0; i < n; i++) {
        char password[PASSWORD_LENGTH + 1]; // +1 for null terminator
        for (int j = 0; j < PASSWORD_LENGTH; j++) {
            if (j < 3) {
                // Generate a random uppercase letter
                password[j] = rand() % 26 + 'A';
            } else if (j < 6) {
                // Generate a random lowercase letter
                password[j] = rand() % 26 + 'a';
            } else {
                // Generate a random digit
                password[j] = rand() % 10 + '0';
            }
        }
        password[PASSWORD_LENGTH] = '\0'; // Add null terminator at the end
        printf("%s\n", password);
    }

    return 0;
}

