#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int S, E;
int jumpCnt;

struct Info
{
	int pos;
	int jumpCnt;
};

int NEXT_POS[3] = { 1,-1,5 };
int visit[10001];
int main()
{
	cin >> S >> E;

	queue<Info> buffer;
	buffer.push({ S, 0 });
	
	int ans = 0;
	while (!buffer.empty())
	{
		Info cur = buffer.front();
		buffer.pop();
		
		if (visit[cur.pos]) { continue; }
		visit[cur.pos] = true;

		if (cur.pos == E)
		{
			ans = cur.jumpCnt;
			break;
		}

		for (int i = 0; i < 3; ++i) {
			int pos = cur.pos + NEXT_POS[i];
			if (pos < 1 || pos > 10000) { continue; }
			buffer.push({ pos, cur.jumpCnt + 1 });
		}
	}

	cout << ans << "\n";
}