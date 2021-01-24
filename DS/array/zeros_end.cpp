#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     int *ar=  new int[n];
     for(int i=0;i<n;i++)
     cin>>ar[i];

    // Order of non negatives remain intact
    vector<int>vt;
	 for (int i = 0;i<n;i++){
	     if(ar[i]>0){
	         vt.push_back(ar[i]);
	       }
	} 
    int len = vt.size();
	for(int i =0;i<n;i++){
	    if(i<len)
	    ar[i] = vt[i];
	    else
	    ar[i] = 0;
	}

    // Order of non negatives changes
    //  while(l_pos<r_pos){
    //     if(ar[l_pos] !=0)
    //         l_pos++;
    //     if(ar[r_pos] == 0)
    //         l_pos--;
    //     if(ar[l_pos] ==0 && ar[r_pos] !=0){
    //         swap(ar[l_pos],ar[r_pos]);
    //         l_pos++;
    //         r_pos--;
    //     }
    //  }
     for(int i=0;i<n;i++)
     cout<<ar[i]<<" ";
     
    return 0;
}