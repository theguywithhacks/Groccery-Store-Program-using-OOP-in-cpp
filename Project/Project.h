#include<iostream>
#include<string.h>
using namespace std;

class User
{
protected:
    char UserName[20];
    char Password[20];
    char CNIC[20];
    char Email[20];
    char PHoneNUm[20];
    char REcoveryEmail[20];
    char YearsOfExperience[20];
    char AvailablityHours[20];
    char City[20];
    public:
        User(char n[20], char n1[20], char n2[20], char n3[20], char n4[20], char n7[20], char n8[20]);
        User();
        void Menu();
        void Menu1();
        
        //Login Check Functions
        void AdminsLogin();
        void CustomerLogin();
        void ManagerLogin();

        void AdminsFurthurMenu();
        void convertmyChar(char *,int);
        void RegisterAdmin();
        void RegisterCustomer();
        void RemoveManager();
        void ShowManagers();
        void RemoveCustomer();
        void ShowCustomer();
        void RegisterManager();
        bool AlreadyAvailableAdmin(string);
        bool AlreadyAvailableCustomer(string);
        bool AlreadyAvailableManager(string);
        User CustomerRegistrationMenu();
        User ManagerRegistrationMenu();
        User AdminRegistrationMenu();
        void ChangeCustomerPassword();

}u;

class Catalogue{

    public:
        char productname[20];
        int priceofItem = 0;
        char QUAantity = 0;
        Catalogue(char n[20], int p){
        strcpy(productname,n);
        priceofItem = p;
        }
        Catalogue()
        {
            strcpy(productname,"No Name");
            priceofItem = 0;
        }
        void AddCatalogue();
        void RemoveCatalogue();
        void updateItemCatalogue();
        void showCatalogue();
        void showMenutoAdmin();
        void setpName(char n[20])
        {
            strcpy(productname,n);
        }
        void setpriceofItem(int p)
        {
            priceofItem = p;
        }
        void ShowCatalogueAddMenu();
}ct;

class Inventory{
    public:
    char name[20];
    int Quantity;
    Inventory(){
        strcpy(name,"No Name");
        Quantity = 0;
    }
    Inventory(char n[20], int m){
        strcpy(name,n);
        Quantity = m;
    }
    void setname(char p[20]){
        strcpy(name,p);
    }
    void setQuantity(int q ){
        Quantity = q ;
    }
    string getname(){
        return name;
    }
    int getquantity(){
        return Quantity;
    }
    void showInventory();
    void showMenutoManager();

}In;

class Temporary{
    public:
    char name[20];
    int Quantity;
};



class Cart : public Catalogue
{   
    public:
        Cart()
        {
            strcpy(productname,"No Name");
            priceofItem = 0;
        }
        Cart(char input[20], int p)
        {
            strcpy(productname,input);
            priceofItem = p;
        }
        int MenutoCustomers();
        void MenutoCustomers2();
        int showCart();
};