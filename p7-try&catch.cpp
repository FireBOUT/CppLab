7)a)Write a C++ program containing a possible exception use a try block to throw it and a
catch block to handle it properly.
#include&lt;iostream&gt;
#include &lt;cstdio&gt;

19

using namespace std;
int main()
{
int x = -1;
cout&lt;&lt; &quot;Before try \n&quot;;
try
{
cout&lt;&lt; &quot;Inside try \n&quot;;
if (x &lt; 0)
{
throw x;
cout&lt;&lt; &quot;After throw (Never executed) \n&quot;;
}
}
catch (int x )
{
cout&lt;&lt; &quot;Exception Caught \n&quot;;
}
cout&lt;&lt; &quot;After catch (Will be0 executed) \n&quot;;
return 0;
}
Output:
Before try
Inside try
Exception Caught
After catch (Will be executed)

7)b)Write a C++ program to demonstrate the catching of all exceptions.
#include&lt;iostream&gt;
#include &lt;cstdio&gt;
using namespace std;
void test(int x)
{
try
{
if(x&gt;0)
throw x;
else
throw &#39;x&#39;;

20

}
catch(int x)
{
cout&lt;&lt;&quot;Catch a integer and that integer is:&quot;&lt;&lt;x;
}
catch(char x)
{
cout&lt;&lt;&quot;Catch a character and that character is:&quot;&lt;&lt;x;
}
}
int main()
{
//clrscr();
cout&lt;&lt;&quot;Testing multiple catches\n:&quot;;
test(10);
test(0);
//getch();
return 0;
}
Output:
Testing multiple catches
Catch a integer and that integer is: 10
Catch a character and that character is: x