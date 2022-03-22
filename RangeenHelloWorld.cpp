#include <bits/stdc++.h>
#include "windows.h"
using namespace std;
void headache(int x)
{
  if (x == 1)
    system("color 1");
  if (x == 2)
    system("color 2");
  if (x == 3)
    system("color 3");
  if (x == 4)
    system("color 4");
  if (x == 5)
    system("color 5");
  if (x == 6)
    system("color 6");
  if (x == 7)
    system("color 7");
  if (x == 8)
    system("color 8");
  if (x == 9)
    system("color 9");
}
void Hello()
{
  while (true)
  {
    int x = ((rand() % 10) + 1);
    headache(x);
    int agent = rand() % (126 + 1 - 32) + 32;
    char X = (char)agent;
    cout << '\n';
    cout << '\n';
    cout << '\n';
    cout << '\n';
    cout << '\n';

    cout << "                                   " << X << X << "     " << X << X << "   " << X << X << "XXXXXXX   " << X << X << X << "      " << X << X << X << "     " << X << X << "XXX" << X << X << "      " << X << X << "      " << X << X << "  " << X << X << "XXX" << X << X << "   " << X << X << "XXXX    " << X << X << "      " << X << X << "XXXX      " << '\n';
    cout << "                                   " << X << X << "     " << X << X << "   " << X << X << "          " << X << X << X << "      " << X << X << X << "     " << X << X << "   " << X << X << "      " << X << X << "      " << X << X << "  " << X << X << "   " << X << X << "   " << X << X << "  XX    " << X << X << "      " << X << X << "     X    " << '\n';
    cout << "                                   " << X << X << "     " << X << X << "   " << X << X << "XXXXXXX   " << X << X << X << "      " << X << X << X << "     " << X << X << "   " << X << X << "      " << X << X << "      " << X << X << "  " << X << X << "   " << X << X << "   " << X << X << "XXXX    " << X << X << "      " << X << X << "      X   " << '\n';
    cout << "                                   " << X << X << "XXXXX" << X << X << "   " << X << X << "          " << X << X << X << "      " << X << X << X << "     " << X << X << "   " << X << X << "      " << X << X << "  XX  " << X << X << "  " << X << X << "   " << X << X << "   " << X << X << " X      " << X << X << "      " << X << X << "      X   " << '\n';
    cout << "                                   " << X << X << "     " << X << X << "   " << X << X << "          " << X << X << X << "      " << X << X << X << "     " << X << X << "   " << X << X << "      " << X << X << "  XX  " << X << X << "  " << X << X << "   " << X << X << "   " << X << X << "   X    " << X << X << "      " << X << X << "     X    " << '\n';
    cout << "                                   " << X << X << "     " << X << X << "   " << X << X << "XXXXXXX   " << X << X << X << "XXX   " << X << X << X << "XXX  " << X << X << "XXX" << X << X << "      " << X << X << "XXXXXX" << X << X << "  " << X << X << "XXX" << X << X << "   " << X << X << "     X  " << X << X << "XXXX  " << X << X << "XXXX      " << '\n';
    Sleep(100);
    system("cls");
  }
}
int main()

{
  Hello();
  return 0;
}
