#include <stdio.h>

//
// Created by Sabi on 2022-03-01.
//

int a[1001][1001]; //1000 x 1000 짜리 배열 생성
int n, m; //n는 전체 node(vertex), m은 전체 edge의 갯수

int main(void) {
    scanf("%d %d", &n, &m); //전체 node, edge 갯수 입력
    for (int i = 0; i < m; i++) { //간선(edge)의 갯수만큼 반복
        int x, y; //서로 연결된 node 정의
        scanf("%d %d", &x, &y);
        a[x][y] = 1;
        a[y][x] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    system("pause");
}