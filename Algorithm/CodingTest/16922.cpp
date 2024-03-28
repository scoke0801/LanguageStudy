//#include <iostream>
//using namespace std;
//
//int N;
//int ans;
//int roma[] = { 1,5,10,50 };
//bool visited[1000 + 1];
//
//void Dfs(int count, int D, int cur)
//{
//	if (count == N)
//	{
//		if (visited[cur] == false) {
//			visited[cur] = true;
//			++ans;
//		}
//		return;
//	}
//
//	for (int i = D; i < 4; ++i)
//	{
//		Dfs(count + 1, i, cur + roma[i]);
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	cin >> N;
//
//	Dfs(0, 0, 0);
//
//	std::cout << ans;
//
//	return 0;
//}