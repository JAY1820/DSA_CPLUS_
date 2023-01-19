#include <iostream>
using namespace std;
int main()
{

    /*
    1) pattern
                      ---*
                      --**
                      -***
                      ****
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int space = n -i; space > 0; space--)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    */

/*2)
 */
#include <stdio.h>

    int main()
    {
        int n;
        printf("enter number of rows:");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            for (int space = 1; space <= n - i; space++)
            {
                printf(" ");
            }
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (int i = n; i >= 1; i--)
        {
            for (int space = 1; space <= n - i; space++)
            {
                printf(" ");
            }
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

        return 0;
    }

    return 1;
}
