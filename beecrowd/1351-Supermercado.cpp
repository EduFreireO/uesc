#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len_list, len_supermarket, id;
    double price;
    cin >> len_list >> len_supermarket;
    vector <int> list;
    vector <pair <int, double > > supermarket;
    stack < double > s;

    while(len_list)
    {
        cin >> id;
        len_list--;
    }


    while(len_supermarket)
    {
        cin >> id >> price;
        supermarket.push_back({ id, price });
        len_supermarket--;
    }


    int index_list = 0, index_market = 0;
    double result = 0;
    while(index_list < list.size() && index_market << supermarket.size())
    {
        if(list[index_list] == supermarket[index_market].first)
            s.push(supermarket[index_market].second);
    }

}