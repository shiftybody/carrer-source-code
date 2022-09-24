public class Temperature {

    public static final double FAHRENHEIT_FREEZING = 32.0;
    public static final double CENTIGRADE_FREEZING = 0.0;
    public static final double FAHRENHEIT_BOILING = 212.0;
    public static final double CENIGRADE_BOILING = 100.0;


    public static double FahrenheitToCentigrade(double tempF){
        return (tempF - FAHRENHEIT_FREEZING ) * (5.0/9.0);
    }

    public static double CentigradeToFahrenheit(double tempC) {
        return tempC * (9.0/5.0) + FAHRENHEIT_FREEZING;
    }
}
