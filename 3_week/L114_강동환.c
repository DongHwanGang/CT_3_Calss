#include <stdio.h>
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* s) {
    int count, answer = 0;
    
    if(s[0] == '+' || s[0] == '-'){
    	for(count = 1; s[count] != '\0';count++){
    		answer = answer*10 + (s[count] - 48);
    	}
    	if(s[0] == '+'){
    		answer = +answer;
		}
		else
			answer = -answer;
	}
	
	else
		for(count = 0; s[count] != '\0';count++){
    		answer = answer*10 + (s[count] - 48);
    	}
    
    return answer;
}

int main (){
	char s[5] = "";
	
	gets(s);
	
	printf("%d", solution(s));
}
