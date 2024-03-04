//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int tree[27][2];
//
//void PreOrder(int cur)
//{
//	std::cout << (char)('A' + cur);
//	if (tree[cur][0] != -1) { PreOrder(tree[cur][0]); }
//	if (tree[cur][1] != -1) { PreOrder(tree[cur][1]); }
//}
//
//void InOrder(int cur)
//{
//	if (tree[cur][0] != -1) { InOrder(tree[cur][0]); }
//	std::cout << (char)('A' + cur);
//	if (tree[cur][1] != -1) { InOrder(tree[cur][1]); }
//}
//
//void PostOrder(int cur)
//{
//	if (tree[cur][0] != -1) { PostOrder(tree[cur][0]); }
//	if (tree[cur][1] != -1) { PostOrder(tree[cur][1]); }
//	std::cout << (char)('A' + cur);
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	memset(tree, -1, sizeof(tree));
//
//	for (int i = 0; i < N; ++i)
//	{
//		char parent, left, right;
//		cin >> parent >> left >> right;
//		if (left != '.')
//		{
//			tree[parent - 'A'][0] = left - 'A';
//		}
//		if (right != '.')
//		{
//			tree[parent - 'A'][1] = right - 'A';
//		}
//	}
//
//	PreOrder(0);
//	std::cout << "\n";
//
//	InOrder(0);
//	std::cout << "\n";
//
//	PostOrder(0);
//	std::cout << "\n";
//
//	return 0;
//}