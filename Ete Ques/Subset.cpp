
#include<bits/stdc++.h>
using namespace std;
void findSub(vector<int>&arr , int target , vector<int>&current , vector<vector <int>>&result,int index , int &count){
    if(index == arr.size()){
        if(target==0){
            result.push_back(current);
            count++;
        }
        return;
            }
current.push_back(arr[index]);
    findSub(arr,target-arr[index],current,result , index+1 , count);
    current.pop_back();
    findSub(arr,target,current,result,index+1,count);
}





int main(int argc, char const *argv[])
{   
    int n;cin>>n;
    vector<int> arr(n);

    for(int i =0 ;i <n;i++){

            cin>>arr[i];
    }
    int target ;
    cin>>target;
     vector<vector<int>> result;
    vector<int> current;
    int count = 0;
    findSub(arr,target,current,result,0,count);
    return 0;
}
