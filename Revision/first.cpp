#include<iostream>
#include<vector>
using namespace std;
int countTarget(vector<int> v, int target){
    int count=0;
    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i]+v[j]==target){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;

    vector<int> arr;
    for(int i=0; i<size; i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }

    int target;
    cout<<"Enter target : ";
    cin>>target;

    cout<<"total elements : "<<countTarget(arr,target);
    
    return 0;
}