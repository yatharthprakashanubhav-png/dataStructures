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
    int sum = 0;
      for(int i=1; i<size; i++){
        v[i] += v[i-1];
    }

    int num_of_query;
    cout<<"Enter number of Queries : ";
    cin>>num_of_query;
    while(num_of_query){
        int l,r;
        cin>>l>>r;
        cout<<"Sum from index "<<l<<" to "<<r<<" : "<<v[r]-v[l-1]<<endl;
        num_of_query--;
    }
    return 0;
}