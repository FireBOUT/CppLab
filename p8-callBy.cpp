8)a) Program to demonstrate call by value, call by address
// Using call by value.
#include&lt;iostream&gt;
#include &lt;cstdio&gt;
using namespace std;
void interchange(int number1, int number2);
int main()
{
int num1=50,num2=70;
//clrscr();
interchange(num1,num2);
cout&lt;&lt;&quot;\n Number1:&quot;&lt;&lt;num1&lt;&lt;&quot;\n Number2:&quot;&lt;&lt;num2;
//getch();
return 0;

21

}
void interchange(int number1,int number2)
{
int temp;
temp=number1;
number1=number2;
number2=temp;
}

Output:
Number1=50
Number2=70

8)b) Program to demonstrate call by Reference
#include&lt;iostream&gt;
#include &lt;cstdio&gt;
using namespace std;
void interchange(int *num1,int *num2);
int main()
{
int num1=50,num2=70;
//clrscr();
interchange(&amp;num1,&amp;num2);
cout&lt;&lt;&quot;\n Number1:&quot;&lt;&lt;num1&lt;&lt;&quot;\n Number2:&quot;&lt;&lt;num2;
//getch();
return 0;
}
void interchange(int *num1,int *num2)
{
int temp;

22

temp=*num1;
*num1=*num2;
*num2=temp;
}

Output
Number1: 70
Number2: 50