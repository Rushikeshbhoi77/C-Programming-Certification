#include <stdio.h>

int main() {
    int n, i, x, c = 0;

    printf("Enter Size of Array: ");
    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++){
        printf("Enter Element %d: ", i + 1);
    scanf("%d", &a[i]);
    }

    printf("Enter Element To Search: ");
    scanf("%d", &x);

    printf("Enter Element TO Search: ");
    scanf("%d", &a[i]);

    for(i = 0; i<n; i++) {
        if(a[i] == x){
            printf("\nFound At Index %d i.e Element Number: %d\n", i, i+1);
            c++;
            break;
        }
    }
    if(c == 0){
        printf("\nElement Not Found\n");
    }
    return 0;
}
