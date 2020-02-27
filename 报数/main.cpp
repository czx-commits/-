#include <iostream>
#include <list>
using namespace std;

int main()
{
    size_t n;
    cin >> n;
    list<size_t> int_list;
    for (size_t i = 1; i<=n; ++i)
    {
        int_list.push_back(i);
    }

    for (auto & i : int_list)
    {
        cout << i << endl;
    }

    size_t index = 1;
    int count = 1;
    while (int_list.size() <= 1)
    {
        if (index == int_list.size())
        {
            index = 1;
        }
        if (count == 3)
        {
            int_list.remove(index);
            count = 1;
        }
        else
        {
            count++;
        }
        index ++;
    }
   for (auto & i : int_list)
    {
        cout << i << endl;
    }

    cout << int_list.front() << endl;


    return 0;
}


