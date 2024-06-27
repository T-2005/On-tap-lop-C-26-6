#include<stdio.h>
#include<string.h>
struct pokemon
{
	char name[51];
	int cnt;
};
typedef struct pokemon th;
th a[10001];
int t = 0;
int main()
{
	int n;
	scanf("%d",&n);
	int max = 0;
	int sum = 0;
	while(n--)
	{
		int k, m;
		scanf("\n%[^\n]s", a[t].name);
		scanf("%d %d", &k, &m);
		int r = m - k;
		if(r >= 0)
		{
			a[t].cnt = 1;
			
		}
		
		while(r  + 2 >= k)
		{
			a[t].cnt += 1;
			m = m - k + 2;
			r = m - k;
		
		}
			sum += a[t].cnt;
		if(max < a[t].cnt) max = a[t].cnt;
		t++;
	}
	printf("%d\n", sum);
	for(int i = 0; i < t; i++)
	{
		if(a[i].cnt == max)
		{
			printf("%s", a[i].name);
			break;
		}
	}
}
