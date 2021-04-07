#include <stdio.h>

int checkHex();
int computeInt(int cArray[]);

int cArray[1000];

int main()
{
    int checkResult = checkHex();
    if (checkResult != 0)
    {
        return -1;
    }

    int result = computeInt(cArray);
    printf("Integer is :%d\n", result);
    return 0;
}

int checkHex()
{
    int c, i;

    i = 0;
    while ((c = getchar()) != '\n')
    {
        cArray[i] = c;
        ++i;
    }
    if (i < 2)
    {
        printf("输入内容不满足条件");
        return -1;
    }
    if (cArray[0] != '0' || (cArray[1] != 'x' && cArray[1] != 'X'))
    {
        printf("输入内容不符合HexDecimal规范");
        return -1;
    }

    for (int j = 2; j < i; ++j)
    {
        int oneInput = cArray[j];
        if (!((oneInput >= '0' && oneInput <= '9') || (oneInput >= 'a' && oneInput <= 'f') || (oneInput >= 'A' && oneInput <= 'F')))
        {
            printf("输入内容不符合HexDecimal规范");
            return -1;
        }
    }

    return 0;
}

int computeInt(int argArray[])
{
    int result;

    result = 0;

    for (int i = 2; argArray[i] != '\0'; ++i)
    {
        int temp;
        if (argArray[i] >= 'A' && argArray[i] <= 'F')
        {
            temp = argArray[i] - 'A' + 10;
        }
        if (argArray[i] >= 'a' && argArray[i] <= 'f')
        {
            temp = argArray[i] - 'a' + 10;
        }
        else
        {
            temp = argArray[i] - '0';
        }
        printf("%d\n", temp);
        result = 16 * result + temp;
    }
    return result;
}