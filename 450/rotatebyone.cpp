#include<iostream>
using namespace std;

int main() {
	int t,n,temp;
	cin>>t;
	while(t--){
	    cin>>n;
	    int *ar = new int[n];
	    for(int i =0;i<n;i++){
	        cin>>ar[i];
	    }
	    if(n>1){
	        temp = ar[n-1];
	        for(int i = n-1;i>0;i--){
	            ar[i] = ar[i-1];
	        }
	        ar[0] = temp;
	    }
	     for(int i = 0;i<n;i++){
	        cout<<ar[i]<<" ";
	    }
	    cout<<endl;
	    delete [] ar;
	}
	return 0;
}