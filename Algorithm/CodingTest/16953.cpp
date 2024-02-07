//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//std::queue<int> oper;
//std::vector<std::vector<int>> board;
//int N, M;
//
//constexpr int FLIPY = 1;
//constexpr int FLIPX = 2;
//constexpr int ROTATE_RIGHT = 3;
//constexpr int ROTATE_LEFT = 4;
//constexpr int DIV_ROTATE_RIGHT = 5;
//constexpr int DIV_ROTATE_LEFT = 6;
//
//void FlipY()
//{
//	std::vector<std::vector<int>> temp(N, std::vector<int>(M));
//
//	for (int i = 0; i < M; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			temp[j][i] = board[N - 1 - j][i];
//		}
//	}
//
//	board = std::move(temp);
//}
//
//void FlipX()
//{
//	std::vector<std::vector<int>> temp(N, std::vector<int>(M));
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			temp[i][j] = board[i][M - 1 - j];
//		}
//	}
//	
//	board = std::move(temp);
//}
//
//void RotateRight()
//{
//	// N: 6, M: 8
//	std::vector<std::vector<int>> temp(M, std::vector<int>(N));
//	for (int i = 0; i < M; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			temp[i][j] = board[N - j - 1][i];
//		}
//	}
//	std::swap(N, M);
//	board = std::move(temp);
//}
//
//void RotateLeft()
//{
//	std::vector<std::vector<int>> temp(M, std::vector<int>(N));
//	for (int i = 0; i < M; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			temp[i][j] = board[j][M-1-i];
//		}
//	}
//	std::swap(N, M);
//	board = std::move(temp);
//}
//
//void DivideRoateRight()
//{
//	int halfWidth = M * 0.5f;
//	int halfHeight = N * 0.5f;
//	std::vector<std::vector<int>> divided[4];
//	for (int i = 0; i < 4; ++i)
//	{
//		divided[i] = std::vector<std::vector<int>>(halfHeight, std::vector<int>(halfWidth));
//	}
//
//	for (int i = 0; i < halfHeight; ++i)
//	{
//		for (int j = 0; j < halfWidth; ++j)
//		{
//			divided[0][i][j] = board[i][j];
//		}
//	}
//	for (int i = 0; i < halfHeight; ++i)
//	{
//		for (int j = halfWidth; j < M; ++j)
//		{
//			divided[1][i][j - halfWidth] = board[i][j];
//		}
//	}
//	for (int i = halfHeight; i < N; ++i)
//	{
//		for (int j = halfWidth; j < M; ++j)
//		{
//			divided[2][i - halfHeight][j - halfWidth] = board[i][j];
//		}
//	}
//	for (int i = halfHeight; i < N; ++i)
//	{
//		for (int j = 0; j < halfWidth; ++j)
//		{
//			divided[3][i - halfHeight][j] = board[i][j];
//		}
//	}
//
//	//--------------------------------------------------
//	for (int i = 0; i < halfHeight; ++i)
//	{
//		for (int j = 0; j < halfWidth; ++j)
//		{
//			board[i][j] = divided[3][i][j];
//		}
//	}
//
//	for (int i = 0; i < halfHeight; ++i)
//	{
//		for (int j = 0; j < halfWidth; ++j)
//		{
//			board[i][j + halfWidth] = divided[0][i][j];
//		}
//	}
//
//	for (int i = 0; i < halfHeight; ++i)
//	{
//		for (int j = 0; j < halfWidth; ++j)
//		{
//			board[i + halfHeight][j + halfWidth] = divided[1][i][j];
//		}
//	}
//	for (int i = 0; i < halfHeight; ++i)
//	{
//		for (int j = 0; j < halfWidth; ++j)
//		{
//			board[i + halfHeight][j] = divided[2][i][j];
//		}
//	}
//}
//
//void DivideRotateLeft()
//{
//	int halfWidth = M * 0.5f;
//	int halfHeight = N * 0.5f;
//	std::vector<std::vector<int>> divided[4];
//	for (int i = 0; i < 4; ++i)
//	{
//		divided[i] = std::vector<std::vector<int>>(halfHeight, std::vector<int>(halfWidth));
//	}
//
//	for (int i = 0; i < halfHeight; ++i)
//	{
//		for (int j = 0; j < halfWidth; ++j)
//		{
//			divided[0][i][j] = board[i][j];
//		}
//	}
//	for (int i = 0; i < halfHeight; ++i)
//	{
//		for (int j = halfWidth; j < M; ++j)
//		{
//			divided[1][i][j - halfWidth] = board[i][j];
//		}
//	}
//	for (int i = halfHeight; i < N; ++i)
//	{
//		for (int j = halfWidth; j < M; ++j)
//		{
//			divided[2][i - halfHeight][j - halfWidth] = board[i][j];
//		}
//	}
//	for (int i = halfHeight; i < N; ++i)
//	{
//		for (int j = 0; j < halfWidth; ++j)
//		{
//			divided[3][i - halfHeight][j] = board[i][j];
//		}
//	}
//
//	//--------------------------------------------------
//	for (int i = 0; i < halfHeight; ++i)
//	{
//		for (int j = 0; j < halfWidth; ++j)
//		{
//			board[i][j] = divided[1][i][j];
//		}
//	}
//
//	for (int i = 0; i < halfHeight; ++i)
//	{
//		for (int j = 0; j < halfWidth; ++j)
//		{
//			board[i][j + halfWidth] = divided[2][i][j];
//		}
//	}
//
//	for (int i = 0; i < halfHeight; ++i)
//	{
//		for (int j = 0; j < halfWidth; ++j)
//		{
//			board[i + halfHeight][j + halfWidth] = divided[3][i][j];
//		}
//	}
//	for (int i = 0; i < halfHeight; ++i)
//	{
//		for (int j = 0; j < halfWidth; ++j)
//		{
//			board[i + halfHeight][j] = divided[0][i][j];
//		}
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int R;
//	cin >> N >> M >> R;
//	board = std::vector<std::vector<int>>(N, std::vector<int>(M));
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	for (int i = 0; i < R; ++i)
//	{
//		int num;
//		cin >> num;
//		oper.push(num);
//	}
//
//	while (oper.empty() == false)
//	{
//		int curOP = oper.front();
//		oper.pop();
//
//		switch (curOP)
//		{
//		case FLIPX: FlipX(); break;
//		case FLIPY: FlipY(); break;
//		case ROTATE_RIGHT: RotateRight(); break;
//		case ROTATE_LEFT: RotateLeft(); break;
//		case DIV_ROTATE_LEFT: DivideRotateLeft(); break;
//		case DIV_ROTATE_RIGHT: DivideRoateRight(); break;
//		default: break;
//		}
//	}
//
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			std::cout << board[i][j] << " ";
//		}
//		std::cout << "\n";
//	}
//}