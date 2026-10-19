#include<stdio.h>
#include <math.h>


void bubble(int* s, int r);
void swap(int* a, int* b);
void min_distance(int* s, int r);
void sum(int* s, int r, int min);

int main() {

    int num;    //number of test case
    int r;      //number of relatives
    int i;

    scanf("%d", &num);

    while (num--) {
        int s[500] = { 0 };   //the street number
        scanf("%d", &r);
        for (i = 0; i < r; i++) {
            scanf("%d", &s[i]);
        }
        bubble(s, r);
    }

    return 0;
}

void bubble(int* s, int r) {

    int i, j;

    for (i = 0; i < r - 1; i++) {
        for (j = 0; j < r - 1 - i; j++) {
            if (s[j] > s[j + 1]) {
                swap(&s[j], &s[j + 1]);
            }
        }
    }

    min_distance(s, r); //find median
}

void swap(int* a, int* b) {

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

//void min_distance(int* s, int r) { //簡化版
//    sum(s, r, s[(r / 2)]);
//}

void min_distance(int* s, int r) {  //詳細版

    int min_d = 0;

    if (r % 2 == 0) {
        min_d = (s[(r / 2) - 1] + s[(r / 2)]) / 2;
    }
    else {
        min_d = s[(r / 2)];
    }

    sum(s, r, min_d);
}

void sum(int* s, int r, int min) {

    int i;
    int sum = 0;

    for (i = 0; i < r; i++) {
        sum = sum + abs(min - s[i]);
    }

    printf("%d\n", sum);
}