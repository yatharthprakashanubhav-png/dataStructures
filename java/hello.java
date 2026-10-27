import java.util.*;
public class hello{
    public static void display(int arr[], int size){
        for(int i=0; i<size; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        return;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size : ");
        int size = sc.nextInt();

        int arr[] = new int[size];
        for(int i=0; i<size; i++){
            arr[i] = sc.nextInt();
        }

        
        System.out.print("Enter index : ");
        int index = sc.nextInt();
        System.out.print("Enter element : ");
        int element = sc.nextInt();

        for(int i=size-1; i>index; i--){
            arr[i] = arr[i-1];
        }
        arr[index] = element;
        display(arr,size);
        sc.close();
    }
}