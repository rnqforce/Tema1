#include <iostream>

#include <string.h>

using namespace std;

int main()

{
    char  s[100];

    cin.get(s,100);

    for(int i=0 ;i < strlen(s) ; ++i)
    {
        if(s[i]>='A'&& s[i]<='Z')

            s[i]+=32;
        else  if(s[i]>='a'&& s[i]<='z')
                      s[i]-=32;
    }

    cout<<s;
}
