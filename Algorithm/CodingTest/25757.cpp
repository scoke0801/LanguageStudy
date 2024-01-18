//#include <iostream>
//#include <string>
//#include <set>
//using namespace std;
//
//int main()
//{
//	int N;
//	char Game;
//
//	cin >> N;
//	cin >> Game;
//
//	int needCount = 0;
//	if (Game == 'Y') needCount = 1;
//	else if (Game == 'F') needCount = 2;
//	else if (Game == 'O') needCount = 3;
//
//	std::set<std::string> names;
//	int imsCount = 0;
//	int playerCount = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		std::string name;
//		cin >> name;
//
//		names.insert(name);
//	}
//
//	std::cout << (names.size()) / needCount;
//}