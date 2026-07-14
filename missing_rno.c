#include <stdio.h>

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int present[10] = {1,3,4,2,6,7,8,9,10};

    int ans=0;
    for(int i = 0; i < 10; i++)
    {
        ans ^= array[i];
        printf("%d ", ans);
    }

}