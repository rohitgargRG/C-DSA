import java.util.*;

public class Arraylist{
    public static void main(String[] args){

        // create an Arraylist
        ArrayList<Integer> list1 = new ArrayList<>();

        // add elements at end of list   --> list1.add(element)
        list1.add(10);
        list1.add(20);
        list1.add(30);

        // print list and its size
        System.out.println(list1);
        System.out.println(list1.size());

        // add element at a particular index   --> list1.add(index , element)
        list1.add(1,100);
        list1.add(2,1000);
        System.out.println(list1);

        // get the value at a particular index
        int val1 = list1.get(1);  // not list1[1] 
        System.out.println(val1);

        // set the value at a particular index
        list1.set(1,200);
        System.out.println(list1);

        // remove a value at a particular index
        list1.remove(1);
        System.out.println(list1);

        // check if an element exists in list or not
        boolean cnt = list1.contains(10);
        System.out.println(cnt);

        // check if list is empty or not
        boolean empt = list1.isEmpty();
        System.out.println(empt);

        // clear the list
        list1.clear();
        System.out.println(list1.size());


        ArrayList<String> list2 = new ArrayList<>();

        list2.add("rohit");
        list2.add("garg");
        list2.add("cr7");
        System.out.println(list2);

        // print array list using loop
        for(int i = 0; i < list1.size() ; i++){
            int ele = list1.get(i);
            System.out.print(ele + " ");
        }

        System.out.println();

        for(int val : list1){
            System.out.print(val + " ");
        }
    }
}