#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int size = n;
    while(n--)
    {
        for (int i = 0; i < size; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
