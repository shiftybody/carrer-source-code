import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Student> students = new HashMap<String, Student>();

        //Instantiate three Students
        Student s1 = new Student("12345-12", "Fred");
        Student s2 = new Student("98765-00", "Barney");
        Student s3 = new Student("71024-91", "Wilma");

        //Inset all three Students into the HashMap, using their idNo
        //as a key. using put method to insert an object
        students.put(s1.getIdNo(), s1);
        students.put(s2.getIdNo(), s2);
        students.put(s3.getIdNo(), s3);

        //retrieve -> recuperar un objeto Student basado en su ID y guardarno en una variable x
        String id = "98765-00";
        System.out.println("Let's try to retrieve a Student with ID : " + id);
        Student x = students.get(id);

        // if value of get is not-null
        if (x != null) {
            System.out.println("Found! Name =" + x.getName());
        } else System.out.println("Invalid ID:" + id);

        //iterate through -> a travez the HashMap to process all Students
        for (Student s : students.values()) {  // values method return without the key
            System.out.println("\n" + s.toString());
        }

        // NOTE: If we attempt to insert a second object into a HashMap with a key value that duplicates the
        //key of an object that is already referenced by the HashMap, the put method will silently replace
        //the original object reference with the new reference.


        // If it is NOT the case that the students HashMap already contains
        // a key value matching the idNo of student s1 ...
        if (!(students.containsKey(s1.getIdNo()))) {
            // ... then it is safe to add such a reference.
            students.put(s1.getIdNo(), s1);
        } else {
            // Another Student reference with the same idNo value is already in the HashMap.
            System.out.println("ERROR: Duplicate student ID found in HashMap: " +
                    s1.getIdNo());
        }

        // boolean containsKey/Value( Object key/Value)

    }
}
