#include<stdio.h>
#include<string.h>
int main()
{
	char s[1001];
	gets(s);
	for(int i = 0; i < strlen(s); i += 2)
	{
		int t;
		if(strlen(s) % 2 == 0)
		 t = (s[i] - '0') * 10 + (s[i + 1] - '0');
		else 
		 {
		 	if(i == strlen(s) - 1) break; 
		 	t = (s[i] - '0') * 10 + (s[i + 1] - '0');
			 
		 }
		printf("%d ", t);
	}
}
