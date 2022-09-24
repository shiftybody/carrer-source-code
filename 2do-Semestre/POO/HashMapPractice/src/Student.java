public class Student {
    private final String idNo;
    private final String name;

    public Student(String idNo, String name) {
        this.idNo = idNo;
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public String getIdNo() {
        return idNo;
    }

    @Override
    public String toString() {
        return
                "ID: " + idNo + "\n" +
                        "Name: " + name;
    }
}


