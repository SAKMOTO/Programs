#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    // Read the size of the array
    if (scanf("%d", &n) != 1) return 1;

    // 1. Dynamically allocate memory for n integers
    int *arr = (int*)malloc(n * sizeof(int));
    
    // Safety check: Ensure memory was successfully allocated
    if (arr == NULL) {
        return 1;
    }

    int sum = 0;
    // 2. Read n integers into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Iterate through the array to calculate the sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // 4. Print the final sum
    printf("%d\n", sum);

    // 5. Free the allocated memory to avoid memory leaks
    free(arr);

    return 0;
}
