9)a)C++ Program to Store and Display Information Using Structure
#include &lt;iostream&gt;
using namespace std;

struct student
{
char name[50];
int roll;
float marks;
} s[10];

int main()
{
cout &lt;&lt; &quot;Enter information of students: &quot; &lt;&lt; endl;

// storing information
for(int i = 0; i &lt; 10; ++i)
{
s[i].roll = i+1;
cout &lt;&lt; &quot;For roll number&quot; &lt;&lt; s[i].roll &lt;&lt; &quot;,&quot; &lt;&lt; endl;

23

cout &lt;&lt; &quot;Enter name: &quot;;
cin &gt;&gt; s[i].name;

cout &lt;&lt; &quot;Enter marks: &quot;;
cin &gt;&gt; s[i].marks;

cout &lt;&lt; endl;
}

cout &lt;&lt; &quot;Displaying Information: &quot; &lt;&lt; endl;
// Displaying information
for(int i = 0; i &lt; 10; ++i)
{
cout &lt;&lt; &quot;\nRoll number: &quot; &lt;&lt; i+1 &lt;&lt; endl;
cout &lt;&lt; &quot;Name: &quot; &lt;&lt; s[i].name &lt;&lt; endl;
cout &lt;&lt; &quot;Marks: &quot; &lt;&lt; s[i].marks &lt;&lt; endl;
}
return 0;
}
Output:
Enter information of students:
For roll number1,
Enter name: Tom
Enter marks: 98
For roll number2,
Enter name: Jerry
Enter marks: 89
.Displaying Information:
Roll number: 1
Name: Tom
Marks: 98

24

9)b)Write a C++ program to illustrate the order of execution of constructors
and destructors.
#include &lt;iostream&gt;
using namespace std;
class Base
{
public:
Base ( )
{
cout&lt;&lt; &quot;Inside Base constructor&quot; &lt;&lt;endl;
}
~Base ( )
{
cout&lt;&lt; &quot;Inside Base destructor&quot; &lt;&lt;endl;
}
};
class Derived : public Base
{
public:
Derived ( )
{
cout&lt;&lt; &quot;Inside Derived constructor&quot; &lt;&lt;endl;
}
~Derived ( )
{
cout&lt;&lt; &quot;Inside Derived destructor&quot; &lt;&lt;endl;
}
};
int main( )
{
Derived x;
return 0;
}
Output:
Inside Base constructor
Inside Derived constructor
Inside Derived destructor
Inside Base destructor