#include <stdio.h>

void qsort(int[], int, int);
void swap(int [], int ,int);

int main()
{
    int a[] = {
        56,23,45,31,6,34,8,123,9,3,55,12,65,37,57
    };
    qsort(a, 0 ,14);
    for(int i=0; i<15; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");

}

/* quicksort: sort v[left] ... v[right] into increasing order */
void qsort(int v[], int left, int right)
{
    //left 和 right 分别代表数组最左边和最右边的两个下标
    int i, last;
    void swap(int v[], int i, int j);
    if(left >= right) //数组大小小于2，此时已完成排序, 啥都不做
    {
        return ;
    }
    swap(v, left, (left + right)/2); //将中间的元素挪到v[0],此时v[0]作为比较的基准
    last = left;
    for(i = left + 1; i <= right; i++) //挨个比较过去
    {
        if(v[i] < v[left])
        {
            swap(v, ++last, i); // 若v[i]小于基准数则将其与last数交换位置，循环完成后将v[0]基准数与v[last]交换位置
        }                       // 实现v[last]也就是基准数左边没有比它小的
    }
    swap(v, left, last); //restore partation element 将基准数重新放回中央，其左边没有比它大的，右边没有比它小的
    qsort(v, left, last - 1); //处于中间的基准数的左边重复以上步骤
    qsort(v, last + 1, right); //处于中间基准数的右边重复以上步骤
}

void swap(int v[], int i, int j)
{
    int temp;
    
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
