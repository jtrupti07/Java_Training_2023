import java.util.*;

public class Calculator {

    public static void main(String[] args) {
        int result = 0;
        Math math = new Math();
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a and b");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        System.out.println("You Entered for a "+a);
        System.out.println("You Entered for b "+b);

        System.out.println("Enter 1 for Addition");
        System.out.println("Enter 2 for Substraction");
        System.out.println("Enter 3 for Multiplication");
        System.out.println("Enter 4 for Division");
        System.out.println("Enter 5 for Square");
        System.out.println("Enter 6 for Cube");

        System.out.println("Enter your choice");
        int choice = scanner.nextInt();
        switch (choice) {
            case 1:
                result = math.Add(a, b);
                System.out.println("Addition of "+ a +" and "+b +" is "+ result);
                break;

            case 2:
                result = math.Sub(a, b);
                System.out.println("Substraction of "+ a +" and "+b +" is "+ result);
                break;

            case 3:
                result = math.Mult(a, b);
                System.out.println("Multiplication of "+ a +" and "+b +" is "+ result);
                break;

            case 4:
                if(b!= 0) {
                    result = math.Div(a, b);
                    System.out.println("Division of " + a + " and " + b + " is " + result);
                }
                else
                    System.out.println("Can not divide by 0");
                break;

            case 5:
               result =  math.Square(a);
               System.out.println("Square of "+ a +" is "+result);
               result = math.Square(b);
               System.out.println("Square of "+ b +" is "+result);
                break;

            case 6:
                result = math.Cube(a);
                System.out.println("Cube of "+ a +" is "+result);
                result =  math.Cube(b);
                System.out.println("Cube of "+ b +" is "+result);
                break;

            default:
                break;
        }


    }

}
