#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    unordered_map<char, int> mp;
    for(char c:  s) mp[c]++;
    int max = INT_MIN;
    char ans;
    for(auto i: mp){
        if(i.second>max){
            max = i.second;
            ans = i.first;
        }
    }
    cout<<ans;
    return 0;
}
