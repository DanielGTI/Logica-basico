import java.util.*;
import java.lang.*;
import java.io.*;

// The main method must be in a class named "Main".
class Main {
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        
        double a, b, media;
        a = leia.nextDouble();
        b = leia.nextDouble();

        media = ( a*3.5 + b*7.5 ) / ( 3.5 + 7.5 );

        System.out.printf("MEDIA = %.5f\n", media);
        
    }
}
