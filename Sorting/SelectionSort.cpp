#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_index = i;

        for(int j=i;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    };
    cout<<"sorted list is : "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Please enter elements of your array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selection_sort(arr,n);

    
}