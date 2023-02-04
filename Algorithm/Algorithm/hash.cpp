#include "Common.h"

// Q. map vs hash_map( C++11 ǥ��, unordered_map )

// map : Red-Black Tree
// - �߰� / Ž�� / ���� :: O(logN)

// C# dictionary == C++ Unordered_map

// hash_map(unordered_map)
// - �߰� / Ž�� / ���� O(1)

// �޸𸮸� ���ְ� �ӵ��� ���Ѵ�...

// "�ؽ�" "���̺�"
void TestHash()
{
	struct User {
		int userId = 0;
		string userName;
	};

	vector<User> users;

	users.resize(1000);

	/// 777�� ���� ���� ����
	const int userId = 123456789;
	int key = userId % 1000;
	users[key] = User{ userId, "Jonghuyn" };

	/// 777�������� �̸���?
	string name = users[key].userName;
	cout << name << "\n";

	// ���̺�
	// Ű�� �˸�, �����͸� �ܹ��� ã�� �� �ִ�.

	// �浹����...
	// �浹�� �߻��� �ڸ��� ����ؼ� �ٸ� ���ڸ��� ã�Ƴ����� �ȴ�.
	// �浹 �ذ���?
	// ���� �����
	// ���� �����
	// ü�̴�
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