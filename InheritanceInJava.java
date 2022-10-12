import java.time.LocalDate;
import java.util.Scanner;

class Person {
    String name, address;
    int d, m, y;
    double height, weight;

    void setName(String name) {
        this.name = name;
    }

    void setAddress(String address) {
        this.address = address;
    }

    void setDate(int d, int m, int y) {
        this.d = d;
        this.m = m;
        this.y = y;
    }

    void setHeight(double height) {
        this.height = height;
    }

    void setWeight(double weight) {
        this.weight = weight;
    }

    String getName() {
        return name;
    }

    String getAddress() {
        return address;
    }

    String getDate() {

        String str = String.valueOf(d) + "/" + String.valueOf(m) + "/" + String.valueOf(y);
        return str;
    }

    double getHeight() {
        return height;
    }

    double getWeight() {
        return weight;
    }

    int calculateAge() {
        LocalDate myObj = LocalDate.now();
        int age = myObj.getYear() - y;
        return age;
    }

}

class Student extends Person {
    int roll_no, size;

    void setPersonAttribute(String name, String address, int d, int m, int y, double height, double weight) {
        super.setName(name);
        super.setAddress(address);
        super.setDate(d, m, y);
        super.setHeight(height);
        super.setWeight(weight);

    }

    void setsize(int size) {
        this.size = size;
    }

    /*
     * double avgmarks;
     * void setMarks(double marks,int i) {
     * this.marks[i] = marks;
     * }
     */

    void calculateAvg() {
        Scanner sc1 = new Scanner(System.in);
        System.out.println("Enter the size");
        size = sc1.nextInt();
        double marks[] = new double[size];
        System.out.print("Enter marks of subject ");
        for (int i = 0; i < size; i++) {
            marks[i] = sc1.nextDouble();
            // s1.setMarks(marks, i);
        }
        double total = 0;
        for (int i = 0; i < size; i++) {
            total = total + marks[i];

        }
        double avgmarks = total / size;
        System.out.println("Average=" + avgmarks);

    }

    void display() {
        System.out.print("Name : " + super.getName() + "\nAddress : " + super.getAddress() + "\nBirthdate : "
                + super.getDate() + "\nHeight : " + super.getHeight() + "\nWeight : " + super.getWeight() + "\nAge : "
                + super.calculateAge());

    }
}

class InheritanceTest1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Student s1 = new Student();
        System.out.print("Enter Name of the Student : ");
        String name = sc.nextLine();
        System.out.print("Enter Address of the Student : ");
        String address = sc.nextLine();
        System.out.print("Enter Birthday of the student (Date Month Year) : ");
        int d = sc.nextInt();
        int m = sc.nextInt();
        int y = sc.nextInt();
        System.out.print("Enter the Height of student in meters : ");
        double height = sc.nextDouble();
        System.out.print("Enter the Weight of student in Kg : ");
        double weight = sc.nextDouble();
        s1.setPersonAttribute(name, address, d, m, y, height, weight);

        // s1.setsize(size);

        // s1.setMarks(marks);
        s1.calculateAvg();
        s1.display();
        sc.close();
    }
}
