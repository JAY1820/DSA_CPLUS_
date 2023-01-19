#include <iostream>
using namespace std;
//for loop pattern
int main()
{

    // for loop pattern

    /*1)pattern 1
    *
    *  *
    *  *  *
    *  *  *  *
    *  *  *  *  *  *

    int n;
    cout << "Enter the Number of rows - ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {

        for (int j = 1; j <=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    */

    /*
       2)pattern
       * * * * *
       * * * *
       * * *
       * *
       *

           int n;

           cout << "Enter number of rows: ";
           cin >> n;

           for(int i = n; i >= 1; i--)
           {
               for(int j = 1; j <= i; ++j)
               {
                   cout << "* ";
               }
               cout << endl;
           }
       */

    /*3)pattern
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    int n;
    cout << "Enter the Number of rows - ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    */

    /*4)pattern
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    int n;
    cout << "Enter the Number of rows - ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
            int count = 1;    //count in column only
        for (int j = 1; j <=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

   5) reverse pattern
        4 3 2 1
        3 2 1
        2 1
        1

   int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = n; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    */

    /*
    6)pattern
     4
     4 3
     4 3 2
     4 3 2 1


     int n;

        cout << "Enter number of rows: ";
        cin >> n;

        for(int i = 1; i <=n; i++)
        {
            for(int j = 1; j <= i; ++j)
            {
                cout << n - j + 1<< " ";
            }
            cout << endl;
        }
    */

    /*7)pattern
    A
    A B
    A B C
    A B C D
    A B C D E
    A B C D E F

    int n;
    cout << "Enter the Number of rows - ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {

        for (int j = 1; j <=i; j++)
        {
             char ch='A' + j - 1;
             cout<<ch;
        }
        cout<<endl;
    }
    */

    /*8)pattern
    A
    B B
    C C C
    D D D D


    int n;
    cout << "Enter the Number of rows - ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {

        for (int j = 1; j <=i; j++)
        {
             char ch='A' + i - 1;
             cout<<ch;
        }
        cout<<endl;
    }
    */

    /*
    9)pattern

       D
       C D
       B C D
       A B C D

       char n;

        cout << "Enter number of rows: ";
        cin >> n;

        for(char i = 'A'; i <=n; i++)
        {
            for(char j = n-i+'A'; j <= n; j++)
            {
                cout << j;
            }
            cout << endl;
        }


     4
     3 4
     2 3 4 
     1 2 3 4


     int n;

        cout << "Enter number of rows: ";
        cin >> n;

        for(char i = 1; i <=n; i++)
        {
            for(int j = n-i+1; j <= n; j++)
            {
                cout << j;
            }
            cout << endl;
        }
    */


    /* count pattern
    10)pattern

    A B C
    D E F
    G H I

    int n;
    cout << "Enter the Number of rows - ";
    cin>>n;
             char count = 'A';
    for (int i = 1; i <=n; i++)
    {

        for (int j = 1; j <=n; j++)
        {
             cout<<count;
             count++;
        }
        cout<<endl;
    }
    */

    /*
        or to understand do with  1 2 3 first
        1 2 3
        4 5 6
        7 8 9

        int n;
        cout << "Enter the Number of rows - ";
        cin>>n;
            int count = 1;  //declare out of row loop
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <=n; j++)
            {
                 cout<<count;
                 count++;
            }
            cout<<endl;
        }
    */


    return 1;
}
