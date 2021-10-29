#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, n;
	char ch;

	printf("This program prints a table of squares: \n");
	printf("Enter number of entries in talbe: ");
	scanf("%d", &n);

    // 用于消费掉我们输入 n 时带的换行符，不然下面打印到第一个 24 的时候，getchar() 不需要我们输入，直接拿这里的换行符
    getchar();
	for(i = 1; i <= n; i++){
		printf("%10d%10d\n", i, i * i);
		if(i % 24 == 0){
			printf("Press Enter to continue... ");
			if(getchar() == '\n'){
				continue;
			}
		}
	}

	return 0;
}