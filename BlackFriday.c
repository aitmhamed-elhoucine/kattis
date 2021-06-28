#include <stdio.h>

int countOccurrences(int arr[], int n, int x)
{
    int res = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          res++;
    return res;
}

int main() {
   int n;
   scanf("%d",&n);
   int arr[n];
   for (int i=0;i<n;i++){
       int a;
       scanf("%d",&a);
       arr[i] = a;
   }
   int newarray[n];
   int index =0;
   int j=n;
   for (int i=0;i<j;i++){
       if (countOccurrences(arr , j, arr[i]) == 1){
           newarray[index] = arr[i];
           index ++;
       }
       else{
           n--;
       }
   }
   if (n > 0){
       int max = newarray[0];
       for (int i=1;i<n;i++){
            if (newarray[i] > max){
                max = newarray[i];
            }
        } 
        for (int i=0;i<j;i++){
            if (arr[i] == max) printf("%d\n",i+1);
        }
   }
   else{
       printf("none\n");
   }
   return 0;
}
