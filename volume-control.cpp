#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	int x,y;
	while(t--){
        cin >> x;
        cin >> y;
        cout << abs(x-y) << endl;
	};
	return 0;
};
