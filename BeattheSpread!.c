#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   for (int i=0;i<n;i++){
        int s,d;
        int a,b;
        scanf("%d",&s);
        scanf("%d",&d);
        if ((s-d)%2 == 0){
            b = (s-d)/2 ;
            a = s - b;
            if ((a>=0) && (b>=0)){
                (a > b) ? printf("%d %d \n",a,b) : printf("%d %d \n",b,a);
            }
            else{
                printf("impossible\n");
            }
            
       }
       else{
            printf("impossible\n");
       }
        
   }
   
   return 0;
}
