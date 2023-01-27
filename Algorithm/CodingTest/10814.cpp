//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Info {
//	int age;
//	int order;
//	string name;
//};
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	
//	int N;
//	cin >> N;
//
//	vector<Info> vec(N);
//	for (int i = 0; i < N; ++i) {
//		cin >> vec[i].age;
//		cin >> vec[i].name;
//		vec[i].order = i;
//	}
//
//	std::sort(vec.begin(), vec.end(), [](const Info& a, const Info& b)
//		{
//			if (a.age == b.age) {
//				return a.order < b.order;
//			}
//			return a.age < b.age;
//		});
//
//	for (const Info& info: vec) {
//		cout << info.age << " " << info.name << "\n";
//	}
//}