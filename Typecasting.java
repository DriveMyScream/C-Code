package datatype_and_variable;

public class Typecasting {
    public static void main(String [] args){
        // Implicit type casting
        float a = 10;
        System.out.println(a);

        // Explicit type casting
        int b = (int) 10.10f;
        System.out.println(b);

        // Automatic type promotion in expressions
        int c = 257;
        byte d = (byte)(c); // byte capacity is 256
        System.out.println(d);
        // it will take as 257 % 256 == 1 remainder as 1

        byte e = 40;
        byte f = 60;
        byte g = 100;
        // byte is not able to store a 40 * 60 bz its capacity is only of 256 number
        int result = (e * f) / g;
        // while byte evaluation it will automatically convert into int
        System.out.println(result);

        byte x = 50;
        // here this is an integer how you can assign as byte
        // x = x * 2;

        // ascii value Or Automatic type conversion
        int number = 'A';
        System.out.println(number);

        // unicode
        System.out.println("नमस्ते");

        System.out.println(3 * 3.14 * 5);




    }
}
