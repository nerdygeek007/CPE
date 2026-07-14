#include <stdio.h>

int main(void)
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int present[] = {1, 3, 4, 2, 6, 7, 8, 9, 10};
    int n = sizeof(array) / sizeof(array[0]);
    int m = sizeof(present) / sizeof(present[0]);
    int xor_all = 0;

    for (int i = 0; i < n; i++)
    {
        xor_all ^= array[i] ^ (i < m ? present[i] : 0);
    }
    printf("N:%d\n", n);
    printf("M:%d\n", m);
    printf("Missing number is %d\n", xor_all);
    return 0;
}
/*
Problem 1
The Missing Roll Number
A teacher's assistant at a school where every student in a class is assigned a unique roll number from 0 to n
collects the roll numbers of every student who submitted their exam paper. Exactly one student is absent, and
their roll number is the only one missing from the collected list. Determine which single roll number never
showed up, without maintaining a separate attendance sheet and without re-sorting the stack of papers.
Input: Integer array nums containing n distinct numbers, each in the range [0, n].
Output: The single integer in [0, n] that does not appear in nums.
Example 1: Input: nums = [3,0,1]
Output: 2
Example 2: Input: nums = [0,1]
Output: 2
Example 3: Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
*/