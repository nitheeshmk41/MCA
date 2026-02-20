package Worksheet_07;

class Employee {
    int id;
    String name;
    double basic;

    Employee(int i, String n, double b) {
        this.id = i;
        this.name = n;
        this.basic = b;
    }
    private double calculateSalary() {
        double al = 0.1 * this.basic;
        return this.basic + al;
    }
    void displayDetails() {
        System.out.println("ID: " + this.id + " Name: " + this.name + " Salary: " + calculateSalary());
    }
}
public class P4_employeeSalary {
    public static void main(String[] args) {
        Employee emp = new Employee(18,"Nitheesh",115000);
        emp.displayDetails();
    }
}
