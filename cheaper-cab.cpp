#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	int x;
	int y;
	while(t--){
	    cin >> x;
	    cin >> y;
	    if(x<y){
	        cout<<"First"<<endl;
	    }else if(y<x){
	        cout<<"Second"<<endl;
	    }else if(x==y){
	        cout<<"Any"<<endl;
	    };
	};
	return 0;
};
