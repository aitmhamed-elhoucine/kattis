#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int s=0, k=0, o=0;
        scanf("%d",&k);
        for (int j=0;j<k;j++){
            scanf("%d",&o);
            s = s + o;
        }
        s=s-(k-1);
        printf("%d \n",s);
    }
}
