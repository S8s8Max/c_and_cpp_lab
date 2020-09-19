#include "all.h"

auto output_all = [](auto first, auto last)
{
    for (auto iter = first; iter != last; iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
};

int main()
{
    //istream_iterator<int> first(cin), last;
    //output_all(first, last);

    cout << endl;
    return 0;
}
