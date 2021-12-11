#include <iostream>
using namespace std; 

int main()
{
int a,b;
char d;

do{
cout<<"\n\n---------------SUPER CALCULATOR---------------\n\n";
cout<<"\nEnter the first number : ";
cin>>a;

cout<<"\nEnter the second number : ";
cin>>b;

cout<<"\nEnter the Operation You Want to Perform \n + > Addition \n - > Subtraction \n * > Multiplication \n / > Divison \n % > Modulus \n E/e > To Exit "<<endl;
cout<<"\n\nEnter The Operator : ";
cin>>d;
system("clear");
if(d=='+')
{
    cout<<"\nYour Answer Is ------> = "<<a+b;
}
else if (d=='-')
{
    cout<<"\nYour Answer Is ------> = "<<a-b;
}
else if (d=='*')
{
    cout<<"\nYour Answer Is ------> = "<<a*b;
}
else if (d=='/'&& b==0)
{
    cout<<"\n---- (〜￣▽￣)〜 >> Heyyyy you can't do that << :) ----\n";
}
else if (d=='/')
{
    cout<<"\nYour Answer Is ------> = "<<a/b;
}
else if (d=='%')
{
    cout<<"\nYour Answer Is ------> = "<<a%b;
}
else if (d=='E')
{
    cout<<"\nThank You For Using This Calculator :)";
}
else if (d=='e')
{
    cout<<"\nThank You For Using This Calculator :)";
}

cout<<endl;
}while(d!='E' && d!='e');

return 0;
}