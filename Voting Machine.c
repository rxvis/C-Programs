#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, i, k, l, m, n, o, p, r, s, t, u;
    i = 2356;
    b = 0;
    c = 0;
    d = 0;
    o = 0;
    l = 0;
    m = 3;
    u = 0;

    printf("Welcome to VOTING MACHINE\n");

    while (l < m) {
        printf("\nEnter MODERATOR PIN to begin: ");
        scanf("%d", &k);

        if (k == i) {
            printf("Successful login!\n\n");

            while (1) {
                printf("1. Change MODERATOR PIN\n2. Start VOTING MACHINE\nENTER YOUR OPTION: ");
                scanf("%d", &n);

                if (n == 1) {
                    printf("\nEnter current moderator password: ");
                    scanf("%d", &r);

                    if (r == i) {
                        printf("\nEnter new password: ");
                        scanf("%d", &s);
                        printf("Confirm new password: ");
                        scanf("%d", &t);

                        if (t == s) {
                            i = s;
                            printf("\nPassword successfully changed!\n");
                        } else {
                            printf("\nPassword change failed! Passwords do not match.\n");
                        }
                    } else {
                        printf("Incorrect current password.\n");
                    }
                } else if (n == 2) {
                    printf("\nEnter MODERATOR PIN to start VOTING MACHINE: ");
                    scanf("%d", &k);

                    if (k == i) {
                        printf("\nEnter the no. of participants: ");
                        scanf("%d", &a);
                        
                        printf("\n\n========================\nVoting Machine STARTED\n========================\n");

                        e = 0;
                        while (e < a) {
                            e++;
                            printf("\nEnter your age: ");
                            scanf("%d", &f);

                            if (f >= 18) {
                                printf("You are eligible to vote\n\n");
                                printf("1. Alex\n2. Joe\n3. Amar\n4. NOTA\n");
                                printf("Enter for which participant you are voting: ");
                                scanf("%d", &g);

                                if (g == 1)
                                    b++;
                                else if (g == 2)
                                    c++;
                                else if (g == 3)
                                    d++;
                                else if (g == 4)
                                    o++;
                                else
                                    printf("Invalid input\n");
                            } else {
                                printf("You are not eligible to vote\n");
                            }
                        }

                        int q = 0;
                        while (q < m) {
                            printf("\nEnter MODERATOR PIN to see the result: ");
                            scanf("%d", &p);

                            if (p == i) {
                                printf("PASSWORD MATCHED\n\n");
                                printf("Total no. of voters = %d\n", a);
                                printf("Alex = %d\n", b);
                                printf("Joe = %d\n", c);
                                printf("Amar = %d\n", d);
                                printf("NOTA = %d\n", o);

                                if (b > c && b > d)
                                    printf("Alex won!\n");
                                else if (c > b && c > d)
                                    printf("Joe won!\n");
                                else if (d > b && d > c)
                                    printf("Amar won!\n");
                                else
                                    printf("It's a tie or no one won!\n");

                                break;
                            } else {
                                q++;
                                if (q < m) {
                                    printf("\nInvalid password. (%d attempts left)\n", m - q);
                                } else {
                                    printf("\nToo many invalid attempts. Exiting results...\n");
                                }
                            }
                        }

                        break;
                    } else {
                        printf("Incorrect moderator PIN. Please try again.\n");
                    }
                } else {
                    printf("Invalid option. Please try again.\n");
                }
            }
            break;
        } else {
            l++;
            if (l < m) {
                printf("\nInvalid password. (%d attempts left)\n", m - l);
            } else {
                printf("\nToo many invalid attempts. Exiting...\n");
                return 0;
            }
        }
    }

    return 0;
}

