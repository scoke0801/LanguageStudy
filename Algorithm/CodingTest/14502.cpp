// #include <iostream> 
// #include <queue>
// #include <string.h>
// using namespace std;

// constexpr int MAX_CASE=8;
// int dx[4]={1, -1, 0, 0};
// int dy[4]={0, 0, 1, -1};
// int n, m, a[MAX_CASE][MAX_CASE];
// int temp[MAX_CASE][MAX_CASE];
// int ans=0;
// bool visited[MAX_CASE * MAX_CASE];
// vector<pair<int, int>> space;
 
// void bfs() { 
// 	queue<pair<int, int>> q;
// 	for(int i=0; i<n; i++) {
// 		for(int j=0; j<m; j++) {
// 			if(temp[i][j]==2) {
// 				q.push({i, j});
// 			}
// 		}
// 	}
	
// 	while(q.size()) {
// 		int x = q.front().first;
// 		int y = q.front().second;
// 		q.pop();
		
// 		for(int k=0; k<4; k++) {
// 			int nx = x+dx[k];
// 			int ny = y+dy[k];
			
// 			if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
// 			if(temp[nx][ny]==0) {
// 				temp[nx][ny] = 2;
// 				q.push({nx, ny});
// 			}
// 		}
// 	}
	
// 	int cnt=0;
// 	for(int i=0; i<n; i++) {
// 		for(int j=0; j<m; j++) {
// 			if(temp[i][j]==0) {
// 				cnt++;
// 			} 
// 		}
// 	}
// 	ans = max(ans, cnt);
// }

// void wall(int cur, int idx) {

// 	if(cur==3) {
//         memcpy(temp, a, sizeof(temp)); 
// 		int cnt=0;
// 		for(int i=0; i<space.size(); i++) {
// 			if(cnt==3) break;
// 			if(visited[i]) {
// 				int x = space[i].first;
// 				int y = space[i].second;
// 				temp[x][y] = 1;
// 				cnt++;
// 			}
// 		}
// 		bfs();
// 		return;
// 	}
	
// 	for(int i=idx; i<space.size(); i++) {
// 		if(visited[i]) continue;
// 		visited[i] = true;
// 		wall(cur+1, i);
// 		visited[i] = false;
// 	}
// }

// int main() 
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
    
// 	cin >> n >> m;
// 	for(int i=0; i<n; i++) 
//     {
// 		for(int j=0; j<m; j++) 
//         {
// 			cin >> a[i][j];
// 			if(a[i][j]==0) 
//             {
// 				space.push_back({i, j});
// 			}
// 		}
// 	}

// 	wall(0, 0);
	
// 	cout << ans;
// }