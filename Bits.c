#include <stdio.h>

long long to_binary(long long n){
    long long count1 = 0;
    for(long long i=0;n>0;i++)    
    {  
        if (n%2 == 1) count1 = count1+1;
        n=n/2;    
    }  
    return  count1;
}
int main() {
   int n;
   long long maxCounter;
   scanf("%d",&n);
   for (int i=0;i<n;i++){
        long long a;
        long long r,counter;
        scanf("%lld",&a);
        maxCounter = to_binary(a);
        while(a>0)    
        {    
            a=a/10;    
            counter = to_binary(a); 
            if  (counter>maxCounter) maxCounter = counter;
        }

       printf("%lld \n",maxCounter);
   }
   return 0;
}
