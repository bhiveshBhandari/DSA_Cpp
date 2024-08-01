#include<iostream>
using namespace std;

void reverseString(string str)
{
    if(str.length() == 0)
    {
        return;
    }
    string s = str.substr(1);
    reverseString(s);
    cout<<str[0];

}

int main()
{
    string str = "Bhivesh";
    reverseString(str);
}