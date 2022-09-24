// de esta manera importamos todas
// las directivas static de la interface

import static java.lang.Math.*;

public class Example {

    public static final int x = 0;

    private final int y = 0;

    public static void main(String[] args) {

        double radius = 5;
        double area = PI * radius * radius;

        //PI = 0.0;   esto no es posible, ya que PI es un atributo final

        System.out.println(area);

        Example es = new Example();
        es.someMethod();

        // lenght también se encuentra declarado como final
        int[] x = new int[9];
        for (int i = 0; i < x.length; i++) {
            System.out.println();
        }

    }

    public void someMethod(){
        final int z;

        // podemos asignar valores a una variable local
        // separadamente des pues de su declaration;
        z = 3;

        //x = 1;  esto no ocurre para los atributos
    }
}
