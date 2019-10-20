import java.util.Scanner;
public class Katis {
    public static void main(String[] args) {
        Scanner sc1 =new Scanner(System.in);
        int k=1;
        while(true){
            try{
                String l1=sc1.nextLine();
                String[]t1=l1.split(" ");
                String l2=sc1.nextLine();
                String[]t2=l2.split(" ");
                long a=Long.parseLong(t1[0]);
                long b=Long.parseLong(t1[1]);
                long c=Long.parseLong(t2[0]);
                long d=Long.parseLong(t2[1]);
                long determinant = a*d - b*c;
                sc1.nextLine();
                System.out.println("Case "+k+":");
                System.out.println(d/determinant+" "+-b/determinant);
                System.out.println(-c/determinant+" "+a/determinant);     
                k++;}
            catch(Exception e){
                break;}}

}}