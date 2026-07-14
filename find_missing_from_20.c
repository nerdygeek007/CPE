/*Problem: Find Missing Numbers from 1 to 20
Given an array containing some unique numbers from the range 1-20,
find which numbers are missing using XOR approach.
Using O(1) extra memory and single pass logic.
*/

#include <stdio.h>

int main(void)
{
    // Array with some numbers from 1-20 (total 20 unique numbers expected)
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n = sizeof(array) / sizeof(array[0]);
    
    // XOR all elements in array
    int xor_array = 0;
    for (int i = 0; i < n; i++)
    {
        xor_array ^= array[i];
    }
    
    // XOR all numbers from 1 to 20
    int xor_expected = 0;
    for (int i = 1; i <= 20; i++)
    {
        xor_expected ^= i;
    }
    
    // The missing number(s)
    int missing = xor_array ^ xor_expected;
    
    printf("Array length: %d\n", n);
    printf("XOR of array elements: %d\n", xor_array);
    printf("XOR of 1-20: %d\n", xor_expected);
    printf("Missing number(s) XOR result: %d\n", missing);
    
    // If only one number is missing, missing will be that number
    // If multiple are missing, this shows their XOR
    printf("\nArray contents: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    // To find all missing numbers explicitly:
    printf("Missing numbers from 1-20: ");
    for (int i = 1; i <= 20; i++)
    {
        int found = 0;
        for (int j = 0; j < n; j++)
        {
            if (array[j] == i)
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
