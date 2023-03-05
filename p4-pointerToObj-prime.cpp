4)a)Write a program to access members of a STUDENT class using pointer to object
members
#include&lt;iostream&gt;
#include &lt;cstdio&gt;
using namespace std;
class student
{
int rollno;
char name[50];
public:
void getdata();
void print();
};
void student::getdata()
{
cout&lt;&lt;&quot;Enter roll number&quot;&lt;&lt;endl;

11

cin&gt;&gt;rollno;
cout&lt;&lt;&quot;Enter Name &quot;;
cin&gt;&gt;name;
}
void student::print()
{
cout&lt;&lt;&quot;Name :&quot;&lt;&lt;name&lt;&lt;endl;
cout&lt;&lt;&quot;Roll no:&quot;&lt;&lt;rollno&lt;&lt;endl;
}
int main()
{
student a;
a.getdata();
a.print();
cout&lt;&lt;&quot;Pointer to class\n&quot;;
student *ptr;
ptr=&amp;a;
ptr-&gt;print();
}
Output:
Enter roll number
123
Enter Name jayapal
Name :jayapal
Roll no:123
Pointer to class
Name :jayapal

12

Roll no:123

4)b)C++ Program to check whether number is Prime or not
#include&lt;iostream&gt;
using namespace std;
int main()
{
int i, chk=0, j;
cout&lt;&lt;&quot;Prime Numbers Between 1 to 100 are:\n)&quot;;
for(i=1; i&lt;=100; i++)
{
for(j=2; j&lt;i; j++)
{
if(i%j==0)
{
chk++;
break;
}
}
if(chk==0 &amp;&amp; i!=1)
cout&lt;&lt;i&lt;&lt;endl;
chk = 0;
}
cout&lt;&lt;endl;
return 0;
}
Output:
Prime Numbers Between 1 to 100 are:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97