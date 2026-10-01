#include<iostream>
#include<vector>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    
    int i=0,j=n-1;
    while(i<j){
        if(v[i]%2!=0 && v[j]%2==0){
            swap(v[i],v[j]);
            i++,j--;
        }
        if(v[i]%2==0) i++;
        if(v[j]%2!=0) j--;
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}