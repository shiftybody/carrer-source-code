public class MyIntCollectionExample {
    public static void main(String[] args) {
        MyIntCollection mic = new MyIntCollection();

        mic.add(3);
        mic.add(6);
        mic.add(1);
        mic.add(9);

        System.out.println("The collection contains " + mic.size() +
                " int values");

        System.out.println("The smallest value is: " + mic.getSmallestInt());
        System.out.println("The largest value is: " + mic.getLargestInt());
        System.out.println("The average is: " + mic.getAverage());

        mic.establishCourseSchedule("hola","12");
    }
}
