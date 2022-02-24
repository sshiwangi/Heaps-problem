#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> sortksorted(int arr[], int n, int k){
    priority_queue <int,vector<int>, greater<int>> minh;
    vector<int> ans;
    int ele;
    for(int i = 0; i<n; i++){
        minh.push(arr[i]);
        if(minh.size()>0)
        {
            ele = minh.top();
            minh.pop();
        }
        ans.push_back(ele);    

    }
    while (minh.size()>0)
    {
        ele=minh.top();
        minh.pop();
        ans.push_back(ele);

    }
    return ans;
    

}


int main(){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ans = sortksorted(arr,n,k);
    for (int i = 0; i< ans.size(); i++)
    {
        cout<<ans[i]<<" ";
        
    }
    

    
     return 0;
}