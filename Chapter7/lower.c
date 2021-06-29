#include <stdio.h>
#include <ctype.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) { //getchar()输入的字符会放在键盘缓冲区中
        putchar(tolower(c));
    }

    return 0;
}
