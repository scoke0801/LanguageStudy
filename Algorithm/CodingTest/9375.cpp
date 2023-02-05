//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int T;
//	cin >> T;
//	for (int i = 0; i < T; ++i) {
//		int N;
//		cin >> N;
//
//		unordered_map<string, int> clothes;
//		for (int j = 0; j < N; ++j) {
//			string name, type;
//			cin >> name >> type;
//		
//			if (clothes.find(type) == clothes.end()) {
//				clothes[type] = 1;
//			}
//			else {
//				clothes[type] += 1;
//			}
//		}
//		
//		int acc = 1;
//		for (unordered_map<string, int>::iterator iter = clothes.begin(); iter != clothes.end(); ++iter) {
//			int count = (*iter).second;
//			acc *= (count + 1 );
//		}
//
//		cout << acc - 1<< "\n";
//	}
//}
