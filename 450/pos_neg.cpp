#include<bits/stdc++.h>
using namespace std;

// two pointer approach
// int main(){

//     int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
//     int n = sizeof(arr) / sizeof(arr[0]); 
//     int l_ind = 0,r_ind = n-1;

//     while(l_ind<=r_ind){
//         if(arr[l_ind]>0 && arr[r_ind]<0){
//             swap(arr[l_ind],arr[r_ind]);
//             l_ind++;
//             r_ind--;
//         }
//         else if(arr[l_ind]<0 && arr[r_ind]<0){
//             l_ind++;
//         }
//         else if(arr[l_ind]<0 && arr[r_ind]>0){
//             r_ind--;
//         }
//     }
//     for(int i= 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Partition Quick Sort
int main(){
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]); 

    int j = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j)
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
     }
    return 0;
}