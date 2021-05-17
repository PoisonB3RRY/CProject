#include <stdio.h>
int main(){
    #if _WIN32
        system("color 0c");
        printf("This system is Wondows\n");
    #elif __linux__
        printf("This system is Linux\n");
    #else
        printf("http://c.biancheng.net\n");
    #endif
    return 0;
}
