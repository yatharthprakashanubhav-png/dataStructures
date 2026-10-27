#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows and columns : ";
    cin>>n>>m;

    vector <vector<int>> v(n, vector<int>(m,1));
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}