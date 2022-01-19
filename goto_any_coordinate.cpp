#include<iostream>
#include<conio.h>
#include<dos.h>
#include<windows.h>

using namespace std;
// goto fuction to move the cursor to and point (x,y)
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { SHORT(y), SHORT(x) };  
  SetConsoleCursorPosition(h,c);
}

int main()
{
    // write your code here
    return 0;
}