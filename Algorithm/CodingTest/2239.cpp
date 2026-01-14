#include <iostream>
using namespace std;

int board[9][9];

bool isValid(int r, int c, int num)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[r][i] == num) return false;
    }
    
    for (int i = 0; i < 9; i++)
    {
        if (board[i][c] == num) return false;
    }
    
    int boxR = (r / 3) * 3;
    int boxC = (c / 3) * 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[boxR + i][boxC + j] == num) return false;
        }
    }
    
    return true;
}

bool solve()
{
    for (int r = 0; r < 9; r++)
    {
        for (int c = 0; c < 9; c++)
        {
            if (board[r][c] == 0)
            {
                for (int num = 1; num <= 9; num++)
                {
                    if (isValid(r, c, num))
                    {
                        board[r][c] = num;
                        
                        if (solve()) return true;
                        
                        board[r][c] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (auto& i : board)
    {
        std::string str;
        cin >> str;
        for (int j = 0; j < 9; ++j)
        {
            i[j] = str[j] - '0';
        }
    }
    
    solve();
    
    for (auto& i : board)
    {
        for (int j : i)
        {
            cout << j;
        }
        cout << "\n";
    }
    
    return 0;
}