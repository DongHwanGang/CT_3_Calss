#include <stdio.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer;
    int count;
    
    for(count = 0; s[count] != '\0'; count++){
	}
	
	answer = (char*)malloc(3 - (count % 2));
    answer[2 - (count % 2)] = '\0';
    
    if(count % 2 != 0){
		answer[0] = s[count / 2];
	} 
	
	else{
		answer[0] = s[count / 2 - 1];
		answer[1] = s[count / 2];
	}
			 
    return answer;
}

int main () {
	char s[100] = "";
	char* answer;
	
	gets(s);
	answer = solution(s);
	puts(answer);
	free(answer);
}
