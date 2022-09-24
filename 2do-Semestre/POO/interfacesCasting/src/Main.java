import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        Course c = new Course();
        Professor p = new Professor();
        StudentInstructor si = new StudentInstructor();
        c.setInstructor(p);
        c.setInstructor(si);

        //c.setInstructor(x);
        //siempre que x sea una instancia de una clase que
        //implemente la interfaz.

    }
}
