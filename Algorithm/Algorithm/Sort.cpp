//#include "Common.h"
//
//void BubbleSort(vector<int>& v)
//{
//	const int SIZE = static_cast<int>(v.size());
//
//	for (int i = 0; i < SIZE - 1; ++i) {
//		for (int j = i + 1; j < SIZE; ++j) {
//			if (v[i] > v[j]) {
//				std::swap(v[i], v[j]);
//			}
//		}
//	}
//}
//
//void SelectionSort(vector<int>& v)
//{
//	const int SIZE = static_cast<int>(v.size());
//	
//	for (int i = 0; i < SIZE - 1; ++i) {
//		int min = i;
//		for (int j = i + 1; j < SIZE; ++j) {
//			if (v[min] > v[j]) {
//				min = j;
//			}
//		}
//		std::swap(v[min], v[i]);
//	}
//}
//
//void InsertionSort(vector<int>& v)
//{
//	const int SIZE = static_cast<int>(v.size());
//
//	for (int i = 1; i < SIZE; ++i) {
//		int insertData = v[i];
//
//		int j;
//		for (j = i - 1; j >= 0; --j) {
//			if (v[j] > insertData) {
//				v[j + 1] = v[j];
//			}
//			else {
//				break;
//			}
//		}
//		v[j + 1] = insertData;
//	}
//}
//
//void HeapSort(vector<int>& v)
//{
//	priority_queue<int, vector<int>, greater<int>> pq;
//
//	for (int num : v) {
//		pq.push(num);
//	}
//
//	v.clear();
//
//	while (pq.empty() == false) {
//		v.push_back(pq.top());
//		pq.pop();
//	}
//}
//
//// 병합 정렬
//// 분할 정복( Divide And Conquer )
//// - 분할(Divide)	문제를 더 단순하게 분할한다.
//// - 정복(Conquer)	분할된 문제를 해결
//// - 결합(Combine)	결과를 취합하여 마무리
//
//void MergeResult(vector<int>& v, int left, int mid, int right)
//{
//	vector<int> temp;
//
//	int leftIdx = left;
//	int rightIdx = mid + 1;
//
//	while (leftIdx <= mid && rightIdx <= right) {
//		if (v[leftIdx] <= v[rightIdx]) {
//			temp.push_back(v[leftIdx]);
//			++leftIdx;
//		}
//		else {
//			temp.push_back(v[rightIdx]);
//			++rightIdx;
//		}
//	}
//
//	if (leftIdx > mid) {
//		while (rightIdx <= right) {
//			temp.push_back(v[rightIdx++]);
//		}
//	}
//	else {
//		while (leftIdx <= mid) {
//			temp.push_back(v[leftIdx++]);
//		}
//	}
//
//	for (int i = 0; i < temp.size(); ++i) {
//		v[left + i] = temp[i];
//	}
//}
//
//void MergeSort(vector<int>& v, int left, int right)
//{
//	if (left >= right) {
//		return;
//	}
//
//	int mid = (left + right) / 2;
//	MergeSort(v, left, mid);
//	MergeSort(v, mid + 1, right);
//	
//	MergeResult(v, left, mid, right);
//}
//
//int Partition(vector<int>& v, int left, int right)
//{
//	int pivot = v[left];
//	int low = left + 1;
//	int high = right;
//
//	while (low <= high) {
//		while ( low <= right && pivot >= v[low]) {
//			++low;
//		}
//
//		while ( high >= left + 1 && pivot <= v[high] ) {
//			--high;
//		}
//
//		if (low < high) {
//			swap(v[low], v[high]);
//		}
//	}
//
//	swap(v[left], v[high]);
//	return high;
//}
//
//void QuickSort(vector<int>& v, int left, int right)
//{
//	if (left > right) {
//		return;
//	}
//
//	int pivot = Partition(v, left, right);
//
//	QuickSort(v, left, pivot - 1);
//	QuickSort(v, pivot + 1, right);
//}
//
//int main()
//{
//	srand(time(nullptr));
//	
//	vector<int> v(50);
//	for (int i = 0; i < 50; ++i) {
//		v[i] = (rand() % 100);
//	}
//
//	// BubbleSort(v);
//	// SelectionSort(v);
////	InsertionSort(v);
////	MergeSort(v, 0, v.size() - 1);
//	QuickSort(v, 0, 50 - 1);
//
//
//	for (int n : v) {
//		cout << n << "\n";
//	}
//}