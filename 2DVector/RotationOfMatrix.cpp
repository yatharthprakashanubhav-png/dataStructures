#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void rotate(vector<vector<int>> &v){
    
}
int main(){

    int n,m;
    cout<<"Enter rows and coloums : ";
    cin>>n>>m;
    
    vector<vector<int>> v(n, vector<int>(m));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }
    rotate(v);
    return 0;
}