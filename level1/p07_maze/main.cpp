#include<bits/stdc++.h>
using namespace std;
char direction;
int x=0,y=0;
int maze[10][10]={
    1,1,0,0,0,0,0,0,0,0,
    0,1,0,0,0,1,1,1,1,0,
    0,1,0,0,0,0,0,0,1,0,
    0,1,0,1,1,1,0,0,1,0,
    0,1,1,1,0,1,1,1,1,0,
    0,1,0,0,0,1,0,1,0,0,
    0,0,1,1,1,1,0,1,0,0,
    0,0,1,0,0,0,0,1,0,0,
    0,0,1,1,1,1,0,0,0,0,
    0,0,0,0,0,1,0,0,0,0
};
void print_maze_role() {
    for (int i=0;i<10;i++) {
        for (int j=0;j<10;j++) {
            if (!maze[i][j]) {
                printf("*");
            }
            if(maze[i][j]&&!(i==x&&j==y)){
                printf(" ");
            }
            if (i==x&&j==y) {
                printf("@");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void control_role(int& x,int& y) {
    scanf("%c",&direction);
    if (direction=='w'&&x-1>=0&&maze[x-1][y]) {
        x-=1;
    }
    if (direction=='s'&&x+1<=9&&maze[x+1][y]) {
        x+=1;
    }
    if (direction=='a'&&y-1>=0&&maze[x][y-1]) {
        y-=1;
    }
    if (direction=='d'&&y+1<=9&&maze[x][y+1]) {
        y+=1;
    }
}
int main() {
    for (;;) {
        print_maze_role();
        control_role(x,y);
        if (x==9&&y==5) {
            system("cls");
            print_maze_role();
            printf("You win!");
            break;
        }
        system("cls");
    }
}