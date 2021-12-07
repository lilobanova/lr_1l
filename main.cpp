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
}
return 0;
}
}
