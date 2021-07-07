import java.util.ArrayList;
import java.util.Scanner;
 class ka {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        ArrayList l=new ArrayList();
        while(sc.hasNext()){
            String mot=sc.nextLine();
            String[] table=mot.split(" ");
            
            for(String a: table){
            String h=a.toLowerCase();
            
            if(l.contains(h)){
                System.out.print(". ");             
            }
            else{
                System.out.print(a+" ");
                l.add(h); }     
        }
            System.out.println("");    
        }   
    }  
}
