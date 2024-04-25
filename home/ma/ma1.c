#include <stdio.h>
#include <math.h>
int hople(char a[])
{
    if (a[0] - 'a' > 7 || a[0] - 'a' < 0)
        return 0;
    if (a[1] - '0' > 8 || a[1] - '0' < 0)
        return 0;
    return 1;
}
int main()
{
    char s[40][3];
    int a[8][8] = {0};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s", s[i]);
    int ok = 1, d = 1;
    a[s[0][0] - 'a'][s[0][1] - '0'] = 1;
    for (int i = 1; i < n; i++)
        if (hople(s[i]))
        {
            if (fabs((s[i][0] - s[i - 1][0]) * (s[i][1] - s[i - 1][1])) != 2)
            {
                ok = 0;
                break;
            }
            if (a[s[i][0] - 'a'][s[i][1] - '0'] == 0)
            {
                a[s[i][0] - 'a'][s[i][1] - '0'] = 1;
                d++;
            }
        }
        else
        {
            printf("-1");
            return 0;
        }
    if (ok)
        printf("%d\n", d);
    else
        printf("-1");
    return 0;
}