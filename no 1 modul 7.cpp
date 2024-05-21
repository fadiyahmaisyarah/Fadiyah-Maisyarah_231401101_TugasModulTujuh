#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=20;i+=2)
    {
        cout<<"bilangan ganjilnya: "<<i<<", alamat memori: "<<&i<<endl;
    }
    return 0;
}
