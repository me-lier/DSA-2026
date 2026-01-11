#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int> &arr){
    int n = arr.size();

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j+1]) swap(arr[i], arr[j]);
        }
    }
    return;
}
int main(){
    int n;
    vector<int> arr;
    cout<<"Length of the Array :-> \n";
    cin>>n;
    while(n-- > 0){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    cout<<"\nBefore Sorting\n";
    for(int ele : arr) cout<<ele<<", ";

    bubble_sort(arr);
    cout<<"\nAfter Sorting\n";

    for(int ele : arr) cout<<ele<<", ";
}