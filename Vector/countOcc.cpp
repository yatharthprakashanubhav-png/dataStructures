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

    int count=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==ele){
            count++;
        }
    }

    cout<<"Total number of occurance : "<<count;
    return 0;
}