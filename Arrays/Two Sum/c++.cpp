#include<iostream>
using namespace std;

vector<int> Two_Sum_br(vector<int> &arr, int sum){
    int n = arr.size();
    for(int i = 0; i < n-1; i++){
        int target = sum - arr[i];
        for(int j = i + 1; j < n; j++){
            if(target == arr[j]) return {arr[i], arr[j]};
        }
    }

    return {-1, -1};
}

vector<int> Two_Sum_single(vector<int> &arr, int sum){
    int n = arr.size();
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        int target = sum - arr[i];
        if(mp.find(target) != mp.end()) return {i, mp[target]};
        mp[arr[i]] = i;        
    }

    return {-1, -1};
}

vector<vector<int>> Two_Sum(vector<int> &arr, int sum){
    int n = arr.size();
    unordered_map<int, int> mp;
    vector<vector<int>> res;
    for(int i = 0; i < n; i++){
        int target = sum - arr[i];
        if(mp.find(target) != mp.end()) res.push_back({i, mp[target]});
        else mp[arr[i]] = i;        
    }

    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    while(--n >= 0){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    int sum;
    cin>>sum;
    vector<vector<int>> res = Two_Sum(arr, sum);
    for(auto i : res){
        cout<<i[0]<<", "<<i[1];
    }
}