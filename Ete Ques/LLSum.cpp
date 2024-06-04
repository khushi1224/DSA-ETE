#include<bits/stdc++.h>
using namespace std;
vector<int> addNum(vector<int> &l1 , vector<int>&l2){
    vector<int> ans;
    int n1 = (int)l1.size();
    int n2 = (int)l2.size();
    int i = 0 ; int j = 0;
    int carry = 0 ;
    while(i<n1||j<n2||carry){
        int curr = carry;
        if(i<n1){
            curr+=l1[i];
            i++;
        }
        if(j<n2){
            curr += l2[j];
            j++;
        }
        ans.push_back(curr%10);
        carry = curr/10;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n1; cin>>n1;
    int n2;cin>>n2;
    vector<int> l1(n1,0);
    vector<int>l2(n2,0);
    for (int i=0; i<n1; i++) {
        cin >> l1[i];
    }

    for (int i=0; i<n2; i++) {
        cin >> l2[i];
    }
    auto ans = addNum(l1,l2);
    for(auto i : ans) cout<<i<<" ";
    return 0;
}

