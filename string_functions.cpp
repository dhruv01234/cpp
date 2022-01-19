#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
   string s1,s2;
   getline(cin,s1);
   getline(cin,s2);
   // concating two strings with fuction
   s1.append(s2);
   cout<<s1<<endl;
   // concating two strings without fuction
   cout<<s1+s2;
   // sorting
   sort(s1.begin(),s1.end());
   cout<<s1;
   // length
   cout<<s1.length();
   // insertion
   s1.insert(2,"name");
   cout<<s1;
   // substring
   cout<<s1.substr(2,4);
   // find
   cout<<s1.find("a");
   // deletion
   s1.erase(2,4);
   cout<<s1;
   
   return 0;
}
