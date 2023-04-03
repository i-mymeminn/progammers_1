/*#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int dif_num;
    if (common[1] - common[0] == common[2] - common[1]) {
        dif_num = common[1] - common[0];
        answer = common.back() + dif_num;
    }
    else {
        dif_num = common[1] / common[0];
        answer = common.back() * dif_num;

    }
    return answer;
}*/