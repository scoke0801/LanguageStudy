#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

struct Point
{
    int X, Y;
};

double CalculateArea(const std::vector<Point>& vertices)
{
    int n = vertices.size();
    double area = 0.0;
        
    for (int i = 0; i < n; i++)
    {
        int j =( i+ 1) %n;

        area += vertices[i].X * vertices[j].Y;
        area -= vertices[j].X * vertices[i].Y;
    
    }
        
    return std::abs(area) * 0.5f;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    cin >> N;

    vector<Point> points(N);
    for (int i = 0; i < N; ++i)
    {
        int X, Y;
        cin >> points[i].X >> points[i].Y;
    }
    
    std::cout << std::fixed << std::setprecision(1) << CalculateArea(points) << "\n";
}