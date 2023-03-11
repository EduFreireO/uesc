import java.util.Arrays;
import java.util.Scanner;
import java.io.IOException;

class Main {
 
    public static void main(String[] args) throws IOException 
    {
 
        int a, b, c;
        Scanner in = new Scanner(System.in);
        
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();
        
        int[] v = {a, b, c};
       
        Arrays.sort(v);
        for(int i = 0; i < v.length; i++)
            System.out.println(v[i]);

        System.out.print("\n");    
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);            
    }
 
}