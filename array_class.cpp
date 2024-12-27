
#include <iostream>
using namespace std;

class Shop
{
    int item;
    int price;

public:
    Shop() {}
    Shop(int i, int j) : item(i), price(j) {}
    int getItem() { return item; }
    int getPrice() { return price; }
    void setData(int a, float b)
    {
        item = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << item << endl;
        cout << "Price of this item is " << price << endl;
    }
};

// int main()
// {
//     Shop *shopArray = new Shop[4];

//     for (int i = 0; i < 4; i++)
//     {
//         int a, b;
//         cout << "Enter the item number and price of item " << i + 1 << endl;
//         cin >> a >> b;
//         shopArray[i] = Shop(a, b);
//     }

//     for (int i = 0; i < 4; i++)
//     {
//         cout << "The item number of item " << i + 1 << " is " << shopArray[i].getItem() << " and the price is " << shopArray[i].getPrice() << endl;
//     }

//     delete[] shopArray;
//     return 0;

// }

int main()
{
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}
