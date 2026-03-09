#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    
    // We only need to loop up to the middle (num / 2)
    for (i = 0; i < num / 2; i++) {
        // Swap arr[i] with arr[num - i - 1]
        int temp = arr[i];
        arr[i] = arr[num - i - 1];
        arr[num - i - 1] = temp;
    }

    // The output is handled by the following loop
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
        
    free(arr);
    return 0;
}
