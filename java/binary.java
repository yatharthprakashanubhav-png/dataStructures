import java.util.*;
public class binary{
    public static void display(int arr[], int size){
        for(int i=0; i<size; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        return;
    }

    public static int binarySearch(int arr[], int size,int target){
        int str = 0;
        int end = size-1;
        
        while(str<=end){
            int mid = (str+end)/2;

            if(target>arr[mid]){
                str = mid+1;
            }
            else if(target<arr[mid]){
                end = mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size : ");
        int size = sc.nextInt();

        int arr[] = new int[size];

        for(int i=0; i<size; i++){
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter target : ");
        int target = sc.nextInt();

        System.out.print("Index : " + binarySearch(arr,size,target));
        sc.close();
    }
}