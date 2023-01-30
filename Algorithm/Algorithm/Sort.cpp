#include "Common.h"

void BubbleSort(vector<int>& v)
{
	const int SIZE = static_cast<int>(v.size());

	for (int i = 0; i < SIZE - 1; ++i) {
		for (int j = i + 1; j < SIZE; ++j) {
			if (v[i] > v[j]) {
				std::swap(v[i], v[j]);
			}
		}
	}
}

void SelectionSort(vector<int>& v)
{
	const int SIZE = static_cast<int>(v.size());
	
	for (int i = 0; i < SIZE - 1; ++i) {
		int min = i;
		for (int j = i + 1; j < SIZE; ++j) {
			if (v[min] > v[j]) {
				min = j;
			}
		}
		std::swap(v[min], v[i]);
	}
}

void InsertionSort(vector<int>& v)
{
	const int SIZE = static_cast<int>(v.size());

	for (int i = 1; i < SIZE; ++i) {
		int insertData = v[i];

		int j;
		for (j = i - 1; j >= 0; --j) {
			if (v[j] > insertData) {
				v[j + 1] = v[j];
			}
			else {
				break;
			}
		}
		v[j + 1] = insertData;
	}
}

int main()
{
	vector<int> v{ 5, 1,3,4,2 };
	
	// BubbleSort(v);
	// SelectionSort(v);
	InsertionSort(v);

	for (int n : v) {
		cout << n << "\n";
	}
}