#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    // Allocate memory for the input string (max size 1000 + null terminator)
    char *s = malloc(1001 * sizeof(char));
    
    // Initialize an array of 10 integers to zero to store frequencies
    int counts[10] = {0};

    // Read the string
    if (scanf("%s", s) == 1) {
        // Iterate through each character of the string
        for (int i = 0; s[i] != '\0'; i++) {
            // Check if the current character is a digit
            if (s[i] >= '0' && s[i] <= '9') {
                // Convert character digit to integer index
                // Example: '5' - '0' = 5
                counts[s[i] - '0']++;
            }
        }
    }

    // Print the frequencies separated by spaces
    for (int i = 0; i < 10; i++) {
        printf("%d", counts[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n");

    // Clean up
    free(s);
    return 0;
}
