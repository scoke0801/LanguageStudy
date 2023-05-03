//#include <iostream>
//using namespace std;
//
//void mergeAndSort(int arr[], int left, int right)
//{
//	int indexL, indexR, index;
//	int mid = (left + right) >> 1;
//	
//	indexL = left;
//	indexR = mid + 1;
//	index = left;
//
//	int temp[10] = { 0, };
//	while (indexL <= mid && indexR <= right)
//	{
//		temp[index++] = arr[indexL] < arr[indexR] ? arr[indexL++] : arr[indexR++];
//	}
//
//
//	for (int i = indexL; i <= mid; ++i)
//	{
//		temp[index++] = arr[i];
//	}
//
//	for (int i = indexR; i <= right; ++i)
//	{
//		temp[index++] = arr[i];
//	}
//
//	for (int i = left; i <= right; ++i)
//	{
//		arr[i] = temp[i];
//	}
//}
//
//void divide(int arr[], int left, int right)
//{
//	if (left >= right) { return; }
//
//	int mid = (left + right) / 2;
//	divide(arr, left, mid);
//	divide(arr, mid + 1, right);
//
//	mergeAndSort(arr, left, right);
//}
//
//int main()
//{
//	int N = 8;
//	int list[] = {7, 6, 3, 1, 5, 2, 4, 8};
//
//	divide(list, 0, N - 1);
//
//	for (int num : list)
//	{
//		cout << num << " ";
//	}
//}