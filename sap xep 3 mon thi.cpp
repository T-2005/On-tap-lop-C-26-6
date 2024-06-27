#include<stdio.h>
#include<string.h>
struct mon
{
	char name[51];
	char id[51];
	char form[51];
};
int main()
{
	struct mon a[3];
	for(int i = 0; i < 3; i++)
	{
		scanf("\n%[^\n]s", a[i].id);
		scanf("\n%[^\n]s", a[i].name);
		scanf("\n%[^\n]s", a[i].form);
	}
	for(int i = 0; i < 3; i++)
	{
		for(int j = i + 1; j < 3; j++)
		{
			
			if(strcmp(a[i].name, a[j].name) > 0)
			{
				struct mon t;
				t = a[i];
				a[i] = a[j];
				a[j] = t;
//				
			}
		}
	 }
	 for(int i = 0; i < 3; i++)
	 {
	 	printf("%s %s %s\n", a[i].id, a[i].name, a[i].form);
	  } 
 } 
