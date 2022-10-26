#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int A[10]={6,2,5,5,4,5,6,3,7,6};
	while(t--){
	    int a,b,c=0;
	    cin>>a>>b;
	    int s=a+b;
	    while(s>0){
	        int f=s%10;
	        c=c+A[f];
	        s=s/10;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
