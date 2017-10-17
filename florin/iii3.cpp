#include<iostream>

#include<iomanip>

using namespace std;

int main()
{
    char c='A';

    float n=1.23456789;


    char s[100];
    cin.get(s,100);
    cout<<s<<'\n';

    for(int i=0 ; i<= 25 ; ++i)
      {
        cout<<c;
        c+=1;
      }
    cout<<'\n';

    for(int i=0 ; i < 5 ;++i)

         cout<<fixed<<setprecision(i+1)<<n<<" "<<setprecision(i+2)<<n<<'\n';

    return 0;
}
