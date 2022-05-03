#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// L, R, U, D
#include <iostream>
int DIR_X[4] = { -1, 1, 0, 0 };
int DIR_Y[4] = { 0, 0, 1, -1 };

class Path
{
public:
    int sx, sy;
    int ex, ey; 
    Path(int sx, int sy, int ex, int ey)
        : sx(sx), sy(sy), ex(ex), ey(ey) {}
     
    bool operator==(const Path& other)
    {
        if ((sx == other.sx && sy == other.sy) &&
            (ex == other.ex && ey == other.ey)) {
            return true;
        }
  
        if ((sx == other.ex && sy == other.ey) &&
            (ex == other.sx && ey == other.sy))
        {
            return true;
        }
        return false; 
    }
};
   
int solution(string dirs) {
    unordered_map<char, int> dir; 
      
    vector<Path> visited;

    dir['L'] = 0;
    dir['R'] = 1;
    dir['U'] = 2;
    dir['D'] = 3;

    int answer = 0;
    
    int curX = 5, curY = 5;
    int prevX, prevY; 

    for (unsigned int i = 0; i < dirs.length(); ++i) {  
        prevX = curX;
        prevY = curY;

        curX = max(min(curX + DIR_X[dir[dirs[i]]], 10), 0);
        curY = max(min(curY + DIR_Y[dir[dirs[i]]], 10), 0);
        
        Path curPath = Path(prevX, prevY, curX, curY);
        if (prevX == curX && prevY == curY) {
            continue;
        }
        if (visited.end() == std::find(visited.begin(), visited.end(), curPath))
        {
            ++answer;
            visited.push_back(curPath);
        }
    } 
    return answer;
}

int main()
{ 
    cout << solution("ULURRDLLU") << "\n";
    cout << solution("LULLLLLLU") << "\n";
    cout << solution("UDUDUD") << "\n";
    cout << solution("U") << "\n";
    cout << solution("RRRRRRRRRRRRRRRRRRRRRUUUUUUUUUUUUULU") << "\n";
    cout << solution("LLLLRLRLRLL") << "\n";
    cout << solution("UUUUDUDUDUUU") << "\n";
    
    return 0;
}