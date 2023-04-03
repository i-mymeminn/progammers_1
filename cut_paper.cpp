#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    int answer = 0;
    if (M == 1 && N == 1)  answer = 0;
    else if (M == 1 || N == 1) answer = (M > N) ? M - 1 : N - 1;
    else if (M <= N) {
        answer = M - 1 + M * (N - 1);
    }
    else {
        answer = N - 1 + N * (M - 1);
    }

    return answer;
}