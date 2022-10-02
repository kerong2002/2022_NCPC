
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int run,i,j;
    char text1[9999]={'\0'};
    char text2[9999]={'\0'};
    scanf("%d",&run);
    while(run--){
        scanf("%s%s",text1,text2);
        int x = strlen(text1) + 1;
        int y = strlen(text2) + 1;
        int** matrix = malloc(y * sizeof(int*));
        for (i = 0; i < y; i++) {
            matrix[i] = malloc(x * sizeof(int));
            matrix[i][0] = 0;
        }
        for (i = 0; i < x; i++) {
            matrix[0][i] = 0;
        }
        for (i = 1; i < y; i++){
            for (j = 1; j < x; j++){
                if (text1[j - 1] == text2[i - 1]){
                    matrix[i][j] = matrix[i - 1][j - 1] + 1;
                } else if (matrix[i - 1][j] >= matrix[i][j - 1]){
                    matrix[i][j] = matrix[i - 1][j];
                } else{
                    matrix[i][j] = matrix[i][j - 1];
                }
            }
        }
        printf("%d\n",matrix[y - 1][x - 1]);
    }
    return 0;
}
