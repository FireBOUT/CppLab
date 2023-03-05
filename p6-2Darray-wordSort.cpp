6)a)C++ Program to Add Two Matrix Using Multi-dimensional Arrays
#include &lt;iostream&gt;
using namespace std;
int main()
{
int r, c, a[100][100], b[100][100], sum[100][100], i, j;
cout &lt;&lt; &quot;Enter number of rows (between 1 and 100): &quot;;
cin &gt;&gt; r;
cout &lt;&lt; &quot;Enter number of columns (between 1 and 100): &quot;;
cin &gt;&gt; c;

cout &lt;&lt; endl &lt;&lt; &quot;Enter elements of 1st matrix: &quot; &lt;&lt; endl;

// Storing elements of first matrix entered by user.
for(i = 0; i &lt; r; ++i)
for(j = 0; j &lt; c; ++j)
{
cout &lt;&lt; &quot;Enter element a&quot; &lt;&lt; i + 1 &lt;&lt; j + 1 &lt;&lt; &quot; : &quot;;
cin &gt;&gt; a[i][j];
}

// Storing elements of second matrix entered by user.
cout &lt;&lt; endl &lt;&lt; &quot;Enter elements of 2nd matrix: &quot; &lt;&lt; endl;
for(i = 0; i &lt; r; ++i)
for(j = 0; j &lt; c; ++j)
{

16
cout &lt;&lt; &quot;Enter element b&quot; &lt;&lt; i + 1 &lt;&lt; j + 1 &lt;&lt; &quot; : &quot;;
cin &gt;&gt; b[i][j];
}

// Adding Two matrices
for(i = 0; i &lt; r; ++i)
for(j = 0; j &lt; c; ++j)
sum[i][j] = a[i][j] + b[i][j];

// Displaying the resultant sum matrix.
cout &lt;&lt; endl &lt;&lt; &quot;Sum of two matrix is: &quot; &lt;&lt; endl;
for(i = 0; i &lt; r; ++i)
for(j = 0; j &lt; c; ++j)
{
cout &lt;&lt; sum[i][j] &lt;&lt; &quot; &quot;;
if(j == c - 1)
cout &lt;&lt; endl;
}

return 0;
}

Output:
Enter number of rows (between 1 and 100): 2
Enter number of columns (between 1 and 100): 2

Enter elements of 1st matrix:
Enter element a11: -4
Enter element a12: 5
Enter element a21: 6
Enter element a22: 8

Enter elements of 2nd matrix:
Enter element b11: 3

17

Enter element b12: -9
Enter element b21: 7
Enter element b22: 2

Sum of two matrix is:
-1 -4
13 10

6)b)C++ program to Sort Words in Dictionary Order
#include&lt;iostream&gt;
#include &lt;cstdio&gt;
using namespace std;
int main()
{
string str[10], temp;
cout &lt;&lt; &quot;Enter 10 words: &quot; &lt;&lt; endl;
for(int i = 0; i &lt; 10; ++i)
{
getline(cin, str[i]);
}
// Use Bubble Sort to arrange words
for (int i = 0; i &lt; 9; ++i) {
for (int j = 0; j &lt; 9 - i; ++j) {
if (str[j] &gt; str[j + 1]) {
temp = str[j];
str[j] = str[j + 1];
str[j + 1] = temp;
}
}
}
cout &lt;&lt; &quot;In lexicographical order: &quot; &lt;&lt; endl;
for(int i = 0; i &lt; 10; ++i)
{
cout &lt;&lt; str[i] &lt;&lt; endl;
}
return 0;
}
Output:

18

Enter 10 words:
C
C++
Java
Python
Perl
R
Matlab
Ruby
JavaScript
PHP
In lexicographical order:
C
C++
Java
JavaScript
Matlab
PHP
Perl
Python
R
Ruby