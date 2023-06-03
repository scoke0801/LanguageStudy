#include <iostream>
#include <vector>
using namespace std;
// 0 1 2 3 4 5 6 7
// S E N D M O R Y
int arr[10];
bool visited[10];

int Send() {
	return arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
}
int More() {
	return arr[4] * 1000 + arr[5] * 100 + arr[6] * 10 + arr[1];
}
int Money() {
	return arr[4] * 10000 + arr[5] * 1000 + arr[2] * 100 + arr[1] * 10 + arr[7];
}

void Dfs(int level)
{
	if (level == 8) {
		if (Send() + More() == Money()) {
			if (arr[0] == 0 || arr[4] == 0) { return; }
			cout << "  " << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << "\n";
			cout << "+ " << arr[4] << " " << arr[5] << " " << arr[6] << " " << arr[1] << "\n";
			cout << "---------\n";
			cout << arr[4] << " " << arr[5] << " " << arr[2] << " " << arr[1] << " " << arr[7] << "\n";
		}
		return;
	}
	else {
		for (int i = 0; i < 10; ++i) {
			if (!visited[i]) {
				arr[level] = i;
				visited[i] = true;
				Dfs(level + 1);
				visited[i] = false;
			}
		}
	}
}
int main()
{
	Dfs(0);
	return 0;
}