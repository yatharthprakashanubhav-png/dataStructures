// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,51,6,7,8,9};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     int ele;
//     cout<<"Enter element : ";
//     cin>>ele;

//     bool flag=false;
//     for(int i=0; i<size; i++){
//         if(arr[i]==ele){
//             flag=true;
//             cout<<i;
//             break;
//         }
//     }
//     if(flag==false) cout<<-1;

//     return 0;
// }

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,2,3,4,51,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    int ele;
    cout<<"Enter element : ";
    cin>>ele;

    int ans=-1;
    for(int i=0; i<size; i++){
        if(arr[i]==ele){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}