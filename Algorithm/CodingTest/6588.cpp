//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <unordered_map>
//using namespace std;
//
//std::vector<int> buf;
//std::vector<bool> arr;
//void PrimeCheck(int num)
//{
//	arr.resize(num + 1);
//	arr[1] = true;
//	for (int i = 2; i * i <= num; ++i)
//	{
//		if (arr[i]) continue;
//
//		for (int j = i + i; j <= num; j += i) {
//			arr[j] = true;
//		}
//	}
//
//	for (int i = 3; i <= num; i += 2) {
//		if (!arr[i] )
//		{
//			buf.push_back(i);
//		}
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int maxNum = 0;
//
//	std::vector<int> inputs;
//	while (true)
//	{
//		int num;
//		cin >> num;
//		
//		if (num == 0) { break; }
//
//		inputs.push_back(num);
//		maxNum = std::max(maxNum, num);
//	}
//
//	PrimeCheck(maxNum);
//
//	for (int num : inputs)
//	{
//
//		bool flag = false;
//		for (int left = 3; left <= num / 2; left += 2)
//		{
//			if (arr[left]) { continue; }
//			int right = num - left;
//
//			if (arr[right]) { continue; }
//			std::cout << num << " = " << left << " + " << right << "\n";
//
//			flag = true;
//			break;
//		}
//		if (!flag)
//		{
//			std::cout << "Goldbach's conjecture is wrong.\n";
//		}
//	}
//}