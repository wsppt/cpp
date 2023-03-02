#include <iostream>
using namespace std;

int main()
{
    int nums;
    cin >> nums;
    cout << sizeof(nums);
    for (int i=0; i < sizeof(nums); i++) {
        cout << i;   
    }
    cout << nums;
    return 0;
}