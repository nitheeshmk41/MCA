package Worksheet_07;

class Book {
    String title;
    String author;
    boolean available;
    Book(String t, String a) {
        this.author = a;
        this.title = t;
        this.available = true;
    }
    void borrowBook() {
        System.out.println("Book borrowed Successfully");
        this.available = false;
        displayStatus();
    }
    void returnBook() {
        System.out.println("Book returned");
        this.available = true;
        displayStatus();
    }
    private void displayStatus() {
        if(this.available){
            System.out.println("Status : Available");
        } else{
            System.out.println("Status : Not Available");
        }

    }
}
public class P3_libraryManage {
    public static void main(String[] args) {
        Book java = new Book("Java E11","Nitheesh");
        java.borrowBook();
        java.returnBook();

    }
}
