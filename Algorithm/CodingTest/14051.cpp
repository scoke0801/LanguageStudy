// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// constexpr int MAX_CASE = 15;


// int main()
// {
// 	int N;
// 	cin >> N;

// 	int T[MAX_CASE + 1] = { 0, };
// 	int P[MAX_CASE + 1] = { 0, };
// 	for (int i = 1; i <= N; ++i)
// 	{
// 		cin >> T[i] >> P[i];
// 	} 

// 	int ans = 0;
// 	int buffer[MAX_CASE] = { 0, };

// 	for (int i = 1; i <= N; ++i)
// 	{
// 		buffer[i] = std::max(buffer[i], buffer[i - 1]);

// 		int next = i + T[i];
// 		if (next > N + 1) { continue; }

// 		buffer[next] = std::max(buffer[next], buffer[i] + P[i]);
// 		ans = std::max(ans, buffer[next]);
// 	}

// 	std::cout << ans << "\n"; 
// }