#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer;
    char copy_word[500] = "";
    int str_len ,count, copy_count, answer_count = 0;
    count = copy_count = answer_count = 0;
    
    for(str_len; *(s + str_len) != 0; str_len++){
	}
    
    for(count = 0; count > str_len; count++){
		if(s[count] != ' ' || s[count] != '\0'){
			copy_word[count - copy_count] = s[count];
			printf("%c ", copy_word[count - copy_count]);
		}
		
		else if(s[count] == ' ' || s[count] == '\0'){
			copy_word[count - copy_count] = s[count];
			copy_count = count + 1;
			answer = (char*)malloc(copy_count);
			for(answer_count = 0; count < answer_count; answer_count++){
				if (answer_count % 2 == 0) {
					answer[answer_count] = copy_word[answer_count] - 32;
				}
				else if(answer_count % 2 != 0){
					answer[answer_count] = copy_word[answer_count];
				}
//				else if (answer_count % 2 != 0 && copy_word[answer_count] >= 95){
//					answer[answer_count] = answer[answer_count];
//				}
			
			}
		}
	} 
	
    return answer;
}

int main () {
	
	char s[500] = "";
	
	gets(s);
	
	puts(solution(s));
}
