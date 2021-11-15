#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VALUE 10

// direction: 0: i - 1; 1: j+1; 2: i+1; 3: j-1
int main(int argc, char const *argv[])
{
	char chars[MAX_VALUE][MAX_VALUE];
	int i = 0, j = 0, direction;

	// 初始化二维数组
	for (i = 0; i < MAX_VALUE; i++) {
		for (j = 0; j < MAX_VALUE; j++) {
			chars[i][j] = '.';
		}
	}
	i = 0;
	j = 0;
	int currentChar = 65;
	chars[0][0] = currentChar;
	currentChar++;

	srand((unsigned) time(NULL));

	while (currentChar < 91) {
		// 判断是否 4 个方向被堵住
		if (chars[i - 1][j] != '.' && chars[i][j + 1] != '.' && chars[i + 1][j] != '.' && chars[i][j - 1] != '.') {
			break;
		}

		direction = rand() % 4;

		// 判断是否超出边界
		if ((direction == 0 && i - 1 < 0)
		        || (direction == 1 && j + 1 >= MAX_VALUE)
		        || (direction == 2 && i + 1 >= MAX_VALUE)
		        || (direction == 3 && j - 1 < 0)) {
			continue;
		}

		if (direction == 0) {
			if (chars[i - 1][j] != '.') {
				continue;
			}
			i = i - 1;
		} else if (direction == 1) {
			if (chars[i][j + 1] != '.') {
				continue;
			}
			j = j + 1;
		} else if (direction == 2) {
			if (chars[i + 1][j] != '.') {
				continue;
			}
			i = i + 1;
		} else if (direction == 3) {
			if (chars[i][j - 1] != '.') {
				continue;
			}
			j = j - 1;
		}
		chars[i][j] = currentChar;
		currentChar++;
	}

	for (i = 0; i < MAX_VALUE; i++) {
		for (j = 0; j < MAX_VALUE; j++) {
			if (j % (MAX_VALUE) == 0) {
				printf("\n");
			}
			printf("%c ", chars[i][j]);

		}
	}
	printf("\n");

	return 0;
}