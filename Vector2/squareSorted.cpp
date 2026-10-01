// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists (Me a pair in the array whose absolute difference is exactly x.
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
vector<int> sortedSquare(vector<int> arr){
    vector<int> v(arr.size());
    int n = v.size();
    int i = 0;
    int j = n-1;
    int k = n-1;
    while(i <= j && k >= 0){
        if(abs(arr[i]) > abs(arr[j])){
            v[k] = arr[i]*arr[i];
            i++;
            k--;
        }
        else{
            v[k] = arr[j]*arr[j];
            j--;
            k--;
        }
    }
    return v;
}
int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;

    vector<int> arr = create(size);
    vector<int> res = sortedSquare(arr);

    display(res);
    return 0;
}