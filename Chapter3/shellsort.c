#include <stdio.h>

void shellsort(int v[], int n);

int main()
{
    int v[]={
        4,1,6,65,3,54,8,2,78,34,4
    };
    int n=11;
    shellsort(v,n);
    for(int count = 0; count <n; count++)
    {
        printf("%d\t", v[count]);
    }

    return 0;
}

void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for(gap = n/2; gap >0; gap /=2)
    {
        for(i = gap; i<n; i++)
        {
            for( j= i-gap; j>=0 && v[j]> v[j+gap]; j-=gap)
            {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
        }
    }
}
