//#include<iostream>
//#include<vector>
//using namespace std;
//
//int ToNum(const vector<int>& vec)
//{
//	if (vec.empty()) {
//		return 1;
//	}
//	if (vec.size() == 1) {
//		return vec[0];
//	}
//
//	// 2 5 6
//	// 
//	int length = static_cast<int>(vec.size());
//	int num = 0;
//	for (int i = 0; i < length; ++i)
//	{
//		num += (std::pow(10, length - i - 1)) * vec[i];
//	}
//	num += vec.back();
//
//	return num;
//}
//int main()
//{
//	string str;
//	cin >> str;
//
//	int a = 0, b = 0;
//	vector<int> num;
//	for (size_t i = 1; i < str.length(); ++i)
//	{
//		if (str[i] == 'H') {
//			a = ToNum(num);
//			num.clear();
//		}
//		else {
//			num.push_back(str[i] - '0');
//		}
//	}	
//
//	b = ToNum(num);
//
//	cout << 12 * a + b;
//}