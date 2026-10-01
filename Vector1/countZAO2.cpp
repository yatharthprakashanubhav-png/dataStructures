//sort an array cosisting only zeros and one
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int z=0;
    for(int i:v){
        if(i==0) z++;
    }
    for(int i=0; i<n; i++){
        if(i<z) v[i]=0;
        else v[i]=1;
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}