import java.util.*;
import java.lang.*;
import java.io.*;

// The main method must be in a class named "Main".
class Main {
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        
        int a, b, x;
        a = leia.nextInt();
        b = leia.nextInt();

        x = a + b;
        System.out.printf("X = %d\n", x);
        
    }
}
