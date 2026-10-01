// Given two vectors arrl[] and arr2[] of size m and n sorted in increasing order. Merge the two arrays into a single sorted array of size m+n.
#include<iostream>
#include<vector>
using namespace std;
vector<int> create(int size){
    vector<int> v;
    for(int i=0; i<size; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    return v;
}
void display(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    int size1,size2;
    cout<<"Enter size of first array : ";
    cin>>size1;
    vector<int> arr1 = create(size1);

    cout<<"Enter size of second array : ";
    cin>>size2;
    vector<int> arr2 = create(size2);

    display(arr1);
    display(arr2);

    vector<int> arr(size1+size2);
    int i=0,j=0,k=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            k++,i++;
        }
        else{
            arr[k]=arr2[j];
            k++,j++;
        }
    }
    while(i<size1){
        arr[k]=arr1[i];
        k++,i++;
    }
    while(j<size2){
        arr[k]=arr2[j];
        k++,j++;
    }
    display(arr);
    return 0;
}