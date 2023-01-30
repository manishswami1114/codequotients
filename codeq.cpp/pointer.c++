#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
  int *ptr;
  int i = 50;
  ptr = &i;        /* address of i is assigned to ptr */
  cout<<"value of i="<< i <<" address of i= "<< &i << " value of p=" << ptr << endl;
  cout<<"value of i="<< i <<" Value of variable pointed by ptr="<< *ptr << endl;
  return 0;
}
