#include <iostream>
#include <cstring>
#include <stack>
using namespace std;


stack<int> s;
char str[100];
int n;
int main(void)
{
while(scanf("%s",&str))
{
if (strcmp(str,"push") == 0)
{
cin»n;;
s.push(n);
cout«"ok"«"\n";
} else
if (strcmp(str,"pop") == 0)
{
cout«s.top()«"\n";
s.pop();
}
return 0;
}
}
