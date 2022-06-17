import java.util.*;
import java.util.stream.Collectors;

class Election {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner sc =new Scanner(System.in); 
        Map<String, String> candidates = new HashMap<String, String>();
        Map<String, Integer> partyCount = new HashMap<String, Integer>();
        String ns=sc.nextLine();
        int n = Integer.parseInt(ns);
        for(int y=0;y<n;y++){
            String name=sc.nextLine();
            String party=sc.nextLine();
            candidates.put(name, party);
        }
        String ms=sc.nextLine();
        int m = Integer.parseInt(ms);
        for(int k=0;k<m;k++){
            String candidate=sc.nextLine();
            if(partyCount.containsKey(candidate)) {
                int count = partyCount.get(candidate);
                count+=1;
                partyCount.put(candidate, count);
            }
            else {
                partyCount.put(candidate, 1);
            }   
        }
        ArrayList<Integer> list= (ArrayList<Integer>) partyCount.values().stream().collect(Collectors.toList());
        Collections.sort(list);
        if((list.size()>=2) && (list.get(list.size()-1)==list.get(list.size()-2))) {
            System.out.println("tie");
        }
        else {
            String partyWinner=partyCount.entrySet().stream().max((entry1,entry2)->Integer.compare(entry1.getValue(),entry2.getValue())).get().getKey();
            System.out.println(candidates.get(partyWinner));
        }
    }
}
