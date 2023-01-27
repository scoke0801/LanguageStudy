//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	
//	int N;
//	cin >> N;
//
//	set<string> buffer;
//	vector<string> vec;
//
//	vec.reserve(N);
//	for (int i = 0; i < N; ++i) {
//		string str;
//		cin >> str;
//
//		if (buffer.find(str) == buffer.end()) {
//			buffer.insert(str);
//			vec.push_back(str);
//		}
//	}
//
//	std::sort(vec.begin(), vec.end(), [](const string& a, const string& b) {
//		if (a.length() == b.length()) {
//			return a < b;
//		}
//	return a.length() < b.length(); });
//
//	for (const string& str : vec) {
//		cout << str << "\n";
//	}
//
//}