#include <stdio.h>
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* s) {
    int count, answer = 0;
    
	for(count = 0; s[count] != '\0';count++){
		if('0' <= s[count] && '9' >= s[count]){
			answer = answer*10 + (s[count] - '0');
		}
	}
	
	if(s[0] == '+'){
		answer = +answer;
	}
	
	else if(s[0] == '-'){
		answer = -answer;
	}
	
    return answer;
}

int main (){
	char s[5] = "";
	
	gets(s);
	
	printf("%d", solution(s));
}
