#include <stdio.h>
#include <limits.h>
#include <float.h>


int main()
{
    printf("intMax:%d\tintMin:%d\n", INT_MAX, INT_MIN);
    printf("longIntMax:%ld\tlongIntMin:%ld\n",LONG_MAX, LONG_MIN);
    printf("shortIntMax:%hd\tshortIntMax:%hd\n",SHRT_MAX,SHRT_MIN);
    printf("floatMax:%f\tfloatMin:%f\n",FLT_MAX,FLT_MIN);
    printf("doubleMax:%lf\tdoubleMin:%lf\n",DBL_MAX,DBL_MIN);
    printf("charMax:%d\tcharMin:%d\n",CHAR_MAX,CHAR_MIN);
    printf("unsignedIntMax:%d\t",UINT_MAX);
    return 0;
}
