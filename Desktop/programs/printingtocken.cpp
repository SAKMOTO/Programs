#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    
    // Read the entire line until a newline is encountered
    // The format %[^\n] tells scanf to read everything except the newline
    if (scanf("%[^\n]", s) == 1) {
        
        // Use strtok to split the string by spaces
        char *token = strtok(s, " ");
        
        while (token != NULL) {
            // Print the current word (token) followed by a newline
            printf("%s\n", token);
            
            // Get the next word
            token = strtok(NULL, " ");
        }
    }
    
    free(s);
    return 0;
}
