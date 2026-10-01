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
    int i=0,j=n-1;
    while(i<j){
        if(v[i]==1 && v[j]==0){
            v[i++]=0;
            v[j--]=1;
        }
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}