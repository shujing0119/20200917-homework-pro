#include <iostream>
using namespace std;

int main () {
	int number;
	cin >> number;

    int enter;
    int dp[10001] = {1};
    int length;
    int per;

	for (int i = 0; i < number; i++){
		
		cin >> length;
        cin >> per;

		for(int i = 0; i < per; i++){
			cin >> enter;
			for(int j = 10000; j >= enter; j--){
				dp[j] += dp[j - enter];
			}
		}
		
	}

    if (dp[per] == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
	
}