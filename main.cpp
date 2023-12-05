#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

class Customer
{
public:
    int id;
    string name, email, phone, add;
};

class Cart
{
public:
    string p_name;
    int p_quantity, price, id;
};

class Order
{
public:
    int o_id, product_quantity, product_price;
    string product_name;
};

int main()
{
    cout << "---------------------- Wellcome to Admin ------------------------" << endl;
    int k = 0, choise, a = 0, x;
    string tid;
    Cart product[1000];
    Order ord[1000];

    Start:
        cout << "           1.Add Product" << endl
             << "           2.See Product" << endl
             << "           3.Order Product" << endl
             << "           4.See Order" << endl
             << "           5.Pay Bill" << endl
             << "           6.Exit" << endl
             << "           Enter your choise  = ";
        cin >> choise;

    if (choise == 1)
    {
        cout << "**********"
             << "Add  Product"
             << "**********" << endl;
        cout << "-----------------------------------------------------------" << endl;
        product[k].id = k;
        cout << "Enter Product Name = ";
        cin >> product[k].p_name;
        cout << "Product Price = ";
        cin >> product[k].price;
        cout << "Product Quantity = ";
        cin >> product[k].p_quantity;
        k++;
        cout << "Product Added Successfully!!" << endl;

        system("clear");
        if (1)
            goto Start;
    }
    else if (choise == 2)
    {
        cout << "**********"
             << "Available  Product"
             << "**********" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "Product id       "
             << "Product Name       "
             << "Product Price     "
             << "Product Quantity     " << endl;
        for (int i = 0; i < k; i++)
        {
            cout << product[i].id << "                  " << product[i].p_name << "                     " << product[i].price << "                  " << product[i].p_quantity << endl;
        }
        cout << endl
             << "Do you want to go main menu? Yes or No  = ";

        string ans;
        cin >> ans;
        if (ans == "Yes" || ans == "yes" || ans == "y" || ans == "Y" || ans == "YES")
        {
            system("clear");
            goto Start;
        }
        else
        {

            return 0;
        }
    }
    else if (choise == 3)
    {
        cout << "**********"
             << "Order   Product"
             << "**********" << endl;
        cout << "-----------------------------------------------------------" << endl;
        ord[a].o_id = a;
        cout << "Enter product name = ";
        cin >> ord[a].product_name;
        cout << "Enter quantity = ";
        cin >> ord[a].product_quantity;
        // cout << "Enter Product Price = ";
        // cin >> ord[a].product_price;

        for (int i = 0; i <= k - 1; i++)
        {
            if (product[i].p_name == ord[a].product_name)
            {
                x = product[i].id;
            }
        }

        product[x].p_quantity -= ord[a].product_quantity;
        a++;
        cout << "Thanks For your Order. Your Order is Processing " << endl;

        string ans;
        cout << "Do you want to go main menu? Yes or No  = ";
        cin >> ans;
        if (ans == "Yes" || ans == "yes" || ans == "y" || ans == "Y" || ans == "YES")
        {
            system("clear");
            goto Start;
        }
        else
        {
            return 0;
        }
        goto Start;
    }
    else if (choise == 4)
    {
        cout << "**********"
             << "Your Order"
             << "**********" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "Order Id   "
             << "Product Id  "
             << "Order Product    "
             << "Order Quantity  "
             << "Total Bill" << endl;
        cout << ord[a - 1].o_id << "              " << x << "           " << ord[a - 1].product_name << "                 " << ord[a - 1].product_quantity << "            " << ord[a - 1].product_quantity * product[x].price<< endl;

        string ans;
        cout << "Do you want to go to  the main menu? Yes or No  = ";
        cin >> ans;
        if (ans == "Yes" || ans == "yes" || ans == "y" || ans == "Y" || ans == "YES")
        {
            system("clear");
            goto Start;
        }
        else
        {
            return 0;
        }
    }
    else if (choise == 5)
    {

    Payment_Option:
        cout << endl
             << "******* Available Payment Method *******" << endl;
        cout << "1.Cash" << endl
             << "2.Card" << endl
             << "3.Online" << endl;

        int pchoise;
        string payment_method;
        cout << "Please choise your payment method  = ";
        cin >> pchoise;

        if (pchoise == 1)
        {

            payment_method = "Cash";
            cout << "Please Provide " << ord[a - 1].product_quantity * product[x].price << "/-" << endl;
            cout << "Payment Done" << endl;
        }
        else if (pchoise == 2)
        {
            payment_method = "Card";
            cout << "Please Swip your card" << endl;
            cout << "Payment Done" << endl;
        }
        else if (pchoise == 3)
        {
            payment_method = "Online ";
            cout << "Available Method" << endl;
            cout << "1.Bkash" << endl
                 << "2.Rocket" << endl
                 << "3.Nagad" << endl;

            cout << "Give your Transction Id Please = ";
            cin >> tid;
            payment_method += tid;
        }
        else
        {
            cout << "Invalid choise! Pleae choise between 1-3" << endl;
            goto Payment_Option;
        }

        cout << endl
             << "********** Here is your Payment Details **********" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "Order Id   "
             << "Product id  "
             << "Order Product    "
             << "Order Quantity  "
             << "Total Bill"
             << "Payment Method " << endl;
        cout << ord[a - 1].o_id << "              " << x << "            " << ord[a - 1].product_name << "                 " << ord[a - 1].product_quantity << "            " << ord[a - 1].product_quantity * product[x].price<< "            " << payment_method << endl;

        string ans;
        cout << "Do you want to exit the session? Yes or No  = ";
        cin >> ans;
        if (ans == "Yes" || ans == "yes" || ans == "y" || ans == "Y" || ans == "YES")
        {
            return 0;
        }
        else
        {
            system("clear");
            goto Start;
        }
    }
    else if (choise == 6)
    {
        string ans;
        cout << "Do you want to exit the session? Yes or No  = ";
        cin >> ans;
        if (ans == "Yes" || ans == "yes" || ans == "y" || ans == "Y" || ans == "YES")
        {
            return 0;
        }
        else
        {
            system("clear");
            goto Start;
        }
    }
    else
    {
        cout << "Invali Choise!!  Please Try Again" << endl;
        system("clear");
        goto Start;
    }

    return 0;
}