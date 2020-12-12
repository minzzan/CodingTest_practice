#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) 
{
    vector<int> answer;

    int i, j, k;

    for (int g = 0; g < commands.size(); g++)
    {
        i = commands[g][0];
        j = commands[g][1];
        k = commands[g][2];

        vector<int> array_e;
        int m = 0;
        for (int l = i-1; l < j; l++)
        {
            //array_e[m] = array[l];
            array_e.push_back(array[l]);
            m++;
        }

        sort(array_e.begin(), array_e.end());

        answer.push_back(array_e[k - 1]);

        array_e.clear();
    }
    return answer;
}

int main()
{
    vector<int> sol;
    sol = solution({ 1,5,2,6,3,7,4 }, { {2,5,3},{4,4,1},{1,7,3} });

    for (int i = 0; i < 3; i++)
    {
        cout << sol[i] << endl;
    }

    return 0;
}
