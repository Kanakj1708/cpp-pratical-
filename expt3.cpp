#include <iostream>
using namespace std;

class Product
{
    int productID;
    string productName;
    float price;
    int sales[12];

public:
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter sales for 12 months:\n";
        for (int i = 0; i < 12; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> sales[i];
        }
    }

    void display()
    {
        int totalQuantity = 0;

        for (int i = 0; i < 12; i++)
        {
            totalQuantity += sales[i];
        }

        float totalBill = totalQuantity * price;

        cout << "\nProduct ID: " << productID;
        cout << "\nProduct Name: " << productName;
        cout << "\nPrice: " << price;
        cout << "\nTotal Quantity Sold: " << totalQuantity;
        cout << "\nTotal Bill: " << totalBill << endl;
    }
};

int main()
{
    Product p[3];   // Array of objects

    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter details of Product " << i + 1 << ":\n";
        p[i].input();
    }

    cout << "\n----- PRODUCT DETAILS -----\n";

    for (int i = 0; i < 3; i++)
    {
        p[i].display();
    }

    return 0;
}
EXPECTED OUTCOME
Enter number of products: 2

--- Product 1 Details ---
Enter Product ID: 101
Enter Product Name: Laptop
Enter Price per unit: 50000
Enter monthly sales for 12 months:
10 12 8 15 20 18 22 19 16 14 11 13

--- Product 2 Details ---
Enter Product ID: 102
Enter Product Name: Mouse
Enter Price per unit: 500
Enter monthly sales for 12 months:
50 60 45 55 70 65 80 75 60 55 50 48

----- All Products Details -----

Product ID: 101
Product Name: Laptop
Price: 50000
Total Quantity Sold: 178
Total Bill: 8900000
Product ID: 102
Product Name: Mouse
Price: 500
Total Quantity Sold: 713
Total Bill: 356500

Grand Total Bill: 9256500
