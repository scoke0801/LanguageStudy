//#include <iostream>
//#include <vector>
//#include <stack>
//#include <algorithm>
//using namespace std;
//
//int buffer[1000000];  
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	std::vector<int> list;
//	std::vector<int> visiter;
//	visiter.reserve(1000000);
//	list.reserve(1000000);
//	
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> buffer[i]; 
//		
//		if (list.empty() || list.back() < buffer[i])
//		{
//			list.push_back(buffer[i]);
//			visiter.push_back(list.size() - 1);
//		}
//		else
//		{
//			auto pos = std::lower_bound(list.begin(), list.end(), buffer[i]);
//			*pos = buffer[i];
//			visiter.push_back(pos - list.begin());
//		}
//	}
//	 
//	std::cout << list.size() << "\n";
//	int target = list.size() - 1;
//	std::stack<int> answer;
//	for (int i = N - 1; i >= 0; --i)
//	{
//		if (target == visiter[i])
//		{
//			--target;
//			answer.push(buffer[i]);
//		}
//	} 
//
//	while (answer.empty() == false)
//	{
//		std::cout << answer.top() << " ";
//		answer.pop();
//	}
//}