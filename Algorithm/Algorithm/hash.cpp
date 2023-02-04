#include "Common.h"

// Q. map vs hash_map( C++11 표준, unordered_map )

// map : Red-Black Tree
// - 추가 / 탐색 / 삭제 :: O(logN)

// C# dictionary == C++ Unordered_map

// hash_map(unordered_map)
// - 추가 / 탐색 / 삭제 O(1)

// 메모리를 내주고 속도를 취한다...

// "해시" "테이블"
void TestHash()
{
	struct User {
		int userId = 0;
		string userName;
	};

	vector<User> users;

	users.resize(1000);

	/// 777번 유저 정보 세팅
	const int userId = 123456789;
	int key = userId % 1000;
	users[key] = User{ userId, "Jonghuyn" };

	/// 777번유저의 이름은?
	string name = users[key].userName;
	cout << name << "\n";

	// 테이블
	// 키를 알면, 데이터를 단번에 찾을 수 있다.

	// 충돌문제...
	// 충돌이 발생한 자리를 대신해서 다른 빈자리를 찾아나서면 된다.
	// 충돌 해결은?
	// 선형 조사법
	// 이차 조사법
	// 체이닝
}

void TestHashTableChaining()
{
	struct User {
		int userId = 0;
		string userName;
	};

	vector<vector<User>> users;
	users.resize(1000);
	
	const int userId = 123456789;
	int key = userId % 1000;
	users[key].push_back( User{ userId, "Jonghuyn" });

	vector<User>& bucket = users[key];
	for (User& user : bucket) {
		if (user.userId == userId) {
			string name = user.userName;
			cout << name << endl;
		}
	}
}

int main()
{
	TestHash();
	TestHashTableChaining();
}