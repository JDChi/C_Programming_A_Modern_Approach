#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[5][5];
	int row_totals[5]= {0}, column_totals[5] = {0};
    int i, j;
	for(i = 0; i < 5; i ++){
		printf("Enter row %d: ", i + 1);
		for(j = 0; j < 5; j ++){
           scanf("%d", &a[i][j]);
           row_totals[i] = row_totals[i] + a[i][j];
           column_totals[j] = column_totals[j] + a[i][j];
		}
		
	}

    printf("Row totals: ");
    for(int i = 0; i < 5; i++){
    	printf("%d ", row_totals[i]);
    }
    printf("\n");
     printf("Column totals: ");
    for(int i = 0; i < 5; i++){
    	printf("%d ", column_totals[i]);
    }
    printf("\n");

	return 0;
}