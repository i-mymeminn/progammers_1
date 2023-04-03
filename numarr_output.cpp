/*#include <string>
#include <vector>

using namespace std;
bool check(const vector<int> v, int tot) {
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
        cnt += v[i];
    if (tot == cnt)    return true;
    return false;
}

vector<int> solution(int num, int total) {
    vector<int> answer;
    int mid_num;
    mid_num = total / num;
    answer.assign(num, mid_num);
    if (num % 2 == 0) {   //num/2 -1만큼연산 두번
        for (int i = 1; i <= num / 2; i++)
        {
            answer[num / 2 - i] -= i;
            answer[num / 2 + 1 + i] += i;
        }
        if (!check(answer, total)) {
            for (int i = 1; i <= num / 2; i++)
            {
                answer[num / 2 - 1 - i] -= i;
                answer[num / 2 + i] += i;
            }
        }
    }
    else {       //num홀수

        for (int i = 0; i <= num / 2; i++)
        {
            answer[num / 2 - i] -= i;
            answer[num / 2 + i] += i;
        }
    }
    return answer;
}