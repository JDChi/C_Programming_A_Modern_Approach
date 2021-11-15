#include <stdio.h>

int main(int argc, char const *argv[])
{
	int size, current_row = 0, current_col = 0, number = 1, temp_row = 0, temp_col = 0;
	int arrays[99][99];
	for(int i = 0; i < 99; i ++){
		for(int j = 0; j < 99; j++){
			arrays[i][j] = -1;
		}
	}
	printf("Enter size of magic square: ");
	scanf("%d", &size);


	if(size % 2 != 0){
		int center = size / 2;
		arrays[0][center] = 1;
		current_col = center;
		while(number <= (size * size)){
			temp_row = current_row - 1;
			temp_col = current_col + 1;
			if(temp_row == -1){
				temp_row = size - 1;
			}
			if(temp_col == size){
				temp_col = 0;
			}

			if(arrays[temp_row][temp_col] != -1){
				temp_row = current_row + 1;
				temp_col = current_col;
			}

			current_row = temp_row;
			current_col = temp_col;
			number++;
			arrays[current_row][current_col] = number;
		}
	}

	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			printf("%d\t", arrays[i][j]);
			if( j != 0 && j % (size - 1) == 0){
				printf("\n");
			}
		}
	}
	return 0;
}