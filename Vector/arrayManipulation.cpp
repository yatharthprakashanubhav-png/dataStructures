#include<iostream>
#include<climits>
using namespace std;
int main(){
    // if array contain only posoitve values
    int arr[]={1,2,3,1,2,4,3,7,8,7,9};

    int size= sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    cout<<"Unique values"<<endl;;
    for(int i=0; i<size; i++){
        if(arr[i]!=-1) cout<<arr[i]<<endl;
    }
    return 0;
}
