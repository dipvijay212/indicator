#include<stdio.h>
#include<conio.h>

int cube(int *ptr);

void main() {
    int row, col,i,j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    int (*ptr)[col];

    ptr=arr;

    printf("Enter %d elements:\n",row * col);
    for (i = 0; i < row; i++) {
        for ( j = 0; j < col; j++) {
            scanf("%d", &ptr[i][j]);
        }
    }
    printf("given values are:\n");
    for (i = 0; i < row; i++) {
        for ( j = 0; j < col; j++) {
            printf("a[%d][%d]=%d \n",i,j,ptr[i][j]);
        }
    }

    printf("Cubes of array elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ",cube(&ptr[i][j]));
        }
        printf("\n");
    }

   getch();
}
int cube(int *ptr) 
{
	return (*ptr) * (*ptr) * (*ptr);
}
