#include<stdio.h>
#include<string.h>
struct lopC
{
	char data[51];
	int cnt;
};
typedef struct lopC find;
find a[10001]; // mang luu
int k = 0;

int tn(char s[])
{
	for(int i = 0; i < strlen(s)/2; i++)
	{
		if(s[i] != s[strlen(s) - 1 - i]) return 0;
	}
	return 1;
}
int main()
{
	char s[101];
	while(scanf("%s ", s) != -1)
	{
		if(tn(s))
		{
			int index = -1;
			for(int i = 0; i < k; i++) // duyet tung phan tu trong mang
			{
				if(strcmp(s, a[i].data) == 0)
				{
					index = i; // neu so do chua co trong mang thi danh dau
					break;
				}	
			}
			if(index == -1)
			{
				find so_moi;
				strcpy(so_moi.data, s);
				so_moi.cnt = 1;
				a[k] = so_moi; // luu so va so lan xuat hien vao mang
				k++;
			}
			else 
			{
				a[index].cnt += 1;
			}
		}
	}
	for(int i = 0; i < k; i++)
	{
		printf("%s %d\n", a[i].data, a[i].cnt);
	}
}
