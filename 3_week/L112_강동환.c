#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer;
    char copy_word[500] = "";
    int count, copy_count, answer_count, blank_count = 0;
    count = copy_count = answer_count = blank_count = 0; 
	
	for(count = 0; s[count] != '\0'; count++){
	}
	
	answer = (char*)malloc(count + 1);
	
    for(count = 0; s[count] != '\0'; count++){
		if(s[count] >= ' '){
			copy_word[count - blank_count] = s[count];
//			printf("%c ", copy_word[count - blank_count]);
		}
	
		if(s[count] == ' ' || s[count + 1] == '\0'){
			for(copy_count = 0; copy_word[copy_count] != '\0'; copy_count++){				
				if(copy_count % 2 == 0 && copy_word[copy_count] >= 'Z'){
					answer[copy_count + blank_count] = copy_word[copy_count] - 32;
				}
				
				else if(copy_count % 2 != 0){
					answer[copy_count + blank_count] = copy_word[copy_count];
				}
				blank_count = count + 1;
				printf("%d ", copy_count);
				
			}
//			printf("%c ", answer[copy_count + blank_count]);
			
			for(copy_count = 0; copy_word[copy_count] != '\0'; copy_count++){
				copy_word[copy_count] = '\0'; 
			}
		}
		printf("%c ", answer[count]);
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
