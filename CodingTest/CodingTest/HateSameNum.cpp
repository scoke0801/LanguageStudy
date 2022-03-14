#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer; 
     
    answer.push_back(arr[0]);
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] != arr[i -1]) { 
            answer.push_back(arr[i]); 
        }
    } 

    for (size_t i = 0; i < answer.size(); ++i) { 
        cout << answer[i] << " ";
    }
    cout << "\n";

    return answer;
} 

int main() {
    solution({ 1,1,3,3,0,1,1 });
    solution({ 4,4,4,3,3 });
}