/*#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for (int i = 0; i < babbling.size(); i++)
    {
        if (babbling[i].size() < 2)
            continue;
        int std = 0;
        while (std < babbling[i].size()) {
            if (babbling[i].substr(std, 2) == "ye")    std += 2;
            else if (babbling[i].substr(std, 2) == "ma")    std += 2;
            else if (babbling[i].substr(std, 3) == "aya")    std += 3;
            else if (babbling[i].substr(std, 3) == "woo")    std += 3;
            else break;
        }
        if (std == babbling[i].size())    answer++;
    }
    return answer;
}*/