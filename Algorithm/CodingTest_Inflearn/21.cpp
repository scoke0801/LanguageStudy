//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> vecA(10);
//	vector<int> vecB(10);
//	for (int i = 0; i < 10; ++i) 
//	{
//		cin >> vecA[i];
//	}
//	
//	for (int i = 0; i < 10; ++i)
//	{
//		cin >> vecB[i];
//	}
//
//	int scoreA = 0, scoreB = 0;
//	char winner = 'D';
//	for (int i = 0; i < 10; ++i)
//	{
//		int A = vecA[i];
//		int B = vecB[i];
//
//		if (A == B) {
//			scoreA += 1;
//			scoreB += 1;
//		}
//		else if (A > B) {
//			scoreA += 3;
//			winner = 'A';
//		}
//		else {
//			scoreB += 3;
//			winner = 'B';
//		}
//	}
//
//	cout << scoreA << " " << scoreB << "\n";
//	if ( scoreA == scoreB )
//	{
//		cout << winner << "\n";
//	}
//	else if( scoreA > scoreB){
//		cout << "A";
//	}
//	else {
//		cout << "B";
//	}
//}