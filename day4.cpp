#include <iostream>
using namespace std;
int main()
// pateern question
{
    /*
     * * * *
     * * * *
     * * * *
     */
    /*
        cout<< "1) Print * 1st pattern row = column\n";



    int n;
    cin>> n;
    int i = 1;


    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<< "*";
            j = j + 1;
        }
               cout<<endl;
              i= i + 1;
    }
    */

    /*
       1 1 1
       2 2 2
       3 3 3
    */
    /*
        cout<< "2) pattern 2 \n";


    int n;
    cin>> n;
    int i = 1;

    while (i<=n)
    {
        int j = 1;  //give j value
        while (j<=n)
        {
            cout<< i;
            j = j + 1;   //print three one
        }
             cout<<endl;  //go to next line
             i = i + 1;
    }
    */

    /*
       1 2 3 4
       1 2 3 4
       1 2 3 4
       1 2 3 4
    */
    /*
        cout << "3) pattern 3\n";

        int n;
        cin >> n;
        int i = 1;

        while (i <= n)
        {
            int j = 1; // give j value
            while (j <= n)
            {
                cout << j;  //print j value to print 1 2 3 4
                j = j + 1;
            }
            cout << endl; // go to next line
            i = i + 1;
        }
    */

    /*
          3 2 1
          3 2 1
          3 2 1
       */
    /*
  cout << "4) pattern 4\n";

  int n;
  cin >> n;
  int i = 1;

  while (i <= n)
  {
      int j = 1; // give column value
      while (j <= n)
      {
          cout << n - j + 1;
          j = j + 1;
      }
      cout << endl; // go to next line
      i = i + 1;
  }
    */

    /*
              1 2 3
              4 5 6
              7 8 9
           */

    /*
cout << "5) pattern 5\n";

int n;
cin >> n;
int i = 1;
int k = 1;

while (i <= n)
{
  int j = 1; // give column value
  while (j <= n)
  {
      cout <<k<<" ";
      k ++;  //increse the value
    j = j + 1;
  }
  cout<< endl; // go to next line
  i = i + 1;
}
    */

    /*
    
                  *
                  * *
                  * * *
                  * * * *

               */
    /*
        cout << "6) pattern 6\n";

        int n;
        cin >> n;
        int row = 1;;

        while (row <= n)
        {
            int col = 1; // give column value
            while (col <= row)
            {
                cout <<"*";
                col = col + 1;
            }
            cout<< endl; // go to next line
            row = row + 1;
        }
    */

    /*

    cout << "7) pattern 7\n";

        int n;
        cin >> n;
        int row = 1;

        while (row <= n)
        {
            int col = 1; // give column value
            while (col <= row)
            {
                cout <<row<<" ";
                col++;
            }
            cout<< endl; // go to next line
            row = row + 1;
        }
    */

    /*
        cout << "8) pattern 8 question\n";

        int n;
        cin >> n;
        int row = 1;
        int count = 1;

        while (row <= n)
        {
            int col = 1; // give column value
            while (col <= row)
            {
                cout << count << " ";
                col++;
                count++;
            }
            cout << endl; // go to next line
            row = row + 1;
        }

    */

    // cout << "9) pattern 9 question\n";
    /*
        int n;
        cin >> n;
        int row = 1;


        while (row <= n)
        {
            int value = row;
            int col = 1; // give column value
            while (col <= row)
            {
                cout <<col+row-1 << " ";
                col++;
                value++;
            }
            cout << endl; // go to next line
            row = row + 1;
        }
    */

    // or other method
    /*
    int n;
        cin >> n;
        int row = 1;


        while (row <= n)
        {
            // int value = row;
            int col = 1; // give column value
            while (col <= row)
            {
                cout <<row+col-1 << " ";
                col++;
                // value++;
            }
            cout << endl; // go to next line
            row = row + 1;
        }
    */
/*
         1 
         2 1
         3 2 1
         4 3 2 1 
*/
    cout << "10) pattern 10 question\n";
    int n;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        // int value = row;
        int col = 1; // give column value
        while (col <= row)
        {
            cout << row - col + 1 << " ";
            col++;
            // value++;
        }
        cout << endl; // go to next line
        row = row + 1;
    }

    return 1;
}




