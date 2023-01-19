#include <iostream>
using namespace std;

int main()
{

    /*
    cout << "11) pattern 11 question\n";
               A A A
               A A A
               A A A
    */

    /*

        int n;
        cin >> n;
        int row = 1;

        while (row <= n)
        {
            int col = 1; // give column value
            while (col <= n)
            {
                char ch = 'A' + row - 1;
                cout << ch << " ";
                col++;
            }
            cout << endl; // go to next line
            row = row + 1;
        }
    */

    // cout << "12) pattern 12 question\n";

    /*
        int n;
        cin >> n;
        int row = 1;

        while (row <= n)
        {
            int col = 1; // give column value
            while (col <= n)
            {
                char ch = 'A' + col - 1;
                cout << ch << " ";
                col++;
            }
            cout << endl; // go to next line
            row = row + 1;
        }
    */

    /*
    cout << "13) pattern 13 question\n";
                   A B C
                   D E F
                   G H I
        */
    /*
        int n;
        char count = 'A';
        cin >> n;
        int i = 1;

        while (i <= n)
        {
            int j = 1; // give column value
            while (j <= n)
            {

                cout << count << " ";
                count++; // increse the value
                j = j + 1;
            }
            cout << endl; // go to next line
            i = i + 1;
        }
    */

    /*
        cout << "14) pattern 14 question\n";
                   A B C
                   B C D
                   C D E

            int n;
            cin >> n;
            int row = 1;

            while (row <= n)
            {
                int col = 1; // give column value
                while (col <= n)
                {
                    char ch = 'A' + col + row - 2;
                    cout << ch << " ";
                    col++;
                }
                cout << endl; // go to next line
                row = row + 1;
            }

    */

    /*
    A
    B B
    C C C

    cout << "15) pattern 15\n";

            int n;
            cin >> n;
            int row = 1;

            while (row <= n)
            {
                int col = 1; // give column value
                while (col <= row)
                {
                    char ch = 'A'+ row -1;
                    cout <<ch<<" ";
                    col++;
                }
                cout<< endl; // go to next line
                row = row + 1;
            }

    */

    /*
    cout << "16) pattern 16 question\n";
                   A
                   B C
                   D E F
                   G H I J
    int n;
        char count = 'A';
        cin >> n;
        int row = 1;

        while (row <= n)
        {
            int col = 1; // give column value
            while (col <= row)
            {

                cout << count << " ";
                count++; // increse the value
                col++;
            }

            cout << endl; // go to next line
            row++;
        }
        */

    /*
               A
               B C
               C D E
               D E F G
cout << "17) pattern 17 question\n";
    */

    /*
     int n;
     cin >> n;
     int row = 1;

     while (row <= n)
     {
         int col = 1; // give column value
         while (col <= row)
         {
             char ch = 'A' + col +row - 2;
             cout << ch << " ";
             col++;
         }
         cout << endl; // go to next line
         row = row + 1;
     }
    */

    /*
           cout << "18) pattern 18\n";
                       D
                       C D
                       B C D
                       A B C D
                  */
    /*

        int n;
        cin >> n;
        int row = 1;;

        while (row <= n)
        {
            int col = 1; // give column value
            char start = 'A' + n - row;
            while (col <= row)
            {
                cout <<start;
                col++;
                start++;
            }
            cout<< endl; // go to next line
            row++;
        }
    */

    /*
            cout << "19) pattern 19\n";
                   ---*
                   --**
                   -***
                   ****
                    */

    /*
     */

    int n;
    cin >> n;
    int row = 1;

    // print space
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << "_";
            space--;
        }
        // print star
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
        return 1;
    }
 
 
