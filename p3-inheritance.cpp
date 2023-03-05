3)a)C++ program to demonstrate inheritance
// C++ program to demonstrate inheritance
#include &lt;iostream&gt;
using namespace std;
// base class
class Animal {
public:
void eat() {

7

cout &lt;&lt; &quot;I can eat!&quot; &lt;&lt; endl;
}

void sleep() {
cout &lt;&lt; &quot;I can sleep!&quot; &lt;&lt; endl;
}
};
// derived class
class Dog : public Animal {
public:
void bark() {
cout &lt;&lt; &quot;I can bark! Woof woof!!&quot; &lt;&lt; endl;
}
};
int main() {
// Create object of the Dog class
Dog dog1;

// Calling members of the base class
dog1.eat();
dog1.sleep();

// Calling member of the derived class
dog1.bark();

return 0;
}

8

Output:
I can eat!
I can sleep!
I can bark! Woof woof!!

3)b)Write a C++ Program that illustrate multiple inheritance.
#include &lt;iostream&gt;
#include &lt;cstdio&gt;
using namespace std;
class student
{
protected: int rno,m1,m2;
public:
void get()
{
cout&lt;&lt;&quot;Enter the Roll no :&quot;;
cin&gt;&gt;rno;
cout&lt;&lt;&quot;Enter the two marks :&quot;;
cin&gt;&gt;m1&gt;&gt;m2;
}
};
class sports
{
protected:
int sm; // sm = Sports mark
public:

9

void getsm()
{
cout&lt;&lt;&quot;\nEnter the sports mark :&quot;;
cin&gt;&gt;sm;
}
};
class statement:public student,public sports
{
int tot,avg;
public:
void display()
{
tot=(m1+m2+sm);
avg=tot/3;
cout&lt;&lt;&quot;\n\n\tRoll No : &quot;&lt;&lt;rno&lt;&lt;&quot;\n\tTotal : &quot;&lt;&lt;tot;
cout&lt;&lt;&quot;\n\tAverage : &quot;&lt;&lt;avg;
}
};
int main()
{
//clrscr();
statement obj;
obj.get();
obj.getsm();
obj.display();
//getch();
return 0;

10

}
Output:
Enter the Roll no: 100
Enter two marks
90
80
Enter the Sports Mark: 90
Roll No: 100
Total : 260
Average: 86.66