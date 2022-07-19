#include <stdio.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer;
    int count, blank_count = 0;
    count = blank_count = 0; 
	
	for(count = 0; s[count] != '\0'; count++){
	}
	
	answer = (char*)malloc(count + 1);
	
    for(count = 0; s[count] != '\0'; count++){
		answer[count] = s[count];
		
		if(s[count - 1] == ' '){
			blank_count = count;
		}
		
		if(s[count] != ' '){
			if((count - blank_count) % 2 == 0){
				if(answer[count] >= 'a' && answer[count] <= 'z'){
					answer[count] = answer[count] - 32;
				}
			}
			
			else if((count - blank_count) % 2 != 0){
				if(answer[count] >= 'A' && answer[count] <= 'Z'){
					answer[count] = answer[count] + 32;
				}
			}
		}
	} 
	
	answer[count] = '\0';
	
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
