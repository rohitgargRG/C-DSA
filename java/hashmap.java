import java.util.*;

public class hashmap{
    public static void main(String[] args){
        // hashmap -> stores key value pairs

        // create a hashmap
        HashMap<String , Integer> hm = new HashMap<>();

        // TC of all fns = O(1)

        // put a key, val pair in hashmap
        hm.put("India" , 120);
        hm.put("china" , 100);
        hm.put("US" , 50);
        hm.put("UK" , 20);

        System.out.println(hm);

        // it will update the value for a key , if key is already present
        hm.put("china" , 110);

        // get a value for a key
        System.out.println(hm.get("India"));

        // if key is not present , so it will give null
        System.out.println(hm.get("chile"));


        // check if a key is present or not
        System.out.println(hm.containsKey("chile"));
        System.out.println(hm.containsKey("India"));

        // get all the keys
        Set<String> st = hm.keySet();
        System.out.println(st);

        for(String keys : hm.keySet()){
            Integer val = hm.get(keys);
            System.out.println(keys + " " + val);
        }
    }
}