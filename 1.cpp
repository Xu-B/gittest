#include <iostream>
using namespace std;
void disp(int a,int b);

int main()
{
    int a,b;
    cin >> a>>b;
    disp(a,b);

}
void disp(int a,int b)
{
    cout << "Time :" << a <<":" << b <<endl;
}