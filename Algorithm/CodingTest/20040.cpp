//#include <iostream>
//using namespace std;
//
//short N, M;
//short parent[500001];
//short ans;
//
//int Find(unsigned char u)
//{
//	if (parent[u] == u)return u;
//
//	return parent[u] = Find(parent[u]);
//}
//
//bool Union(short a, short b)
//{
//	a = Find(a);
//	b = Find(b);
//
//	if (a == b) { return true; }
//	parent[a] = b;
//	return false;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	cin >> N >> M;
//	for (int i = 0; i < N; ++i)
//	{
//		parent[i] = i;
//	}
//
//	for (int i = 1; i <= M; ++i)
//	{
//		short a, b;
//		cin >> a >> b;
//	
//		if (Union(a, b))
//		{
//			ans = i;
//			break;
//		}
//	}
//
//	if (ans == 0) { std::cout << 0; }
//	else { std::cout << ans << "\n"; }
//
//	return 0;
//}