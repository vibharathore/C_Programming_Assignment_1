/* ============================================================================
 * MODULE 7: NESTED-LOOP AND PATTERN-PRINTING QUESTIONS
 * ============================================================================ */


/* ----------------------------------------------------------------------------
 * Question 1: Print a Solid Square
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 2: Print a Right-Angled Triangle
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 3: Print an Inverted Triangle
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 4: Print a Number Triangle
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d%s", j, (j == i) ? "" : " ");
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 5: Print a Repeated-Number Triangle
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d%s", i, (j == i) ? "" : " ");
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 6: Print a Consecutive-Number Triangle
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d%s", count++, (j == i) ? "" : " ");
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 7: Print a Right-Aligned Star Triangle
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 8: Print a Centered Pyramid
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 9: Print an Inverted Centered Pyramid
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= i - 1; s++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 10: Print a Hollow Square
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 11: Print a Hollow Right-Angled Triangle
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 12: Print a Multiplication Table Grid
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d%s", i * j, (j == n) ? "" : " ");
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 13: Print a Checkerboard
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%c", ((i + j) % 2 == 0) ? 'X' : 'O');
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 14: Print Floyd's Triangle
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d%s", count++, (j == i) ? "" : " ");
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 15: Print a Butterfly Pattern
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int half = (n + 1) / 2;

    for (int i = 1; i <= half; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int s = 1; s <= 2 * (half - i); s++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = half - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int s = 1; s <= 2 * (half - i); s++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/* ----------------------------------------------------------------------------
 * Question 16: Print a Diamond Pattern
 * ---------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}