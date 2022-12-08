/*#include<iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemprice[100];
    int counter;

    public :
    void initcounter(void){counter = 0; }
    void setprice(void);
    void displayprice(void);

};

void shop ::setprice1001(void)
{
    cout<<"enter Id of your item no "<< counter + 1<<endl;
    cin>>itemId[counter];
    cout<<"enter price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;
}
/// @brief 
/// @param  
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of item with Id "<<itemId[i]<<"is"<<itemprice[i]<<endl;

    }
}

int main(){
    shop dukaan;
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

     return 0;
}*/

#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}

1