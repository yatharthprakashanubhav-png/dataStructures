#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows and column size : ";
    cin>>n>>m;

    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}