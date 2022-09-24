public abstract class Course {
    public abstract void establishCourseSchedule(String startDate, String endDate);

    public void initializeCourse(Professor p, String s, String e){
        establishCourseSchedule(s,e);
    }
}
