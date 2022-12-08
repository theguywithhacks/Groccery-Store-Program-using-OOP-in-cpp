

                                    //////////Muhammad ABdullah Dilshad
                                    /////////21i-0418
#include <iostream>
#include"project.h"
#include <cstring>
#include <fstream>
#include <iomanip>
#include<string>
#include <string.h>
using namespace std;

User::User()
{
    strcpy(UserName, "NO NAME");
    strcpy(Password, "NOPASS");
    strcpy(CNIC, "NOCNIC");
    strcpy(Email, "NOEMAIL");
    strcpy(YearsOfExperience, "NO Experience");
    strcpy(AvailablityHours, "No Availability");
    strcpy(City, "No city");
    
}

User::User(char n[20], char n1[20], char n2[20], char n3[20],char n4[20], char n7[20], char n8[20])
{
    strcpy(UserName, n);
    strcpy(Password, n1);
    strcpy(CNIC, n2);
    strcpy(Email, n3);
    strcpy(YearsOfExperience, n4);
    strcpy(AvailablityHours, n7);
    strcpy(City, n8);
}

void ShowCatalogueAddMenu()
{   
                system("cls");
                int as;
                cout << "\n\t\t\t\t\t ================Adding Item to the Catalogue================" << endl;
                cout <<"\n\t\t\t\t\t Enter 1 to add a Food Item : "<<endl;
                cout << "\n\t\t\t\t\t Enter 2 to add a Personal Hygiene Item : " << endl;
                cout << "\n\t\t\t\t\t Enter 3 to add a Household Item : " << endl;

                cout << "\n\t\t\t\t\t Enter your choice : ";

                        cin >> as;

                if(as==1)
                {       
                        system("cls");
                        int ask;
                        cout << "\n\t\t\t\t\t Enter 1 to add Perishabe Food : " << endl;
                        cout << "\n\t\t\t\t\t Enter 2 to add Non Perishable Food : " << endl;
                        cout << "\n\t\t\t\t\t Enter your choice : ";
                        cin>>ask;

                        if(ask ==1)
                        {
                            system("cls");
                            char xy;
                            cout << "\n\t\t\t\t\t Enter 1 to add Meat Product..";
                            cout << "\n\t\t\t\t\t Enter 2 add Dairy Product ..";
                            cout << "\n\t\t\t\t\t Enter 3 add Fruit Product ..";
                            cout << "\n\t\t\t\t\t Enter 4 add Vegetable Product ..";
                            cout << "\n\t\t\t\t\t Enter your choice : ";
                            cin>>xy;
                        }

                        if(ask ==2)
                        {
                            system("cls");
                            char xz;
                            cout << "\n\t\t\t\t\t Enter 1 to add Snack Product.."<<endl;;
                            cout << "\n\t\t\t\t\t Enter 2 add Spices Product .." << endl;
                            cout << "\n\t\t\t\t\t Enter 3 add Personal Hygiene Product .." << endl;
                            cout << "\n\t\t\t\t\t Enter 4 add Ho Product .." << endl;
                            cout << "\n\t\t\t\t\t Enter your choice : ";
                            cin>>xz;
                        }
                }
                if (as == 2)
                {
                            cout << "\n\t\t\t\t\t  Please Enter the details..";
                }

                if (as == 3)
    {
        cout << "\n\t\t\t\t\t Please Enter the details..  ";
    }
}
void User::Menu()    
{
    system("cls");
    cout << "\n\n                                ========================Grocery Store Program=========================" << endl;
    cout<<"\n\n                                                                 Welcome"<<endl;
    cout << "\n\n\n\n\t\t\t\t\t0.  Exit" << endl;
    cout << "\n\t\t\t\t\t1.  Register as an Admin " << endl;
    cout << "\n\t\t\t\t\t2. Register as an Customer " << endl;
}

void User::AdminsLogin()
{   
    bool check =0 ;
    jump16:
    string uname, pass;
    cout << "\n\t\t\t\t\t=================Logging in as Admin==========================" << endl<<endl;
    cout << "\n\t\t\t\t\tEnter the usernmae : ";
    cin>>uname;
    ifstream fin;
    fin.open("Admin.dat", ios::in | ios::binary);
    User user3;
    while (fin.read((char *)&user3, sizeof(user3)))
    {
        //uname = convertmyChar(uname,20);
        if (uname == user3.UserName)
        {   
            check = 1;
            jump14:
                cout << "\n\t\t\t\t\t "<< user3.UserName << " Enter Your Password : ";
                cin >> pass;
                if (pass == user3.Password)
                {
                    system("cls");
                    cout << "\n\t\t\t\t\t ===================Welcome " << user3.UserName << "==============" << endl;
                    cout << "\n\t\t\t\t\t ===============You have been Logged In Successfully====" << endl;
            }

            else if (pass != user3.UserName)
            {
               cout<<"\n !!!!!!!!The Password that you entered is Incorrect"<<endl;
               goto jump14;
            
            }
        }
    }

    if(check == 0)
    {
        cout<<"Incorrect Username......"<<endl;
        cout<<"Enter the Username Again : "<<endl;
        goto jump16;
    }
    fin.close();
}

void User::CustomerLogin()
{   
    system("cls");
    bool check = 0;
jump16:
    string uname, pass;
    cout << "\n\t\t\t\t\t Enter your username: " ;
    cin >> uname;
    ifstream fin;
    fin.open("Customer.dat", ios::in | ios::binary);
    User user3;
    while (fin.read((char *)&user3, sizeof(user3)))
    {
        // uname = convertmyChar(uname,20);
        if (uname == user3.UserName)
        {
            check = 1;
        jump14:
            cout << "\n\t\t\t\t\t " << user3.UserName << " enter Your Password : ";
            cin >> pass;
            if (pass == user3.Password)
            {
                cout << "\n\t\t\t\t\t Welcome " << user3.UserName << "........" << endl;
                cout << "\n\t\t\t\t\t ================ You have been Logged In Successfully =======" << endl;
            }

            else if (pass != user3.UserName)
            {
                cout << "\n\t\t\t\t\t The Password that you entered is Incorrect..." << endl;
                goto jump14;
            }
        }
    }

    if (check == 0)
    {
        cout << "Incorrect Username......" << endl;
        cout << "Enter the Username Again : " << endl;
        goto jump16;
    }
    fin.close();
}

void User::Menu1()
{   
    system("cls");
    cout << "\n\t\t\t\t\t0.  exit " << endl;
    cout << "\n\t\t\t\t\t 1.  Login as Adminsitrator " << endl;
    cout << "\n\t\t\t\t\t 2.  Login as a Customer " << endl;
    cout << "\n\t\t\t\t\t 3.  Login as a Manager " << endl;
}
                                            
bool User::AlreadyAvailableCustomer(string p)
{
    ifstream fin;
    fin.open("Customer.dat", ios::in | ios::binary);
    User user;
    while (fin.read((char *)&user, sizeof(user)))
    {
        if (user.CNIC == p)

            return true;
    }
    fin.close();
    return false;
}

bool User::AlreadyAvailableManager(string p)
{
    ifstream fin;
    fin.open("Manager.dat", ios::in | ios::binary);
    User user;
    while (fin.read((char *)&user, sizeof(user)))
    {
        if (user.UserName == p)

            return true;
    }
    fin.close();
    return false;
}

bool User::AlreadyAvailableAdmin(string p)
{
    ifstream fin;
    fin.open("Admin.dat", ios::in | ios::binary);
    User user;
    while (fin.read((char *)&user, sizeof(user)))
    {
        if (user.UserName == p)

            return true;
    }
    fin.close();
    return false;
}


User User:: ManagerRegistrationMenu()
{
    int a1 = 0;
    cout << "\n\t\t\t\t\t Do you want to register/sign up via Email or CNIC? " << endl;
    cout << "\n\t\t\t\t\t 1.  Press 1 to register via Email..." << endl;
    cout << "\n\t\t\t\t\t 2.  Press 2 to register via CNIC..." << endl;
    cout << "\n\t\t\t\t\t Enter your Choice : ";
    cin >> a1;
    char uname[15];
    char pass[15];
    char cnic[15];
    char email[15];
    char RecoveryEmail[15];
    char phoneNum[15];
    char city[15];

    cout.setf(ios::left);
    if (a1 == 1)
    {   

        system("cls");
        bool upper1 = false;
        bool lower1 = false;
        bool digit1 = false;
        bool special1 = false;
        int flag = 0;

        ifstream fin;
        fin.open("Manager.dat", ios::in | ios::binary);
        cout << "\n\t\t\t\t\t1.  Enter your name: ";
        cin >> uname;
        bool status = AlreadyAvailableManager(uname);
        if (status)
        {
            cout << "Already Exist!..." << endl;
            cout << "\n\t\t\t\t\t Enter Again : "; 
            cin >> uname;
        }
        else if (!status)
            cout << "\n\t\t\t\t\t 2.  Enter your password: " ;
    jump1:

        cin >> Password;
        int size1 = strlen(Password);
        for (int i = 0; i < sizeof(Password); i++)
        {
            if (Password[i] >= 32 && Password[i] <= 47 || Password[i] >= 58 && Password[i] <= 95)
            {
                special1 = true;
            }
            if (Password[i] >= 48 && Password[i] <= 57)
            {
                digit1 = true;
            }
            if (Password[i] >= 65 && Password[i] <= 90)
            {
                upper1 = true;
            }
            if (Password[i] >= 97 && Password[i] <= 122)
            {
                lower1 = true;
            }
        }
        if (special1 == true && lower1 == true && upper1 == true && size1 == 8)
        {
            strcpy(pass, Password);
        }
        else
        {
            if (!upper1 || !lower1 || !special1 || !digit1 || size1 != 8)
            {
                cout << "\n\t\t\t\t\t Invalid Password! Please enter your password again!.." << endl;
                cout << "\n\t\t\t\t\t Enter the Password Agian : ";
                goto jump1;
            }
        }

        cout << "\n\t\t\t\t\t 3.  Enter your Email: " ;
        cin >> email;
        cout << "\n\t\t\t\t\t 1.  Please enter your Recovery email :  ";
        cin >> REcoveryEmail;
        cout << "\n\t\t\t\t\t 3.  Please enter your Phone Number ";
        cin >> PHoneNUm;
        cout << "\n\t\t\t\t\t 5.  Please enter your city name: ";
        cin >> City;

        strcpy(RecoveryEmail, REcoveryEmail);
        strcpy(phoneNum, PHoneNUm);
        strcpy(city, City);
        strcpy(cnic, "NO CNIC");
        User newUser(uname, pass, cnic, email, phoneNum, RecoveryEmail, city);
        return newUser;
    }
    else if (a1 == 2)
    {   
        system("cls");
        bool upper = false;
        bool lower = false;
        bool digit = false;
        bool special = false;
        ifstream fin;
        fin.open("Manager.dat", ios::in | ios::binary);
        cout << "\n\t\t\t\t\t 1.  Enter your name: " ;
        cin >> uname;
        bool status = AlreadyAvailableAdmin(uname);
        if (status)
        {
            cout << "\n\t\t\t\t\t Already Exist!..."<<endl;
            cout << "\n\t\t\t\t\t Enter Again : ";
            cin >> uname;
        }
        else if (!status)
            cout << "\n\t\t\t\t\t 2.  Enter your password: " ;
        cin >> Password;

    jump:
        cout << "\n\t\t\t\t\t Invalid Password! Please enter your password again!.." ;
        cin >> Password;
        int size = strlen(Password);
        for (int i = 0; i < sizeof(Password); i++)
        {
            if (Password[i] >= 32 && Password[i] <= 47 || Password[i] >= 58 && Password[i] <= 95)
            {
                special = true;
            }
            if (Password[i] >= 48 && Password[i] <= 57)
            {
                digit = true;
            }
            if (Password[i] >= 65 && Password[i] <= 90)
            {
                upper = true;
            }
            if (Password[i] >= 97 && Password[i] <= 122)
            {
                lower = true;
            }
        }
        if (special == true && lower == true && upper == true && size == 8)
        {
            strcpy(pass, Password);
            cout << "\n\t\t\t\t\t 3.  Enter your CNIC: " ;
            cin >> cnic;
            int size2 = strlen(cnic);
            if (size2 != 13)
            {
                cout << "\n\t\t\t\t\t CNIC is invalid! Please enter the CNIC again!..." ;
                cin >> cnic;
                size2 = strlen(cnic);
                while (size2 != 13)
                {
                    cout << "\n\t\t\t\t\t CNIC is invalid! Please enter the CNIC again!..." ;
                    cin >> cnic;
                    size2 = strlen(cnic);
                }
            }
        }
        else
        {
            if (!upper || !lower || !special || !digit || size != 8)
            {
                goto jump;
            }
        }

        cout << "\n\t\t\t\t\t 5.  Please enter your city name: " ;
        cin >> City;
        cout << "\n\t\t\t\t\t 1.  Please enter your Recovery email :  " ;
        cin >> REcoveryEmail;
        cout << "\n\t\t\t\t\t 3.  Please enter your Phone Number " ;
        cin >> PHoneNUm;
        strcpy(RecoveryEmail, REcoveryEmail);
        strcpy(phoneNum, PHoneNUm);
        strcpy(city, City);
        strcpy(email, "NO Email");
        User newUser(uname, pass, cnic, email, phoneNum, RecoveryEmail, city);
        return newUser;
    }
    return (User());
}

void User::RegisterManager()
{

    ofstream fout;
    fout.open("Manager.dat", ios::out | ios::app | ios::binary);
    User newUser = ManagerRegistrationMenu();
    system("cls");
    cout << "\n\t\t\t\t\t You have Successfully added a Manager" << endl;
    cout<<"\n\t\t\t\t\t ======================================================"<<endl;
    fout.write((char *)&newUser, sizeof(User));
    fout.close();
}
User User::CustomerRegistrationMenu()
{
    int a1 = 0;
    char uname[15];
    char pass[15];
    char cnic[15];
    char email[15];
    char RecoveryEmail[15];
    char phoneNum[15];
    char city[15];

    cout.setf(ios::left);
        bool upper = false;
        bool lower = false;
        bool digit = false;
        bool special = false;
        ifstream fin;
        fin.open("Admin.dat", ios::in | ios::binary);
        here:
            cout << "\n\t\t\t\t\t1.  Enter your name: ";
            cin >> uname;
            cout << "\n\t\t\t\t\t2.  Enter your password: ";
            cin >> Password;
    jump:
        int size = strlen(Password);
        for (int i = 0; i < sizeof(Password); i++)
        {
            if (Password[i] >= 32 && Password[i] <= 47 || Password[i] >= 58 && Password[i] <= 95)
            {
                special = true;
            }
            if (Password[i] >= 48 && Password[i] <= 57)
            {
                digit = true;
            }
            if (Password[i] >= 65 && Password[i] <= 90)
            {
                upper = true;
            }
            if (Password[i] >= 97 && Password[i] <= 122)
            {
                lower = true;
            }
        }
        if (special == true && lower == true && upper == true && size == 8)
        {
            strcpy(pass, Password);
            cout << "\n\t\t\t\t\t3.  Enter your CNIC: " ;
            cin >> cnic;
            int size2 = strlen(cnic);
            if (size2 != 13)
            {
                cout << "\n\t\t\t\t\tCNIC is invalid! Please enter the CNIC again!..." ;
                cin >> cnic;
                size2 = strlen(cnic);
                while (size2 != 13)
                {
                    cout << "\n\t\t\t\t\tCNIC is invalid! Please enter the CNIC again!...";
                    cin >> cnic;
                    size2 = strlen(cnic);
                }
            }
        }
        else
        {
            if (!upper || !lower || !special || !digit || size != 8)
            {
                goto jump;
            }
        }

        bool status = AlreadyAvailableCustomer(cnic);
        
        if(status)
        {
            cout << "\n\t\t\t\t\t...A Customer With this CNiC Already Exists!!!!!!" ;
            cout << "\n\t\t\t\t\tEnter the Details Agaian..." << endl;
            goto here;
        }

        else{
            cout << "\n\t\t\t\t\t5.  Please enter your city name: " ;
            cin >> City;
            cout << "\n\t\t\t\t\t1.  Please enter your Recovery email :  ";
            cin >> REcoveryEmail;
            cout << "\n\t\t\t\t\t3.  Please enter your Phone Number " ;
            cin >> PHoneNUm;
            strcpy(RecoveryEmail, REcoveryEmail);
            strcpy(phoneNum, PHoneNUm);
            strcpy(city, City);
            strcpy(email, Email);
            User newUser(uname, pass, cnic, email, phoneNum, RecoveryEmail, city);
            return newUser;
        }
    }

void User::RemoveCustomer()
    {
        bool check = 0;
        jump55:
        fstream fbin;
        fbin.open("Customer.dat", ios::binary | ios::out | ios::in);
        fbin.seekg(0);
        string uname;
        cout << "\n\t\t\t\t\t Enter the CNIC of the Customer that you want to Remove : ";
        cin >> uname;

        while (fbin.read((char *)&u, sizeof(u)))
        {
            if (uname == u.CNIC)
            {
                check = 1;

                cout << "\n\t\t\t\t\t =================== Record Found ====================";
                cout << "\n\t\t\t\t\t Customer Name : " << u.UserName << endl;
                cout << "\n\t\t\t\t\t Customer Cnic  : " << u.CNIC << endl;

                strcpy(u.UserName, "(*&*(&*");
                fbin.seekp(-sizeof(u), ios::cur);
                fbin.write((char *)&u, sizeof(u));
                system("cls");
                cout << "\n\t\t\t\t\t ============== The Customer has been Removed =============" << endl
                     << endl;
            }
        }
        if (check == 0)
        {
            cout << "\n\t\t\t\t\t The is no Customer with this name.... " << endl;
            goto jump55;
        }
        fbin.close();
    }
    
User User::AdminRegistrationMenu()
    {
        int a1 = 0;
        cout << "\n\t\t\t\t\t Do you want to register/sign up via Email or CNIC? " << endl;
        cout << "\n\t\t\t\t\t 1.  Press 1 to register via Email..." << endl;
        cout << "\n\t\t\t\t\t 2.  Press 2 to register via CNIC..." << endl;
        cout<<"\n\n\n\t\t\t\t\tEnter your Choice : ";
        cin >> a1;
        char uname[15];
        char pass[15];
        char cnic[15];
        char email[15];
        char years[15];
        char availability[15];
        char city[15];

        cout.setf(ios::left);
        if (a1 == 1)
        {
            bool upper1 = false;
            bool lower1 = false;
            bool digit1 = false;
            bool special1 = false;
            int flag = 0;

            ifstream fin;
            fin.open("Admin.dat", ios::in | ios::binary);
            system("cls");
            cout << "\n\n\t\t\t\t\t1.  Enter your name: ";
            cin >> uname;
            bool status = AlreadyAvailableAdmin(uname);
            if (status)
            {
                cout << "\n\t\t\t\t\tAlready Exist!..." << endl;
                cout<<"\n\n\n\t\t\t\t\tEnter Again : ";
                cin >> uname;
            }
            else if (!status)
                cout << "\n\t\t\t\t\t2.  Enter your password : ";
        jump1:

            cin >> Password;
            int size1 = strlen(Password);
            for (int i = 0; i < sizeof(Password); i++)
            {
                if (Password[i] >= 32 && Password[i] <= 47 || Password[i] >= 58 && Password[i] <= 95)
                {
                    special1 = true;
                }
                if (Password[i] >= 48 && Password[i] <= 57)
                {
                    digit1 = true;
                }
                if (Password[i] >= 65 && Password[i] <= 90)
                {
                    upper1 = true;
                }
                if (Password[i] >= 97 && Password[i] <= 122)
                {
                    lower1 = true;
                }
            }
            if (special1 == true && lower1 == true && upper1 == true && size1 == 8)
            {
                strcpy(pass, Password);
            }
            else
            {
                if (!upper1 || !lower1 || !special1 || !digit1 || size1 != 8)
                {
                    cout << "\n\n\n\t\t\t\t\tInvalid Password! Please enter your password again!.." << endl;
                    cout << "\n\n\n\t\t\t\t\tEnter the Password Agian : ";
                    goto jump1;
                }
            }

            cout << "\n\t\t\t\t\t3.  Enter your Email : " ;
            cin >> email;
            cout << "\n\t\t\t\t\t\n\t\t\t\t\t1.  Please enter your experience years: " ;
            cin >> YearsOfExperience;
            cout << "\n\t\t\t\t\t3.  Please enter your Availability Hours: ";
            cin >> AvailablityHours;
            cout << "\n\t\t\t\t\t5.  Please enter your city name: ";
            cin >> City;

            strcpy(availability, AvailablityHours);
            strcpy(years, YearsOfExperience);
            strcpy(city, City);
            strcpy(cnic, "NO CNIC");
            User newUser(uname, pass, cnic, email, years, availability, city);
            return newUser;
        }
 else if (a1 == 2)
        {
            bool upper = false;
            bool lower = false;
            bool digit = false;
            bool special = false;
            ifstream fin;
            fin.open("Admin.dat", ios::in | ios::binary);
            cout << "\n\n\n\t\t\t\t\t1.  Enter your name: " ;
            cin >> uname;
            bool status = AlreadyAvailableAdmin(uname);
            if (status)
            {
                cout << "\n\t\t\t\t\tAlready Exist!..." ;
                cin >> uname;
            }
            else if (!status)
                cout << "\n\n\n\t\t\t\t\t2.  Enter your password: ";
            cin >> Password;

        jump:
            cout << "\n\n\n\t\t\t\t\tInvalid Password! Please enter your password again!..";
            cin >> Password;
            int size = strlen(Password);
            for (int i = 0; i < sizeof(Password); i++)
            {
                if (Password[i] >= 32 && Password[i] <= 47 || Password[i] >= 58 && Password[i] <= 95)
                {
                    special = true;
                }
                if (Password[i] >= 48 && Password[i] <= 57)
                {
                    digit = true;
                }
                if (Password[i] >= 65 && Password[i] <= 90)
                {
                    upper = true;
                }
                if (Password[i] >= 97 && Password[i] <= 122)
                {
                    lower = true;
                }
            }
            if (special == true && lower == true && upper == true && size == 8)
            {
                strcpy(pass, Password);
                cout << "\n\n\n\t\t\t\t\t3.  Enter your CNIC: " ;
                cin >> cnic;
                int size2 = strlen(cnic);
                if (size2 != 13)
                {
                    cout << "\n\n\n\t\t\t\t\tCNIC is invalid! Please enter the CNIC again!..." ;
                    cin >> cnic;
                    size2 = strlen(cnic);
                    while (size2 != 13)
                    {
                        cout << "\n\n\n\t\t\t\t\tCNIC is invalid! Please enter the CNIC again!..." ;
                        cin >> cnic;
                        size2 = strlen(cnic);
                    }
                }
            }
            else
            {
                if (!upper || !lower || !special || !digit || size != 8)
                {
                    goto jump;
                }
            }
            cout << "\n\n\n\t\t\t\t\t1.  Please enter your experience years : ";
            cin >> YearsOfExperience;
            cout << "Please Enter your availability hours : ";
            cin >> AvailablityHours;
            cout << "\n\n\n\t\t\t\t\t5.  Please enter your city name : ";
            cin >> City;
            strcpy(years, YearsOfExperience);
            strcpy(availability, AvailablityHours);
            strcpy(city, City);
            strcpy(email, "NO Email");
            User newUser(uname, pass, cnic, email, years, availability, city);
            return newUser;
        }
        return (User());
}

void Catalogue::AddCatalogue()
{
    cout << "\n\t\t\t\t\t Enter the Name of the Item : ";
    cin>>ct.productname;
    cout << "\n\t\t\t\t\t Enter the Price of the Item : ";
    cin>>ct.priceofItem;
    ofstream fout;
    fout.open("Catalogue.dat", ios::out | ios::app | ios::binary);
    fout.write((char *)&ct, sizeof(ct));
    fout.close();
    system("cls");
    cout << "\n\t\t\t\t\t The product has been added Successfully " << endl;
    
}

void Catalogue::RemoveCatalogue()
{
    bool check = 0;
    jump55:
    fstream fbin;
    fbin.open("Catalogue.dat", ios::binary | ios::out | ios::in);
    fbin.seekg(0);
    string uname;
    cout << "\n\t\t\t\t\t Enter the name of the Prodcut You want to Remove : ";
    cin >> uname;
    // Inventory ptr;
    // fstream fbin;
    while (fbin.read((char *)&ct, sizeof(ct)))
    {
        if (uname == ct.productname)
        {
            check = 1;
            cout << "\n\t\t\t\t\t Item Name : " << ct.productname << endl;
            cout << "\t\t\t\t\t Item Quantity : " << ct.priceofItem << endl;
            strcpy(ct.productname, "(*&*(&*");
            ct.priceofItem = 0;
            fbin.seekp(-sizeof(ct), ios::cur);
            fbin.write((char *)&ct, sizeof(ct));
            system("cls");
            cout << "\n\t\t\t\t\t =================The item has been Removed====================" << endl
                 << endl;
        }
    }
    if (check == 0)
    {
        cout << "No item with this Name in the Inventory " << endl;
        goto jump55;
    }
    fbin.close();
}


void Catalogue::updateItemCatalogue()
{   
    bool check = 0;
jump16:
    system("cls");
    fstream fbin;
    fbin.open("Catalogue.dat", ios::binary | ios::out | ios::in);
    fbin.seekg(0);
    string uname;
    cout << "\n\t\t\t\t\t Enter the name of the Prodcut You want to Update : ";
    cin >> uname;
    while (fbin.read((char *)&ct, sizeof(ct)))
    {
        if (uname == ct.productname)
        {
            check = 1;
            cout << "\n\t\t\t\t\t ======================Record Found========================" << endl;
            cout << "\n\t\t\t\t\t Item Name : " << ct.productname << endl;
            cout << "\n\t\t\t\t\t Item Price : " << ct.priceofItem << endl;

            cout << "\n\t\t\t\t\t Enter the new price of the " << ct.productname << " : ";
            cin >> ct.priceofItem;
            fbin.seekp(-sizeof(ct), ios::cur);
            fbin.write((char *)&ct, sizeof(ct));

            system("cls");
            cout << "\n\t\t\t\t\t ===================The item has been Updated=====================" << endl<< endl;
                }
    }
    if (check == 0)
    {
        cout << " \n\t\t\t\t\t No item with this Name in the Inventory " << endl;
        goto jump16;
    }
    fbin.close();
}

void User::ManagerLogin()
{
    bool check = 0;
jump16:
   
    string uname, pass;
    cout << "\n\t\t\t\t\t =================Logging in as Manager========================" << endl;
    cout << "\n\t\t\t\t\t Enter your username :";
    cin >> uname;
    ifstream fin;
    fin.open("Manager.dat", ios::in | ios::binary);
    User user3;
    while (fin.read((char *)&user3, sizeof(user3)))
    {
       
        if (uname == user3.UserName)
        {
            check = 1;
        jump14:
            cout << "\n\t\t\t\t\t " << user3.UserName << " enter Your Password : ";
            cin >> pass;
            if (pass == user3.Password)
            {   
                system("cls");
                cout << "\n\t\t\t\t\t Welcome " << user3.UserName << "........" << endl;
                cout << "\n\t\t\t\t\t ==============You have been Logged In Successfully===============" << endl;
            }

            else if (pass != user3.UserName)
            {
                cout << "\n\t\t\t\t\t The Password that you entered is Incorrect..." << endl;
                goto jump14;
            }
        }
    }

    if (check == 0)
    {
        cout << "\n\t\t\t\t\t!!!!!!!!!!!!!!!====Incorrect Username=====!!!!!!!!!!!" << endl;
        cout << "\n\t\t\t\t\tEnter the Username Again : " << endl;
        goto jump16;
    }
    fin.close();
}

void User::RegisterAdmin()
{
    ofstream fout;
    fout.open("Admin.dat", ios::out | ios::app | ios::binary);
    User newUser = AdminRegistrationMenu();
    fout.write((char *)&newUser, sizeof(User));
    fout.close();
    system("cls");
    cout<<"\n\t\t\t\t\t========================================================"<<endl;
    cout << "\n\t\t\t\t\tYou are registered successfully...." << endl;
}

void User::RegisterCustomer()
{
    ofstream fout;
    fout.open("Customer.dat", ios::out | ios::app | ios::binary);
    User newUser = CustomerRegistrationMenu();
    
    fout.write((char *)&newUser, sizeof(User));
    fout.close();
    cout << "\n\n\t\t\t\t\t\t/tCustomer is registered successfully...." << endl;
}

void Inventory::showInventory(){
    cout << "\n\t\t\t\t\t ====================================Inventory===============================" << endl;
    cout << "\n\t\t\t\t\t =============================================================================" << endl;
    cout << right << setw(48) << "Product" << right << setw(40)<<"Availability" << right << setw(30)<<" Quantity" << endl;
    cout
        << "\n\t\t\t\t\t ================================================================================" << endl;
    ifstream fin;
    Inventory showObj;
    fin.open("Inventory.dat", ios::out | ios::app | ios::binary);
    while (fin.read((char *)&showObj, sizeof(showObj)))
    {
        if (int(showObj.name[0]) >= 65 && int(showObj.name[0]) <= 90 || int(showObj.name[0]) >= 97 && int(showObj.name[0]) <= 122)
        {
            if (int(showObj.name[1]) >= 65 && int(showObj.name[1]) <= 90 || int(showObj.name[1]) >= 97 && int(showObj.name[1]) <= 122)
            {
                if(showObj.Quantity==0)
                    cout << right << setw(10) << showObj.name << right << setw(30) << "Not Availabel" <<right << setw(30) << showObj.Quantity << endl;
                else
                    cout << right << setw(48) << showObj.name << right << setw(40) << "Availabel" << right << setw(30) << showObj.Quantity << endl;
            }
        }
    }

    cout << "\n\t\t\t\t\t ====================================================================================" << endl<<endl;
}

void Catalogue::showCatalogue()
{
    system("cls");
    cout << "\n\t\t\t\t =======================Catalogue======================" << endl;
    cout << "\n\t\t\t\t ======================================================" << endl;
    cout << "\n\t\t\t\t\t Product" << right << setw(30) << " Price " << endl;
    cout << "\n\t\t\t\t =======================================================" << endl;
    ifstream fin;
    Cart cc;
    fin.open("Catalogue.dat", ios::out | ios::app | ios::binary);
    if(!fin){
        cout<<"The file is not Opened"<<endl;
    }
    while (fin.read((char *)&cc, sizeof(cc)))
    {
        if (int(cc.productname[0]) >= 65 && int(cc.productname[0]) <= 90 || int(cc.productname[0]) >= 97 && int(cc.productname[0]) <= 122)
        {
            if (int(cc.productname[1]) >= 65 && int(cc.productname[1]) <= 90 || int(cc.productname[1]) >= 97 && int(cc.productname[1]) <= 122)
            {
                cout << right << setw(46) << cc.productname << right << setw(30) << cc.priceofItem ;
            }
        }
    }
    fin.close();
    cout << "\n\t\t\t\t =======================================================" << endl;
}

void Inventory::showMenutoManager()
{
jump11:
    int n;
    cout << "\n\t\t\t\t\t Press 1 to add an Item to the Inventory" << endl;
    cout << "\n\t\t\t\t\t Press 2 to Remove Item from the Inventory" << endl;
    cout << "\n\t\t\t\t\t Press 3 to Update Item from the Inventory" << endl;
    cout << "\n\t\t\t\t\t Press 4 to Show Inventory" << endl<<endl;
    cout << "\n\t\t\t\t\t Enter your Your choice : ";
    cin >> n;

    // Adding the item
    if (n == 1)
    {   
        system("cls");
        cout << "\n\t\t\t\t\t Enter the Name of the Item That You want to Add : ";
        cin >> In.name;
        cout << "\n\t\t\t\t\t Enter the Quantity of the Product : ";
        cin >> In.Quantity;
        ofstream fout;
        fout.open("Inventory.dat", ios::out | ios::app | ios::binary);
        fout.write((char *)&In, sizeof(User));

        fout.close();
        cout << "\n\t\t\t\t\t ================You have entered the Item into the Inventory.==============" << endl;
        goto jump11;
    }
    // Removing Item from Inventory
    else if (n == 2)
    {
        bool check = 0;
    jump55:
        fstream fbin;
        fbin.open("Inventory.dat", ios::binary | ios::out | ios::in);
        fbin.seekg(0);
        string uname;
        cout << "\n\t\t\t\t\t Enter the name of the Prodcut You want to Remove : ";
        cin >> uname;
        while (fbin.read((char *)&In, sizeof(In)))
        {
            if (uname == In.name)
            {
                check = 1;
                cout << "\n\t\t\t\t\tItem Name : " << In.name << endl;
                cout << "\n\t\t\t\t\t Item Quantity : " << In.Quantity << endl;
                strcpy(In.name, "(*&*(&*");
                In.Quantity = 0;
                fbin.seekp(-sizeof(In), ios::cur);
                fbin.write((char *)&In, sizeof(In));
                cout << "\n\t\t\t\t\t ===================== The item has been Removed ===================" << endl<< endl;
                system("cls");
                goto jump11;
            }
        }
        if (check == 0)
        {
            cout << "\n\t\t\t\t\t No item with this Name in the Inventory " << endl;
            goto jump55;
        }
        fbin.close();
    }
    // Updating the Inventory
    else if (n == 3)
    {
        bool check = 0;
    jump16:
        system("cls");
        fstream fbin;
        fbin.open("Inventory.dat", ios::binary | ios::out | ios::in);
        fbin.seekg(0);
        string uname;
        cout << "\n\t\t\t\t\t Enter the name of the Prodcut You want to Update : ";
        cin >> uname;

        while (fbin.read((char *)&In, sizeof(In)))
        {
            if (uname == In.name)
            {
                check = 1;
                cout << "\n\t\t\t\t\t ==============Record Found=================" << endl;
                cout << "\n\t\t\t\t\t Item Name : " << In.name << endl;
                cout << "\n\t\t\t\t\t Item Quantity : " << In.Quantity << endl;

                cout << "\n\t\t\t\t\t Enter the new Quantity of the " << In.name << " : ";
                cin >> In.Quantity;
                fbin.seekp(-sizeof(In), ios::cur);
                fbin.write((char *)&In, sizeof(In));

                cout << "\n\t\t\t\t\t ==================The item has been Updated====================" << endl<< endl;
                goto jump11;
            }
        }
        if (check == 0)
        {   
            cout << "\n\t\t\t\t\t No item with this Name in the Inventory " << endl;
            goto jump16;
        }
        fbin.close();
    }

    // Showing the Inventory
    else if (n == 4)
    {
        system("cls");
        showInventory();
        goto jump11;
    }
    }

void User::RemoveManager(){
    bool check = 0;
    jump55:
    fstream fbin;
    fbin.open("Manager.dat", ios::binary | ios::out | ios::in);
    fbin.seekg(0);
    string uname;
    cout << "\n\t\t\t\t\t Enter the name of the Manager you want to Remove : ";
    cin >> uname;
    while (fbin.read((char *)&u, sizeof(u)))
    {
        if (uname == u.UserName)
        {
            check = 1;
            cout << "\n\t\t\t\t\t Removing....." << u.UserName << endl;
            strcpy(u.UserName, "(*&*(&*");
            fbin.seekp(-sizeof(u), ios::cur);
            fbin.write((char *)&u, sizeof(u));
            cout << "\n\t\t\t\t\t ====================The Manager has been Removed ========================" << endl
                 << endl;
        }
    }
    if (check == 0)
    {
        cout << " \n\t\t\t\t\t There is no Manager With this name " << endl;
        goto jump55;
    }
    fbin.close();
};

void User::ShowCustomer()
{

    cout << "\n\t\t\t\t\t =================================== List of Customers ==============================" << endl;
    cout << "\n\t\t\t\t\t ====================================================================================" << endl;
    cout << "\n\t\t\t\t\t Customer " << right << setw(30) << " CNIC " << right << setw(30) << " City " << endl;
    cout << "\n\t\t\t\t\t ====================================================================================" << endl;
    ifstream fin;
    User TempUser;

    fin.open("Customer.dat", ios::out | ios::app | ios::binary);
    while (fin.read((char *)&TempUser, sizeof(TempUser)))
    {
        if (int(TempUser.UserName[0]) >= 65 && int(TempUser.UserName[0]) <= 90 || int(TempUser.UserName[0]) >= 97 && int(TempUser.UserName[0]) <= 122)
        {
            if (int(TempUser.UserName[1]) >= 65 && int(TempUser.UserName[1]) <= 90 || int(TempUser.UserName[1]) >= 97 && int(TempUser.UserName[1]) <= 122)
            {
                cout << right << setw(48) << TempUser.UserName << right << setw(40) << TempUser.CNIC << right << setw(30) << TempUser.City << endl<<endl;
            }
        }
    }
}
void User ::ShowManagers()
{

    system("cls");
    cout << "\n\t\t\t\t\t ====================================List of Managers===============================" << endl;
    cout << "\n\t\t\t\t\t ===================================================================================" << endl;
    cout << "\n\t\t\t\t\t Manager" << right << setw(30) << " CNIC" << right << setw(30) << "City " << endl;
    cout << "\n\t\t\t\t\t ================================================================================" << endl;
    ifstream fin;
    User TempUser;

    fin.open("Manager.dat", ios::out | ios::app | ios::binary);
    while (fin.read((char *)&TempUser, sizeof(TempUser)))
    {
        if (int(TempUser.UserName[0]) >= 65 && int(TempUser.UserName[0]) <= 90 || int(TempUser.UserName[0]) >= 97 && int(TempUser.UserName[0]) <= 122)
        {
            if (int(TempUser.UserName[1]) >= 65 && int(TempUser.UserName[1]) <= 90 || int(TempUser.UserName[1]) >= 97 && int(TempUser.UserName[1]) <= 122)
            {
                cout << "\n\t\t\t\t\t " << TempUser.UserName << right << setw(30) << TempUser.CNIC << right << setw(30) << TempUser.City << endl;
            }
        }
    }

    cout << "\n\t\t\t\t\t ====================================================================================" << endl
         << endl;
}
int Cart::MenutoCustomers ()
{
    int num;
    cout << "\n\t\t\t\t\t=========================  Welcome to Grocery Shopping ======================" << endl;
    cout<<endl<<endl;
    cout << "\n\t\t\t\t\t Press 0 - Log out " ;
    cout << "\n\t\t\t\t\t Press 1 - Add Items to the Cart " ;
    cout << "\n\t\t\t\t\t Press 2 - Change Password " ;
    cout<<"\n\t\t\t\t\t Enter your Choice : ";
    cin>>num; 
    return num;
}

void Cart ::MenutoCustomers2()
{   

    first:   
    bool check =0;
    char tempname[20];
    int Quan;

    cout << "\n\t\t\t\t\t Enter the name of the Product that you want to Add to Cart : ";
    cin >> tempname;

    cout << "\n\t\t\t\t\t Enter the Quantity that you want : ";
    cin >> Quan;

    Temporary temp;

    strcpy(temp.name, tempname);
    temp.Quantity = Quan;

    ofstream tempbin;
    tempbin.open("Quantity.dat", ios::binary | ios::out | ios::app);
    tempbin.write((char *)&temp, sizeof(temp));
    tempbin.close();

    // Cart Process Start

    Cart newobj;
    ifstream fbin;

    fbin.open("Catalogue.dat", ios::binary | ios::out | ios::in);

    while (fbin.read((char *)&newobj, sizeof(newobj)))
    {
        if (strcmp(tempname, newobj.productname) == 0)
        {
            check = 1;

            char n[20];
            strcpy(n, newobj.productname);
            int pp = newobj.priceofItem;

            cout << "\n\t\t\t\t\t Item Name : " << n << right << setw(30) << "Item Price : " << pp << endl;
            ofstream ifbin;
            ifbin.open("Cart.dat", ios::binary | ios::out | ios::in | ios::app);
            ifbin.write((char *)&newobj, sizeof(newobj));

            cout << "\n\t\t\t\t\t ==========The item has been Added to the Cart ===========" << endl
                 << endl;

            int askagain;
            cout << "\n\t\t\t\t\t 1 - Add more items to the cart " << endl;
            cout << "\n\t\t\t\t\t 2 - Checkout and Payment " << endl;
            cout << "\n\t\t\t\t\t Enter your Choice : ";
            cin >> askagain;

            if (askagain == 1)
            {
                system("cls");
                newobj.showCatalogue();
                goto first;
            }
            fstream fbin;
            fbin.open("Catalogue.dat", ios::binary | ios::out | ios::in);
        }
        }


                fbin.close();



        if (check == 0)
        {
            cout << "\n\t\t\t\t\t There is no item with this name in the Cart " << endl;
        }

}
int Cart::showCart()
{

    int tempHold =0;
    int totalPrice = 0;
    cout << "\n\t\t\t\t\t================================= Your Cart ==================================" << endl;
    cout << "\n\t\t\t\t\t==============================================================================" << endl;
    cout << right <<"\n\t\t\t\t\t"<< "Product" << right << setw(30) << " Price Per Item " << right << setw(30) << " Quantity  " << endl;
    cout << "\n\t\t\t\t\t==============================================================================" << endl;
    ifstream fin;
    Cart cc;

    fin.open("Cart.dat", ios::out | ios::app | ios::binary);
    if (!fin)
    { 
        cout << "The file is not Opened" << endl;
    }
    while (fin.read((char *)&cc, sizeof(cc)))
    {   
        if (int(cc.productname[0]) >= 65 && int(cc.productname[0]) <= 90 || int(cc.productname[0]) >= 97 && int(cc.productname[0]) <= 122)
        {
            if (int(cc.productname[1]) >= 65 && int(cc.productname[1]) <= 90 || int(cc.productname[1]) >= 97 && int(cc.productname[1]) <= 122)
            {   
                Temporary quantityobj;
                ifstream ifstr;
                ifstr.open("Quantity.dat", ios::app | ios::binary);

                while (ifstr.read((char *)&quantityobj, sizeof(quantityobj)))
                {   
                    if(strcmp(cc.productname,quantityobj.name) == 0)
                    {
                        cout << right << "\n\t\t\t\t\t" << quantityobj.name << right << setw(30) << cc.priceofItem << right << setw(30) << quantityobj.Quantity << endl;
                        totalPrice += cc.priceofItem * quantityobj.Quantity;
                    }
                }      
            }
        }
    }
    cout<<"\n\t\t\t\t\tYour total Bill is : "<<totalPrice<<endl;
    fin.close();
    cout << "\n\t\t\t\t\t=============================================" << endl<< endl;
    
    return totalPrice ;

}
void User::ChangeCustomerPassword()
{
    fstream fbin;
    fbin.open("Customer.dat", ios::binary | ios::out | ios::in);
    fbin.seekg(0);
    char Cnic[20];
    cout << "Enter your Cnic ";
    cin >> Cnic;
    User tempOBJ;

    while (fbin.read((char *)&tempOBJ, sizeof(tempOBJ)))
    {   
        if (strcmp(Cnic,tempOBJ.CNIC)== 0)
        {   
            
            cout << "Enter the new Password : ";
            cin>>Cnic;

            //tempOBJ.CNIC = Cnic;
            strcpy(tempOBJ.CNIC,Cnic);
            fbin.seekp(-sizeof(tempOBJ), ios::cur);
            fbin.seekp(-sizeof(tempOBJ), ios::cur);
            fbin.write((char *)&tempOBJ, sizeof(tempOBJ));

            cout << "========== Your Password has been Changed =======" << endl<< endl;
        }

        else 
        cout<<"NOooooo"<<endl;
    }
}

int main()
        {   
            system("cls");
            Cart cc;
            User TempUser;
            int num = 0;
            int ask;
        jump11:
            cout << "\n\n\n\t\t\t\t\t========================Grocery Store Program=========================" << endl;
            cout << "\n\n\t\t\t\t\t       ======================= HomePage =========================" << endl;
            cout << endl;
            cout << endl;

            cout << "\t\t\t\t\tPress 1 If you are a New User " << endl;
            cout << "\n\t\t\t\t\tPress 2 If you are an ALready User " << endl;
            cout << "\n\t\t\t\t\tEnter your choice : ";
            cin >> ask; 

            while(ask!=1 && ask!=2)
            {
                cout << "\n\t\t\t\t\tIncorrect Choice \n\t\t\t\t\tEnter the choice Again : ";
                cin>>ask;
            }
            if (ask ==1)
                {
                    u.Menu();
                    do
                    {
                        cout << "\n\t\t\t\t\tEnter your choice : ";
                        cin >> num;
                        if (num == 1)
                        {   
                        system("cls");
                            cout<<"\n\n\n\t\t\t\t\t========================= Registering You as Admin ==================================================="<<endl;
                            User user1;
                            user1.RegisterAdmin();
                            goto jump11;
                        }
                        else if (num == 2)
                        {   
                            system("cls");
                            cout << "\n\n\n\t\t\t\t\t========================= Registering You as Customer ===================================================" << endl;
                            User u1;
                            u1.RegisterCustomer();
                            goto jump11;
                        }
                    } while (num);
                }
            if (ask ==2)
            {
                do
                {
                    u.Menu1();
                    cout << "\n\t\t\t\t\tEnter your choice : ";
                    cin >> num;
                    // Admin Login
                    if (num == 1)
                    {   
                        system("cls");
                        int temp = 0;
                        User user1, User2;
                        user1.AdminsLogin();

                    head:
                        cout<<"\n\t\t\t\t\t Log Out "<<endl;
                        cout << "\n\t\t\t\t\t 1-Add a Manager " << endl;
                        cout << "\n\t\t\t\t\t 2-Add a New Item to the Catalogue " << endl;
                        cout << "\n\t\t\t\t\t 3-Remove an Item from the Catalogue " << endl;
                        cout << "\n\t\t\t\t\t 4-Update an Item From the Catalogue " << endl;
                        cout << "\n\t\t\t\t\t 5-Show Catalogue " << endl;
                        cout << "\n\t\t\t\t\t 6-Remove a Manager " << endl;
                        cout << "\n\t\t\t\t\t 7-Remove a Customer " << endl;

                        cout << "\n\t\t\t\t\t Enter your choice : ";
                        cin >> temp;

                        system("cls");
                        
                        //Adding Manager
                        if (temp == 1)
                        {
                            User2.RegisterManager();
                            goto head;
                        }
                        //Adding Product
                        if (temp == 2)
                        {
                            ShowCatalogueAddMenu();
                            ct.AddCatalogue();
                            goto head;
                        }
                        //removing item 
                        if (temp == 3)
                        {
                            ct.RemoveCatalogue();
                            goto head;
                        }
                        //Updating the Price of an Item
                        if (temp == 4)
                        {
                            ct.updateItemCatalogue();
                            goto head;
                        }
                        //Show Catalogue
                        if (temp == 5)
                        {
                            system("cls");
                            ct.showCatalogue();
                            goto head;
                        }
                         //remove a Manager 
                        if (temp == 6)
                        {
                            User2.ShowManagers();
                            User2.RemoveManager();
                            User2.ShowManagers();
                            goto head;
                        }
                        //Remove a Customer
                        if (temp == 7)
                        {

                            system("cls");
                            User2.ShowCustomer();
                            User2.RemoveCustomer();
                            User2.ShowCustomer();

                            goto head;
                        }
                        //Log Out
                        if(temp == 0)
                        {
                            goto jump11;
                        }
                    }
                    // Customer Login
                    else if (num == 2)
                    {
                        User user2;
                        user2.CustomerLogin();
                        system("cls");
                        int num = 0;
                        jumpsoon : 
                        num = cc.MenutoCustomers();
                        //Cart
                        if(num==1)
                        {
                            cc.showCatalogue();
                            cc.MenutoCustomers2();
                            system("cls");
                            int val =  cc.showCart();


                            int num;
                            cout << "\n\t\t\t\t\t Press 1 for Payments " << endl;
                            cout << "\n\t\t\t\t\t Press 2 to Discard cart " << endl;
                            cout << "\n\t\t\t\t\t Enter your Choice : ";
                            cin>>num;

                            if(num == 1){
                                int c = 0;
                                cout << "\n\t\t\t\t\t 1 - Jazzcash"<<endl;
                                cout << "\n\t\t\t\t\t 2 - Easypesa"<<endl;
                                cout << "\n\t\t\t\t\t 3 - Debit Card"<<endl;
                                cout << "\n\t\t\t\t\t Enter your Choice : ";
                                cin>>c;
                                if(c == 1)
                                {
                                    system("cls");
                                    char arr[100];
                                    cout << "\n\t\t\t\t\t Enter your Jazzcash Number : ";
                                    cin>>arr;
                                    cout << "\n\t\t\t\t\t Press ok on your Phone "<<endl;
                                    cout << "\n\t\t\t\t\t Press 1 if you have pressed ok  : ";
                                    cin>>arr;

                                    cout << "\n\t\t\t\t\t Enter your Feedback : " << endl;
                                    cin>>arr;
                                    system("cls");
                                    goto jumpsoon;
                                    cout << "\n\t\t\t\t\t Thank You For SHopping "<<endl;
                                }

                                else if(c == 2)
                                {   
                                    system("cls");
                                    char arr[100];
                                    cout << "\n\t\t\t\t\t Enter your Easypesa Number : ";
                                    cin >> arr;
                                    cout << "\n\t\t\t\t\t Press ok on your Phone " << endl;
                                    cout << "\n\t\t\t\t\t Press 1 if you have pressed ok  : ";
                                    cin >> arr;

                                    cout << "\n\t\t\t\t\t Enter your Feedback : " << endl;
                                    cin >> arr;
                                    system("cls");
                                    goto jumpsoon;
                                    cout << "\n\t\t\t\t\t Thank You For SHopping " << endl; 
                                }

                                else if (c == 3)
                                {
                                    system("cls");
                                    char arr[100];
                                    cout << "\n\t\t\t\t\t Enter your Bank Account Name :  ";
                                    cin >> arr;
                                    cout << "\n\t\t\t\t\t Enter your Bank Account Number : ";
                                    cin>>arr;
                                    cout << "\n\t\t\t\t\t Press ok on your Phone " << endl;
                                    cout << "\n\t\t\t\t\t Press 1 if you have pressed ok  : ";
                                    cin >> arr;
                                    cout << "\n\t\t\t\t\t Enter your Feedback : " << endl;
                                    cin >> arr;
                                    system("cls");
                                    goto jumpsoon;
                                    cout << "\n\t\t\t\t\t Thank You For SHopping " << endl;
                                }
                            }
                        }
                        //Change Password Customer
                        else if(num ==2)
                        {
                            TempUser.ChangeCustomerPassword();
                        }
                        //Coming to the Homepage
                        else if(num == 0)
                        {
                            goto jump11;
                        }
                    }
                    // Manager Login
                    else if (num == 3)
                    {
                        User User3;
                        User3.ManagerLogin();
                        In.showMenutoManager();
                    }

                    cout << "Press 1 to Continue or press 0  to Exit " << endl;
                    cin >> num;
                } while (num);

                system("pause");
            }


            cout<<"\n\t\t\t\t\tThe Program is Shutting Down"<<endl;
            return 0;
        }
