#include <stdio.h>
//圈圈叉叉
int main(){
    int array[3][3];
    for (int i=0; i<3; i++) {
        scanf("%d %d %d", &array[i][0], &array[i][1], &array[i][2]);
    }
    if (array[0][0] == 1 && array[0][1] == 1 && array[0][2] == 1) {
        printf("True\n");
    }
    else if (array[1][0] == 1 && array[1][1] == 1 && array[1][2] == 1) {
        printf("True\n");
    }
    else if (array[2][0] == 1 && array[2][1] == 1 && array[2][2] == 1) {
        printf("True\n");
    }
    else if (array[0][0] == 1 && array[1][1] == 1 && array[2][2] == 1) {
        printf("True\n");
    }
    else if (array[0][2] == 1 && array[1][1] == 1 && array[2][0] == 1) {
        printf("True\n");
    }
    else if (array[0][0] == 1 && array[1][0] == 1 && array[2][0] == 1) {
        printf("True\n");
    }
    else if (array[0][1] == 1 && array[1][1] == 1 && array[2][1] == 1) {
        printf("True\n");
    }
    else if (array[0][2] == 1 && array[1][2] == 1 && array[2][2] == 1) {
        printf("True\n");
    }
    else if (array[0][0] == 0 && array[0][1] == 0 && array[0][2] == 0) {
        printf("True\n");
    }
    else if (array[1][0] == 0 && array[1][1] == 0 && array[1][2] == 0) {
        printf("True\n");
    }
    else if (array[2][0] == 0 && array[2][1] == 0 && array[2][2] == 0) {
        printf("True\n");
    }
    else if (array[0][0] == 0 && array[1][1] == 0 && array[2][2] == 0) {
        printf("True\n");
    }
    else if (array[0][2] == 0 && array[1][1] == 0 && array[2][0] == 0) {
        printf("True\n");
    }
    else if (array[0][0] == 0 && array[1][0] == 0 && array[2][0] == 0) {
        printf("True\n");
    }
    else if (array[0][1] == 0 && array[1][1] == 0 && array[2][1] == 0) {
        printf("True\n");
    }
    else if (array[0][2] == 0 && array[1][2] == 0 && array[2][2] == 0) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }
}
