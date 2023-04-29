//#include <iostream>
//using namespace std;
//
//void visit_pre(int* arr, int idx)
//{
//	int len = sizeof(arr);
//	if (idx >= len) { return; }
//
//	cout << arr[idx] << " ";
//	visit_pre(arr, idx * 2);
//	visit_pre(arr, idx * 2 + 1);
//}
//
//void visit_in(int* arr, int idx)
//{
//	int len = sizeof(arr);
//	if (idx >= len) { return; }
//
//	visit_in(arr, idx * 2);
//	cout << arr[idx] << " ";
//	visit_in(arr, idx * 2 + 1);
//}
//
//void visit_post(int* arr, int idx)
//{
//	int len = sizeof(arr);
//	if (idx >= len) { return; }
//
//	visit_post(arr, idx * 2);
//	visit_post(arr, idx * 2 + 1);
//
//	cout << arr[idx] << " ";
//}
//
//int main()
//{
//	int arr[8] = { -1, 1,2,3,4,5,6,7 };
//	
//	visit_pre(arr, 1);
//	cout << "\n";
//
//	visit_in(arr, 1);
//	cout << "\n";
//
//	visit_post(arr, 1);
//	cout << "\n";
//
//}