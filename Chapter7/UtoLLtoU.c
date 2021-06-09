#include <stdio.h>
#include <ctype.h>

int main(){
    int c;

    while((c=getchar())!=EOF){
        if(c > 60 && c < 91){
            c = tolower(c);
        }
        else if(c > 96 && c < 123){
            c = toupper(c);
        }
        putchar(c);
    }
    return 0;
}
