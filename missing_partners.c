/*Problem 2
The Warehouse's Missing Partners
A warehouse's inventory log lists every product code twice — once per unit shipped in its safety-stock pair —
except for exactly two product codes that arrived as singles. Using only O(1) extra memory and a single pass,
identify both singleton codes.
Input: Integer array nums where every element appears exactly twice except two elements that appear exactly
once.
Output: The two elements that appear only once, in any order.
Example 1: Input: nums = [1,2,1,3,2,5]
Output: [3,5]
Example 2: Input: nums = [-1,0]
Output: [-1,0]
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Example input array
    int array[] = {1, 2, 1, 3, 2, 5};
    
    // Calculate the size of the array
    int n = sizeof(array) / sizeof(array[0]);
    int xor_all = 0;

    // XOR all elements in the array to find the XOR of the two missing product codes
    for (int i = 0; i < n; i++)
    {
        xor_all ^= array[i];
    }

    // Find the rightmost set bit in xor_all
    // This bit will be different between the two missing product codes1
    // The rightmost set bit can be found using the expression xor_all & -xor_all
    int rightmost_set_bit = xor_all & -xor_all;

    int num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] & rightmost_set_bit)
        {
            num1 ^= array[i];
        }
        else
        {
            num2 ^= array[i];
        }
    }

    printf("The two missing product codes are: %d and %d\n", num1, num2);
    return 0;
}