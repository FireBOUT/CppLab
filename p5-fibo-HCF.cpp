5)a)Write a Program to generate Fibonacci Series by using Constructor to initialize the
Data Members.
#include&lt;iostream&gt;
using namespace std;
class fibonacci{
int f0,f1,f;

13

public:
fibonacci()
{
f0=0;
f1=1;
}
void series(int n)
{
int count=0;
f0=0;
f1=1;
while(count&lt;n)
{
cout&lt;&lt;f0&lt;&lt;&quot;\t&quot;;
count++;
f=f0+f1;
f0=f1;
f1=f;
}
}
};
int main()
{
Fibonacci obj;
int terms;
cout&lt;&lt;&quot;Enter How many terms to be printed:&quot;;
cin&gt;&gt;terms;

14

obj.series(terms);
return 0;
}
Output:
Enter How many terms to be printed:5
0 1 1 2 3
5)b)C++ Program to Calculate H.C.F using recursion
#include &lt;iostream&gt;
using namespace std;

int hcf(int n1, int n2);

int main()
{
int n1, n2;

cout &lt;&lt; &quot;Enter two positive integers: &quot;;
cin &gt;&gt; n1 &gt;&gt; n2;

cout &lt;&lt; &quot;H.C.F of &quot; &lt;&lt; n1 &lt;&lt; &quot; &amp; &quot; &lt;&lt; n2 &lt;&lt; &quot; is: &quot; &lt;&lt; hcf(n1, n2);

return 0;
}

int hcf(int n1, int n2)
{
if (n2 != 0)
return hcf(n2, n1 % n2);
else
return n1;

15

}

Output:
Enter two positive integers: 366 60
H.C.F of 366 and 60 is: 6