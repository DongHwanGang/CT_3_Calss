#include <stdio.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int count, low_count = 0;
    char tep_word;
	char* answer;
	
	for(count = 0; s[count] != '\0'; count++){
	}
	
	answer = (char*)malloc(count + 1);
	answer[count] = '\0';
	
	for(count = 0; s[count] != '\0'; count++){
		answer[count] = s[count];	
	}
	
	for(low_count = 0; answer[low_count] != '\0'; low_count++){
		for(count = 0; answer[count + 1] != '\0'; count++){
			if(answer[count] < answer[count + 1]){
				tep_word = answer[count];
				answer[count] = answer[count + 1];
				answer[count + 1] = tep_word;
			}
		}
	}
	
    return answer;
}

int main () {
	char s[500] = "";
	char* answer;
	
	gets(s);
	answer = solution(s);
	puts(answer);
	free(answer);
}
