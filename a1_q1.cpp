#include <iostream>

int main() {
int n;

printf("Enter number of rows: ");
scanf("%d", &n);

for (int row = 0; row < n; row++) {
    for (int column = 0; column < n; column++) {
        if (row == 0 || row == n - 1 || column == n - 1 - row) {
            printf("* ");
        }
        else {
            printf("  ");
        }
    }
    printf("\n");
}
return 0;
}
