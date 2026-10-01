// return prefix sum wihtout creating a new array
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    vector<int> v;
    int size;
    cout<<"Enter size : ";
    cin>>size;

    for(int i=0; i<size; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    vector<int> arr;
    int add=0;
    for(int i=0; i<size; i++){
        add += v[i];
        arr.push_back(add);
    }
    
    display(v);
    display(arr);
    return 0;
}