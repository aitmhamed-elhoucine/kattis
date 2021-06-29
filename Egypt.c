#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char** argv) {
    while(1>0){
        int a,b,c;
        int max,min1,min2;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);        
        if(a==0 & b==0 & c==0){
            break;
        }
        else if  (a==0 | b==0 | c==0){
            printf("wrong\n");
        }
        else {
            if (a > b){
                max=a;
                if (a > c){
                   max =a;
                   min1 =c;
                   min2 =b;
                }
                else{
                    max=c;
                    min1 =a;
                    min2 =b;
                }
            }
            else{
                max=b;
                if (b > c){
                   max =b;
                   min1 =a;
                   min2 =c;
                }
                else{
                    max=c;
                    min1 =a;
                    min2 =b;
                }
            }                  
            if ( (min1*min1) + (min2*min2) == (max*max) ){
                printf("right\n");
            }
            else{
                printf("wrong\n");
            } 
        }        
    }
}
