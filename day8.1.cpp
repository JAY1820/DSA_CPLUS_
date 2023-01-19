/*
#include <iostream>
using namespace std;
int main()
{
for (int i = 0; i <=15; i+=1)
{
    cout<< i <<" ";
    if (i&1)
    {
        continue;
    }
i++;
}


 return 1;
}
*/


#include<iostream>
using namespace std;


//1 -> Even
// 0 -> odd
bool isEven(int a) {
    //odd
    if(a&1) {
        return 0;
    }
    else { //Even
        return 1;
    }

}

int main() {
    
    int num;
    cin >> num;

    if(isEven(num)) {
        cout <<" Number is Even" <<endl;
    }
    else {
        cout<< " Number is Odd" <<endl;
    }


    return 0;
}