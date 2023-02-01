//#include <iostream>
//#include <unordered_map>
//#include <cctype> 
//#include <string>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N, M;
//	cin >> N >> M;
//
//	unordered_map<string, int> toNum;
//	unordered_map<int, string> toName;
//
//	for (int i = 1; i <= N; ++i) {
//		string name;
//		cin >> name;
//		toNum[name] = i;
//		toName[i] = name;
//	}
//
//	for (int i = 0; i < M; ++i) {
//		string question;
//		cin >> question;
//		if (isdigit(question[0])) {
//			int num = std::stoi(question);
//			cout << toName[num] << "\n";
//		}
//		else {
//			cout << toNum[question] << "\n";
//		}
//	}
//}