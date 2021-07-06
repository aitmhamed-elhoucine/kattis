#include <stdio.h>

int main()
{
    int l,w,n;
    scanf("%d",&l);
    scanf("%d",&w);
    scanf("%d",&n);
    int bricks[n];
    for(int i=0; i<n;i++){
        int x;
        scanf("%d",&x);
        bricks[i] = x;
    }
    int j=0;
    for(int i=0; i<l;i++){
        int sum = bricks[j];
        while((sum < w) && (j<n)){
            j+=1;
            sum+= bricks[j];
        }
        if (sum != w){
            printf("NO\n",sum,w,j);
            return 0;
        }
        j+=1;
    }
    printf("YES\n");
    return 0;
}
