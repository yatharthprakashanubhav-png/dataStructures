import java.util.*;
public class selection{
    public static void display(int arr[],int size){
        for(int i=0; i<size; i++){
            System.out.print(arr[i] + " ");
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

        for(int i=0; i<size; i++){
            int smallest = i;
            for(int j=i+1; j<size; j++){
                if(arr[j]<arr[smallest]){
                    smallest = j;
                }
            }
                int temp = arr[smallest];
                arr[smallest] = arr[i];
                arr[i] = temp;
        }
        display(arr,size);
        sc.close();
    }
}