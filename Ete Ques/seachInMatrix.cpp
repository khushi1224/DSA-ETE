#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{   
    int n , m ; cin>>n>>m;

    vector<vector<int>> arr(n,vector<int>(m));

    for(int i =0 ;i <n;i++){
        for(int j =0 ; j<n ;j++){
            cin>>arr[i][j];
        }
    }
    int k ; cin>>k; bool found;
      for(int i =0 ;i <n;i++){
        for(int j =0 ; j<n ;j++){
            if(arr[i][j]==k){
                cout<<"1";
                found = true;
                break;
            }
        }

    }
    if(!found){
        cout<<0;
    }

}