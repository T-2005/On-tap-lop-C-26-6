#include<stdio.h>
int max(int a, int b)
{
	if(a > b) return a;
	else return b;
}
int main()
{
	int t;
	scanf("%d", &t);
	int k = 0;
	while(t--)
	{
		k++;
		int n; 
		scanf("%d", &n);
		int a[n + 1], l[101];
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		printf("Test %d:\n", k);
		int mx = 0;
		l[0] = 1; // tao mang dem 
		for(int i = 1; i < n; i++)
		{
			if(a[i] > a[i - 1]) l[i] = l[i - 1] + 1; // neu so dang sau lon hon so dang truoc thi tang mang dem len 1 don vi
			
			else l[i] = 1; // neu ko lon hon thi bat dau dem lai day tiep theo
			mx = max(mx, l[i]);
		}
		printf("%d\n", mx);
		for(int i = 0; i < n; i++)
		{
			if(l[i] == mx)
			{
				for(int j = i - mx + 1; j <= i; j++)
				{
					printf("%d ", a[j]);
				}
				printf("\n");
			}
		}
	}
}
