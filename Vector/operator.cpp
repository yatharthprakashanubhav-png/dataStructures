#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(23);
    v.push_back(4);
    v.push_back(29);
    v.push_back(2);
    v.push_back(13);

    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i : v){
        cout<<i<<" ";
    }

    cout<<endl;
    v.insert(v.begin()+3,56);
    v.insert(v.end()-3,76);

    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.erase(v.end()-2);
    for(int i : v){
        cout<<i<<" ";
    }
}