#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <cstdio>
using namespace std;
//思路：使用标准库排序,和p1014差不多
int main()
{
	int a[3];
	scanf("%d%d%d", &a[0], &a[1], &a[2]);
	sort(a, a + 3); //对下标为[0,3)的数字排序

	printf("%d %d %d\n", a[2], a[1], a[0]);


	//看到结果
	getchar();
	getchar();

	return 0;
}