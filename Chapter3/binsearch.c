#include<stdio.h>

int binsearch(int a, int b[], int c);

int main()
{
    int x,n;

    x=3;
    n=10;
    int v[] = {1,2,3,4,5,6,7,8,8,9,10};

    int index = binsearch(x,v,n);

    printf("index = %d\n", index);

    return 1;


}

// 二分法查找x在数组v中的位置
// x：被查找的数  v:数组  n:数组中数字的个数
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n-1;

    while(low <= high)
    {
        mid = (low + high) /2;
        if(x < v[mid])
        {
            high = mid + 1;
        }
        else if(x > v[mid])
        {
            low = mid +1;
        }
        else
        {
            return mid;
        }
    }

    return -1;

}
