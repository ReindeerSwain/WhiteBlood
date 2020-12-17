#include <stdio.h>


void SR(int c, int a[100][100], int e, int f) {
    for (int i1 = 0;i1 < c;i1++) {
        int  t = a[e - 1][i1];
        a[e - 1][i1] = a[f - 1][i1];
        a[f - 1][i1] = t;
    }
}
void SC(int r, int a[100][100], int e, int f) {
    for (int i1 = 0;i1 < r;i1++) {
        int t = a[i1][e - 1];
        a[i1][e - 1] = a[i1][f - 1];
        a[i1][f - 1] = t;
    }
}
void IC(int r, int c, int a[100][100],int T) {
    for (int i2 = 0;i2 < (c - T + 1);i2++) {
        for (int i1 = 0;i1 < r;i1++) {
            a[i1][c - i2] = a[i1][c - i2 - 1];
        }
    }
    for (int i1 = 0;i1 < r;i1++) {
        a[i1][T - 1] = 0;
    }
}

void IR(int c, int r, int a[100][100],  int T) {
    for (int i2 = 0;i2 < (r - T + 1);i2++) {
        for (int i1 = 0;i1 < c;i1++) {
            a[r - i2][i1] = a[r - i2 - 1][i1];
        }
    }
    for (int i1 = 0;i1 < c;i1++) {
        a[T - 1][i1] = 0;
    }

}
void DC(int r, int c, int a[100][100], int m) {

    for (;(m - 1) < r;m++) {
        for (int i1 = 0;i1 < r;i1++) {
            a[i1][m - 1] = a[i1][m];
        }
    }
}
void DR(int c, int r, int a[100][100], int m) {
    for (;(m - 1) < c;m++) {
        for (int i1 = 0;i1 < c;i1++) {
            a[m - 1][i1] = a[m][i1];
        }
    }
}


int main() {
    int a[100][100];
    char x[3];
    int r, c;

    scanf("%d %d", &r, &c);
    for (int i = 0;i < r;i++) {
        for (int j = 0;j < c;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int n;
    scanf("%d", &n);
    for (int k = 0;k < n;k++) {
        scanf("%s", &x);
        if (x[0] == 'S' && x[1] == 'R') {
            int  e, f;
            scanf("%d %d", &e, &f);
            SR(c, a, e, f);
        }

        if (x[0] == 'S' && x[1] == 'C') {
            int  e, f;
            scanf("%d %d", &e, &f);
            SC(r, a,  e, f);
        }

        if (x[0] == 'I' && x[1] == 'R') {
            int  T;
            scanf("%d", &T);
            IR(c, r, a,  T);
            r = r + 1;
        }

        if (x[0] == 'I' && x[1] == 'C') {
            int  T;
            scanf("%d", &T);
            IC(r, c, a,  T);
            c = c + 1;
        }

        if (x[0] == 'D' && x[1] == 'C') {
            int  m;
            scanf("%d", &m);
            DC(r, c, a,  m);
            c = c - 1;
        }

        if (x[0] == 'D' && x[1] == 'R') {
            int  m;
            scanf("%d", &m);
            DR(c, r, a,  m);
            r = r - 1;
        }


    }
    for (int i = 0;i < r;i++) {
        for (int j = 0;j < c;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
