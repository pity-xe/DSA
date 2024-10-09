#include <iostream>
#include <fstream>

using namespace std;

class shopping
{
    private:
        int pcode; 
        float price;
        float discount;
        string pname;

        public:
           void menu();
           void administrator();
           void buyer();
           void add();
           void edit();
           void rem();
           void list();
           void receipt();
    

};

void shopping :: menu()
{
    m:
    int choice;
    string email;
    string password;

    cout << "\t\t\t\t*******************************\n";
    cout << "\t\t\t\t                               \n";
    cout <<"\t\t\t\t     Supermarket Main Menu      \n";
    cout << "\t\t\t\t                               \n";
    cout << "\t\t\t\t*******************************\n";

    cout << "\t\t\t\t|  1) Administrator  |\n";
    cout << "\t\t\t\t|                    |\n";
    cout << "\t\t\t\t|  2) Buyer          |\n";
    cout << "\t\t\t\t|                    |\n";
    cout << "\t\t\t\t|  3) Exit           |\n";
    cout << "\t\t\t\t|                    |\n";
    cout << "\n\t\t\t Please Select!";
    cin >> choice;

    switch (choice)
    {
    case 1:
        /* code */
        cout <<"\t\t\t Please Login \n";
        cout << "\t\t\t Enter Email  \n";
        cin >>email;
        cout << "\t\t\t Enter Password   \n";
        cin >> password;

        if(email =="preetiwaghgmail.com" && password == "preeti02" )
        {
            administrator();
        }
        else{
            cout << "invalid mail/password";
        }
        break;
    case 2:
        {
            buyer();
        }
    case 3:
        {
            exit(0);
        }

    
    default:
         {
            cout << "Please select from the given options.";
         }
        break;
    }
  goto m;  
}

void shopping :: administrator()
{
    m:
    int choice;
    cout << "\n\n\n\t\t\t|_______Administrator menu";
    cout << "\n\t\t\t|_______1)Add the product________|";
    cout << "\n\t\t\t|                                |";
    cout << "\n\t\t\t|_______2)Modify the product_____|";
    cout << "\n\t\t\t|                                |";
    cout << "\n\t\t\t|_______3)Delete the product_____|";
    cout << "\n\t\t\t|                                |";
    cout << "\n\t\t\t|_______3)Back to msin menu______|";

    cout << "\n\n\tPlease enter your choice ";
    cin >> choice;

    switch(choice)
    {
        case 1:
           add();
           break;
        case 2:
           edit();
           break;
        case 3:
           rem();
           break;
        case 4:
           menu();
           break;
        deafault:
            cout << "invalid choice";
    }

    goto m;
}

void shopping :: buyer()
{ 
    m:
    int choice;
    cout <<"\t\t\t   Buyer  \n";
    cout <<"\t\t\t__________________\n";
    cout <<"\t\t\t1) Buy product    \n";
    cout <<"\t\t\t                  \n";
    cout <<"\t\t\t2) Go back        \n";
    cout <<"\t\t\tenetr your choice: ";

    cin >> choice;

    switch(choice)
    {
        case 1:
           receipt();
           break;
        case 2:
           menu();
           break;
        default :
        cout << "invalid choice";  
    }
    goto m;

}

void shopping :: add()
{ 
    m:
    fstream data;
    int c;
    int token=0;
    float p;
    float d;
    string n;

    cout <<"\n\n\t\t\t Add new product";
    cout <<"\n\n\t Product code of the product ";
    cin >>pcode;
    cout <<"\n\n\t nmae of the product ";
    cin >>pname;
    cout <<"\n\n\t price of the product";
    cin >>price;
    cout <<"\n\n\t Discount on product ";
    cin >>discount;

    data.open("databse.txt", ios::in);

    if(!data)
    {
        data.open("database.txt", ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<"\n";
        data.close();
    }
    else 
    {
        data>>c>>n>>p>>d;

        while(!data.eof())
        {
            if(c==pcode)
            {
                token++;

            }
            data>>c>>p>>d;
        }
        data.close();
    

    if(token==1)
       goto m;
    else {
        data.open("database.txt", ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<"\n";
        data.close();
    }
    }
    cout <<"\n\n\t\t\t Record inserted ! ";

}

void shopping :: edit()
{
    fstream data, data1;
    int pkey;
    int token=0;
    int c;
    float p;
    float d;
    string n;

    cout << "\n\n\t\t\t Modify the record";
    cout << "\n\n\t\t\t Product code : ";
    cin >> pkey;

    data.open("database.txt,ios::in");
    if (!data)
    {
        cout << "\n\nFile doesnt exist!";
    }
    else{

        data1.open("database1.txt", ios::app|ios::out);

        data>>pcode>>pname>>price>>discount;
        while(!data.eof())
        {
            if(pkey==pcode)
            {
                cout << "\n\t\t Product new code : ";
                cin >>c;
                cout << "\n\t\t name of the Product : ";
                cin >>n;
                cout << "\n\t\t Price of the product: ";
                cin >>p;
                cout << "\n\t\t discount : ";
                cin >>d;
                data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
                cout << "\n\t\t Record edited ";
                token++;
            }
            else
            {
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<"\n";

            }
            data>>pcode>>pname>>price>>discount;
           
        }
        data.close();
        data1.close(); 

        remove("database.txt");
        rename("databse1.txt","database.txt");

        if(token==0)
        {
            cout<<"\n\nRecord not found, Sorry!";
        
        }    
         
    }

}

void shopping :: list()
{
    fstream data;
    data.open("database.txt", ios::in);
    cout << "\n\n|________________________________________\n";
    cout <<"\n ProNo\t\tName\t\tPrice \n";
    cout << "\n\n|________________________________________\n";
    data>>pcode>>pname>>price>>discount;
    while(!data.eof())
    {
        cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
        data>>pcode>>pname>>price>>discount;
    }
    data.close();

}
void shopping :: receipt()
{
    fstream data;

    int arrc[100];
    int arrq[100];
    char choice;
    int c=0;
    float amount=0;
    float discount=0;
    float total=0;

    cout<<"\n\n\n\t\t\t RECEIPT ";
    data.open("database.txt",ios::in);
    if(!data)
    {
        cout<<"\n\n Empty database ";

    }
    else{
        data.close();
        list();
        cout << "\n______________________________________\n";
        cout << "\n                                      \n";
        cout << "\n         Please place the order       \n"; 
        cout << "\n                                      \n";
        cout << "\n______________________________________\n";
       do
       {
        /* code */
        m:
        cout << "\n\n Enter product code : ";
        cin>>arrc[c];
        cout << "\n\n Enter the product quantity : ";
        cin>>arrq[c];
        for(int i=0; i<c; i++)
        {
            if(arrc[c]==arrc[i])
            {
                cout << "\n\n duplicate product code.Please try again.";
                goto m;
            }
        }
        c++;
        cout << "\n\n do you want to buy another product or not? if yes then press y or else no: ";
        cin>>choice;

       } while (choice == "y");
       
       cout << "\n\n\t\t\t__________________________Receipt______________________";
       cout << "\nProduct No\tProduct name\t Product quantity\t Price\t Amount\t amount with discount";

       for(int i = 0; i<c; i++)
       {
        data.open("database.txt",ios::in);
        data>>pcode>>pname>>price>>discount;
        while(!data.eof())
        {
            if(pcode == arrc[i])
            {
                amount=price*arrq[i];
                discount=amount- (amount*discount/100);
                total = total + discount;
                cout << "\n"<< pcode <<"\t\t"<< pname<<"\t\t"<< arrq[i]<<"\t\t"<< price<<"\t\t"<< amount<<"\t\t"<< discount;
            }
            data>>pcode>>pname>>price>>discount;
        }
       }
       data.close();

       
        
    }
    cout <<"\n\n____________________________________________";
    cout <<"\n\n Total Amount : "<<total;


}

int main()
{
    shopping s;
    s.menu();
}






