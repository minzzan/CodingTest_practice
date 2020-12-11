#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    std::sort(participant.begin(), participant.end()); 
    std::sort(completion.begin(), completion.end()); // 각각 string을 정렬해준다.

    for (int i = 0; i < participant.size() - 1; i++) //무조건 participant보다 completion이 1 작으므로 같은 수만큼 반복문을 돌려줌
    { 
        if (participant[i] != completion[i]) //만약 이름이 일치하지 않으면
        {  
            return participant[i]; //참가자 이름을 반환함
        }
    }

    return participant[participant.size() - 1]; //반복문을 다 돌고 남은 1명의 참가자는 일치되는 완주자 이름을 발견하지 못했기 때문에 완주X -> 반환  
}

int main()
{
    vector<string> solname;
    solname.push_back(solution({ "marina", "josipa", "nikola", "vinko", "filipa" }, { "josipa", "filipa", "marina", "nikola" }));
    cout << solname[0] << endl;
    return 0;
}
