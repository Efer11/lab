#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n, t;
	cin >> n;
	cin >> t;
	for(int i = pow(10,n-1); i < pow(10, n); i++){
		if (i % t == 0) {
			cout << i;
			break;
		}	
	}
}
