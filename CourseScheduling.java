import java.util.*;

class CourseScheduling {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner sc =new Scanner(System.in); 
        Set<String> lines=new HashSet<String>();
        Map<String, Integer> courses = new HashMap<String, Integer>();
        TreeSet<String> t= new TreeSet<String>();
        String ns=sc.nextLine();
        int n = Integer.parseInt(ns);
        for(int y=0;y<n;y++){
            String line=sc.nextLine();
            if(lines.add(line)) {
                String parts[] = line.split("\\s+");
                String course =parts[2];
                if(courses.containsKey(course)) {   
                    int count= courses.get(course);
                    count+=1;
                    courses.put(course, count);
                }else {
                    courses.put(course, 1);
                }
            }
        }
        for(Map.Entry<String, Integer> e : courses.entrySet()) {
            t.add(e.getKey()+" "+e.getValue());
        }
        for(String c :t) {
            System.out.println(c);
        }
    }
}
