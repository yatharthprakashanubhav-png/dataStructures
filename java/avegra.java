import java.util.*;
public class avegra{
    public static void display(int arr[], int size){
        for(int i=0; i<size; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        return;
    }

    public static int average(int arr[], int size){
        int avg = 0;
        int sum = 0;
        for(int i=0; i<size; i++){
            sum += arr[i];
        }
        return sum/size;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size : ");
        int size = sc.nextInt();

        int arr[] = new int[size];

        for(int i=0; i<size; i++){
            arr[i] = sc.nextInt();
        }

        System.out.print("Average : " + average(arr,size));
        sc.close();
    }
}