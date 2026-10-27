#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int maxOnesRow(vector<vector<int>> &v){
    int max = INT_MIN;
    int index = -1;
    for(int i=0; i<v.size(); i++){
        int count=0;
        for(int j=0; j<v[0].size(); j++){
            if(v[i][j] == 1){
                count = v[0].size()-j;
                break;
            }
        }
        if(count>max){
                max = count;
                index = i;
            }
    }
    return index;
}
int main(){

    int n,m;
    cout<<"Enter rows and coloums";
    cin>>n>>m;
    
    vector<vector<int>> v(n, vector<int>(m));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }

    cout<<"Row number : "<<maxOnesRow(v);
    return 0;
}