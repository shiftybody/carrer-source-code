import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class WeatherApplication {

    public static class Exceptioncatch extends Exception {
        public Exceptioncatch(String msg) {
            super("Error: " + msg);
        }
    }

    public String solution(String[] data) {

        double min = Double.parseDouble(data[2]);
        double max = Double.parseDouble(data[2]);

        for (int i = 2; i < (data.length); i++) {
            if (Double.parseDouble(data[i]) > max) {
                max = Double.parseDouble(data[i]);
            }
            if (Double.parseDouble(data[i]) < min) {
                min = Double.parseDouble(data[i]);
            }
        }

        Weather weather = new Weather(data[0]);
        weather.setMax(max);
        weather.setMin(min);

        return weather.getResultado();

    }

    public String[] splitString(String cadena) {
        return cadena.split("_");

    }

    public String requestData() {
        System.out.print(
                "[city_TEMP_minTemp1_maxTemp1 ...] > ");
        Scanner stdIn = new Scanner(System.in);
        return stdIn.nextLine();

    }

    public void principal() throws Exceptioncatch {

        String[] datos = splitString(requestData());
        Pattern numberPat = Pattern.compile("[0-9.]+");

        if (datos.length < 4) {
            throw new Exceptioncatch(
                    "Incomplete data. Need at least 4 tokens ");
            // Incomplete data. Need at least 4 tokens.
        } else {
            Matcher num = numberPat.matcher(datos[0]);
            if (num.matches() || datos[0].equals("TEMP")) {
                throw new Exceptioncatch(
                "Missing city before literal TEMP");

            } else {
                if (!datos[1].equals("TEMP")) {
                    throw new Exceptioncatch(
                    "Missing literal TEMP after city");

                } else {
                    if ((datos.length) % 2 != 0) {
                        throw new Exceptioncatch(
                        "Missing temperature value. Need min max pairs");

                    } else {
                        for (int i = 2; i < (datos.length - 1); i += 2) {
                            if (Integer.parseInt(datos[i])
                                > Integer.parseInt(datos[i + 1])) {
                                throw new Exceptioncatch(
                                "minTemp " + datos[i] +
                                " > maxTemp " + datos[i + 1]);

                            }
                        }
                    }
                }
            }
        }

        System.out.println(solution(datos));
    }

    public static void main(String[] args) {
        while (true) {
            try {
                WeatherApplication wA = new WeatherApplication();
                wA.principal();
                break;

            } catch (NumberFormatException e) {
                System.out.println(
                "Error: Incorrect number format: " + e.toString());

            } catch (Exceptioncatch e) {
                System.out.println(e.getMessage());
            }
        }
    }
}
