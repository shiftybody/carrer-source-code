public class Main {
    public static void main(String[] args) {
        double degreesF = 212.0;
        double degreesC = Temperature.FahrenheitToCentigrade(degreesF);
        System.out.println("A temperature of " + degreesF + " degrees F = " +
                degreesC + " degrees C");

        Soup s = new Soup("chicken noodle");
        System.out.println(Temperature.CENIGRADE_BOILING);

        if (s.getTemperatur() < Temperature.CENIGRADE_BOILING){
            s.cook();
        } else
            {
                System.out.println("I'm too hot get");
            }
    }
}
