#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]){
    int c;

    argv = argv + 1; //argv指针跳至第二个

    while((c=getchar())!=EOF){
        if(strcmp(*argv,"LU") == 0){
            c = toupper(c);
        }
        if(strcmp(*argv,"UL") == 0){
            c = tolower(c);
        }
        putchar(c);
    }
    return 0;
}
