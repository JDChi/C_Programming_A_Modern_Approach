#include <stdio.h>

int main(int argc, char const *argv[])
{
	int array[16];
	printf("Enter the numbers from 1 to 16 in any order: ");
	for(int i = 0; i < 16; i++){
		scanf("%d", &array[i]);
	}

	for(int i = 0; i < 16; i++){
		printf("%2d\t", array[i]);
		if(i == 3 || i == 7 || i == 11 || i == 15){
			printf("\n");
		}
	}

    int row_sum1 = array[0]+array[1]+array[2]+array[3];
    int row_sum2 = array[4]+array[5]+array[6]+array[7];
    int row_sum3 = array[8]+array[9]+array[10]+array[11];
    int row_sum4 = array[12]+array[13]+array[14]+array[15];
	printf("Row sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3, row_sum4);

	int column_sum1 = array[0]+array[4]+array[8]+array[12];
	int column_sum2 = array[1]+array[5]+array[9]+array[13];
	int column_sum3 = array[2]+array[6]+array[10]+array[14];
	int column_sum4 = array[3]+array[7]+array[11]+array[15];
	printf("Column sums: %d %d %d %d\n", column_sum1, column_sum2, column_sum3, column_sum4);

	int diagonal_sum1 =  array[0]+array[5]+array[10]+array[15];
	int diagonal_sum2 =  array[12]+array[9]+array[6]+array[3];
    printf("Dialgonal sums: %d %d\n", diagonal_sum1, diagonal_sum2);
	
	return 0;
}