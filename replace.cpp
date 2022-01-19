#include<iostream>
#include<string>
using namespace std;
int main()
{
    int l2,l,i,j,p,l1,len,d,k=0;
    char c;
    string str,str1,str2;
    cout<<"enter the string :-"<<endl;
    getline(cin,str);
    c = str[str.length()-1];
    cout<<"enter the string want to replace :-"<<endl;
    getline(cin,str1);
    cout<<"enter the string want to add :-"<<endl;
    getline(cin,str2);
    i = str.length();
    j = i-1;
    d = str2.length() - str1.length();
    l2 = str2.length();
    l = str1.length() - str2.length();
    if(l<0)
    {
        l = l*(-1);
    }
    len = l;
    l1 = str.length();
    p = str.find(str1);
    while(l--)
    {
        // for(i=str.length()-1; i!=p; i--)
        // {
            str[j+1] = str[j];
            j--;
            if(j==p)
            {
            break;
            }
        // }
    }
    while(l2--)
    {
        str[j] = str2[k];
        k++;
        j++;
    }
        // cout<<str;
        cout<<str;
        while (d>0)
        {
            cout<<str[i];
            i++;
            d--;
        }
        
        
       
    return 0;
}