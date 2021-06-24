#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        int r,e,c;
        scanf("%d",&r);
        scanf("%d",&e);
        scanf("%d",&c);
        if (r < (e-c)){
            printf("advertise\n"); 
        }
        else if (r > (e-c)){
             printf("do not advertise\n");
        }
        else{
            printf("does not matter\n");
        }
    }
}
