import java.util.*;

public class TreeHash {
    public static void main(String[] args) {
        HashMap<String, String> h = new HashMap<String, String>();
        TreeMap<String, String> t = new TreeMap<String, String>();

        h.put("FISH", "FISH");
        h.put("DOG", "DOG");
        h.put("CAT", "CAT");
        h.put("ZEBRA", "ZEBRA");
        h.put("RAT", "RAT");

        t.put("FISH", "FISH");
        t.put("DOG", "DOG");
        t.put("CAT", "CAT");
        t.put("ZEBRA", "ZEBRA");
        t.put("RAT", "RAT");

        System.out.println("Retrieving from the HashMap");
        for (String s:
             h.values()) {
            System.out.println(s);
        }

        System.out.println();

        System.out.println("Retrieving from the TreeMap");
        for (String s :
                t.values()) {
            System.out.println(s);
        }
    }
}
