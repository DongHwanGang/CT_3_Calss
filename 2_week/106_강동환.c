#include <stdio.h>

// arr_len�� �迭 arr�� �����Դϴ�.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    int count = 0;
    
    for(count = 0; count < arr_len; count++){
        answer += arr[count];
    }
    
    answer /= arr_len;
    
    return answer;
}
