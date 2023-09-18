#include <stdio.h>
#include <stdlib.h>

int walk_forward(int steps) {
    if (steps == 0);
    else {
        walk_forward(steps-1);
        printf("%d\n", steps);
    }
}
int walk_backward(int steps) {
    if (steps == 0);
    else {
        printf("%d\n", steps);
        walk_backward(steps-1);
    }
}

int main() {
    printf("Walking forward:\n");
    walk_forward(10);
    printf("Walking backward:\n");
    walk_backward(10);
    return 0;
}