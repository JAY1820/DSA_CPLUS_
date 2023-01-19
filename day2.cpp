
#include<iostream>
using namespace std;
int main(){


// inpit & output
int num1,num2;
cout<<"enter value of num1:\n";
cin>>num1;
cout<<"enter value of num2:\n";
cin>>num2;
 cout<<"the sum is:"<<num1+num2<<endl;

cout<<"--------------\n\n";
if(num1<20){

    cout<<"it's not my birthday";
}
else if(num1==25)
{
    cout<<"it's my birthday\n";
}
else {
    cout<<"invalid date\n";
}

cout<<"--------------\n\n";
if (num1>0)
{
cout<<"num1 is +ve\n";
}
else if (num1<0)
{
    cout<<"num1 is -ve:\n";
}
else{
    cout<<"num1 is zero:\n";
}
return 0;
}