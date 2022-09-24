import java.util.ArrayList;

public class MyIntCollection extends Course{


    //encapsulamos un ArrayList cómo un atributo.
    ArrayList<Integer> numbers;
    private int smallestInt;
    private int largestInt;
    private int total;


    public MyIntCollection() {
        //Instanciamos el ArrayList
        numbers = new ArrayList<Integer>();
        total = 0;
    }

    public int size() {
        return numbers.size();
    }
    // método publico sobreescrito
    public boolean add(int i) {

        if (numbers.isEmpty()) {
            smallestInt = i;
            largestInt = i;
        }
        else {
            if (i < smallestInt) smallestInt = i;
            if (i > largestInt) largestInt = i;
        }

        total = total + i;
        return numbers.add(i);
    }


    public int getSmallestInt() {
        return smallestInt;
    }

    public int getLargestInt() {
        return largestInt;
    }

    public double getAverage() {
        return ((double) total) / ((double) this.size());
    }

    @Override
    public void establishCourseSchedule(String startDate, String endDate) {
        System.out.println("hola");
    }
}
