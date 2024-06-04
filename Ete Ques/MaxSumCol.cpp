#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{   
    int n  ; cin>>n;

    vector<vector<int>> arr(n,vector<int>(n));

    for(int i =0 ;i <n;i++){
        for(int j =0 ; j<n ;j++){
            cin>>arr[i][j];
        }
    }
    int maxSum = INT_MIN;
    int idx=-1;
      for(int i =0 ;i <n;i++){
        int sum =0;
        for(int j =0 ; j<n ;j++){
            sum = sum+arr[j][i];
        }
        if(sum>maxSum){
            maxSum = sum;
            idx = i;
        }
    }
    cout<<idx+1<<" "<<maxSum<<endl;

}