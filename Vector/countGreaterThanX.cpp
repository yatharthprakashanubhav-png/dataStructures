#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(6);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    int ele;
    cout<<"Enter element : ";
    cin>>ele;

    int count = 0;
    for(int i:v){
        if(i>ele) count++;
    }

    cout<<"Total Elements greater than "<<ele<<" are : "<<count;
    return 0;
}