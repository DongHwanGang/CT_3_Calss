#include <stdio.h>
#include <stdlib.h>

char* solution(int num) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���
    char* answer; 
    
    if(num % 2 == 0){
	    answer = (char*)malloc(6);   
		answer = "Even";
       
    }
    else{
    	answer = (char*)malloc(5);  
		answer = "Odd";
	}
    return answer;
}

int main (){
	int num = 0;
	char* answer;
	
	scanf("%d", &num);
	
	answer= solution(num);
	puts(answer);
	free(answer);
}
