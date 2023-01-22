#include <iostream>
using namespace std;

int main__1526()
{
	int num = 0;
	cin >> num;
	
	for (int i = num; i >= 4; --i) {
		int temp = i;
		
		bool found = false;
		while (temp > 0) {
			int digit = temp % 10;
			if (digit == 4 || digit == 7) {
				temp /= 10;
			}
			else {
				found = true;
				break;
			}
		}
		
		if (!found) { cout << i << "\n";  break; }
	}

	return 0;
}