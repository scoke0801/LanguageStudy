#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	unordered_map<string, string> data;

	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		string addr, pw;
		cin >> addr >> pw;

		data[addr] = pw;
	}

	for (int i = 0; i < M; ++i) {
		string addr;
		cin >> addr;

		cout << data[addr] << "\n";
	}
}