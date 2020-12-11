#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


bool solution(vector<string> phone_book) 
{
    bool answer=true;

    std::sort(phone_book.begin(), phone_book.end());

    for (int i = 0; i < phone_book.size()-1; i++)
    {
        if (phone_book[i] == phone_book[i + 1].substr(0, phone_book[i].size()))
        {
            return false;
        }
    }
    return answer;
}

int main()
{
    bool answer;
    answer = solution({ "119", "97674223", "1195524421" });
    cout << answer << endl;
    return 0;
}
