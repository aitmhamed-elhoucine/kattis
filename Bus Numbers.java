import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
public class ka { 
        public static void main(String[] args) {
        Scanner sc =new Scanner(System.in); 
        ArrayList l=new ArrayList();
        int n=sc.nextInt();
        for(int y=0;y<n;y++){
            int a=sc.nextInt();
            l.add(a);
        }
        Collections.sort(l);
        int w=0,k=0;
        for(int t=1;t<n;t++){

            if((int)l.get(t)-(int)l.get(t-1)==1){
                w++;
                }
            
            else{
                if(w>1){
                    System.out.print(l.get(t-w-1)+"-"+l.get(t-1)+" ");
                    w=0;
                 
                }
                else if(w==1){
                    System.out.print(l.get(t-w-1)+" "+l.get(t-1)+" ");
                    w=0;
                }
                else{
                    System.out.print(l.get(t-1)+" ");
                }
                
                
            }
            if(t==n-1){
                if(w>1){
                    System.out.print(l.get(t-w)+"-"+l.get(t));
                }
                else if(w==1){
                    System.out.print(l.get(t-1)+" "+l.get(t));
                }
                else{
                    System.out.print(l.get(t));

                }}
        }
            
        
    }
} 