#include <stdio.h>
int main()
{
    int heights[6];
    int heights2[6];
    int h1,h2;
    int max,moy,min;
    for (int m=0; m<6; m++){
        int h;
        scanf("%d",&h);
        heights[m] = h;
    }
    scanf("%d",&h1);
    scanf("%d",&h2);
    for (int i=0; i<6; i++){
        for (int j=i+1; j<5; j++){
            for (int k=j+1; k<6; k++){
                if (heights[i] + heights[j] + heights[k] == h1){
                    if ((heights[i] > heights[j]) && (heights[i] > heights[k])){
                        max = heights[i];
                        if (heights[j] > heights[k]){
                            min = heights[k];
                            moy = heights[j];
                        }else{
                            min = heights[j];
                            moy = heights[k];
                        }
                    }
                    else if ((heights[j] > heights[i]) && (heights[j] > heights[k])){
                        max = heights[j];
                        if (heights[i] > heights[k]){
                            min = heights[k];
                            moy = heights[i];
                        }else{
                            min = heights[i];
                            moy = heights[k];
                        }
                    }
                    else{
                        max = heights[k];
                        if (heights[i] > heights[j]){
                            min = heights[j];
                            moy = heights[i];
                        }else{
                            min = heights[i];
                            moy = heights[j];
                        }
                    }
                    heights2[0] = max ;
                    heights2[1] = moy ;
                    heights2[2] = min ;
                }
                else if (heights[i] + heights[j] + heights[k] == h2) {
                    if ((heights[i] > heights[j]) && (heights[i] > heights[k])){
                        max = heights[i];
                        if (heights[j] > heights[k]){
                            min = heights[k];
                            moy = heights[j];
                        }else{
                            min = heights[j];
                            moy = heights[k];
                        }
                    }
                    else if ((heights[j] > heights[i]) && (heights[j] > heights[k])){
                        max = heights[j];
                        if (heights[i] > heights[k]){
                            min = heights[k];
                            moy = heights[i];
                        }else{
                            min = heights[i];
                            moy = heights[k];
                        }
                    }
                    else{
                        max = heights[k];
                        if (heights[i] > heights[j]){
                            min = heights[j];
                            moy = heights[i];
                        }else{
                            min = heights[i];
                            moy = heights[j];
                        }
                    }
                    heights2[3] = max ;
                    heights2[4] = moy ;
                    heights2[5] = min ;
                }               
            }
        }
    }
    for (int m=0; m<6; m++){
        printf("%d ",heights2[m]);
    } 
    return 0;
}
