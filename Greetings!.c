#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
    char s[1001];
    char r[10001];
    char a[2];
    scanf("%[^\n]s",s);  
    for (int i=0;i<strlen(s);i++){
        if (s[i] == 'e'){
            a[0] = 'e';
            strcat(r,a);
            strcat(r,a);
        }
        else{
            a[0] = s[i];
            strcat(r,a);
        }
        
    }
    printf("%s",r);
}
