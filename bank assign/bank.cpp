#include <iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;
 
 
 class User{
  protected:
  char name[10];

  char mobile[10];
  char pan[10];
  public:
  User(){ }
  User( char n, char m, char p){ name = n; mobile = m; pan = p;}
 
 
char getName(){return name; }
long int getMobile(){return mobile; }
char getPan(){return pan; }

void setName( char Name);
void setMobile(char mobile);
void setPan(char pan);
void setUser(char n, char m, char p){ name=n; mobile=m; pan=p;}

void displayUser( ){
cout<<"username"<<name<<endl;
cout<<"mobile no"<<mobile<<endl;
cout<<"pancard"<<pan<<endl;
}
 };
 
 
 class Account : public User
 {
  protected:
  char ac_type[20];
  long int acc_no;
  char ifsc[20];
 
 
  public:
  Account(){ }
  Account( char n, long int m, char p, char act , long int ac , char i  ) : User(n,m,p) { ac_type=act; acc_no = ac; ifsc =i; }
 
 
  char getAc_type(char ac_type){return ac_type; }
  long int getAcc_no(long int acc_no){return acc_no; }
  char getIfsc(char ifsc){return ifsc; }
 
  void setAc_type(char ac_type);
void setAcc_no(long int acc_no);
void SetIfsc(char ifsc);

void accountDisplay(){
       
cout<<"**Account details**";
        cout<<"\nThis account is Saving Account";
           
cout<<"Name "<<name;<endl;
cout<<"mobile "<<mobile;<<endl;
cout<<"pan "<<pan;<<endl;

cout<<"Account type "<<ac_type<<endl;
cout<<"Account no "<<acc_no<<endl;
cout<<"Ifs Code"<<ifsc<<endl;

}
 
  };
 
class Transaction{

private :

char user_name[20];
char password[20];
float balance;

public:

Transaction(){}
Transcation(char u, char pass, float b){ user_name =u; password = pass; balance = b;}



void withdraw(long double amt)
    {
        u->balance=u->balance-amt;
        cout<<"Transaction Done!!";
        cout<<"\nUpdated Balance is : "<<u1->balance;
    }
    void deposit(long double amt)
    {
        u->balance=u->balance+amt;
        cout<<"Transaction Done!!";
        cout<<"\nUpdated Balance is : "<<u1->balance;
    }
   
    void put(char n, char p, long int m, long int ac, char u, char pass, int b  ){
   
    fstream file;
   
    file.open("userfile.txt");
    file<<getName()<<"\n";
    file<<getPan()<<"\n";
    file<<getMobile()<<"\n";
        file<<getAcc_no()<<"\n";
    file<<u<<"\n";
    file<<pass<<"\n";
    file<<b<<"\n";  
   
    file.close()
}

void uservalid(string u, string pass){

fstream uids;
    uids.open("uid.txt",ios_base::app);
    uids<<u<<"\n";
    uids.close();
   
    fstream passw;
    passw.open("pass.txt",ios_base::app);
    passw<<u<<" "<<pass<<"\n";
    pass.close();
}
};



int main()
{
    int choice;
    cout<<"***Welcome to SBI Bank***";
    do
    {
        cout<<"\n**Main Menu**";
        cout<<"\n-For user";
        cin>> user_name;
            while(user_name)
            {
                int l;
                cout<<"*Menu*";
                cout<<"\n Which type of Account do you want to create";
                cout<<"Saving Account";
                cin>>l;
                char x;
                float balance;
                char x[10],char y[20],pan[10]
                string u,pass;
                if(l==user_name)
                {
                    cout<<"Enter your Mobile No : ";
                    cin>>x;
                    cout<<"Enter your user Name : ";
                    cin>>y;
                    cout<<"Enter your Pancard no : ";
                    cin>>pan;
                    cout<<"Set  User_Name : ";
                    cin>>u;
                    cout<<"Set a password : ";
                    cin>>pass;
                    User U1;
                    U1.balance=0;
                    user *c1;
                    Account a1(u,z,p,x);
                    c1=&a1;
                    c1->accountDisplay();
                    while(user_name)
                    {
                        cout<<"\nyou need deposit some balance for creating account.";
                        cout<<"\nEnter balance to be deposit : ";
                        cin>>balance;
                        if(balance<=500)
                        {
                            cout<<"Insufficient amount!! Please Enter balance more than 500";
                        }
                        else
                        {
                            Transaction t1(balance,&u);
                            t1.deposite(balance);
                            break;
                        }
                    }
                   
                    string y;
                    cout<<"\nDo u want to make another transaction?"<<"\ntype yes for continue transaction ";
                    cin>>y;
                    if(y=="yes")
                    {
                        while(user name)
                        {
                            while(user name)
                            {
                                int Choice;
                                Transaction t1(balance,&u);
                                cout<<"Select option";
                                cout<<"\n1-Withdraw Money";
                                cout<<"\n2-Deposit Money";
                                cout<<"\nEnter your choice : ";
                                cin>>Choice;
                                if(Choice==1)
                                {
                                    cout<<"Enter amount to be withdraw : ";
                                    cin>balance;
                                    if(500>=(U.b-balance))
                                    {
                                        cout<<"Minimum Balance of 500 Rs. Required for account!!";
                                    }
                                    else
                                        t1.withdraw(balance);
                                }
                                if(Choice==2)
                                {
                                    cout<<"Enter amount to be deposit : ";
                                    cin>>amount;
                                    t1.deposite(balance);
                                }
                                else
                                    cout<<"\nInvalid Choice!!";
                                string y;
                                cout<<"\nDo u want to make another transaction?";
                                cin>>y;
                                if(y=="yes")
                                {
                                    break;
                                }
                                else
                                {
                                    put(z,x,p,u.balance,u,a1.ac);
                                    uservalid(u,pass);
                                    exit(0);
                                }
                            }
                        }
                    }
                    else
                    {
                        put(z,x,p,u.balance,u,a1.ac);
                        uservalid(u,pass);
                        exit(0);
                    }
                }
                else
                    cout<<"Invalid Choice!!!\n";
            }
        }
        if(choice==2)
        {
            int k;
            char z[30],p[30],
            float balance,m;
            lont int  acc
            string u,uid,passw,pass;
            fstream file;
            int I,j=0;
            while(j<3)
            {
                file.open("uid.txt");
                cout<<"Enter your User Name : ";
                cin>>uid;
                while(!file.eof())
                {
                    file>>uid;
                    if(uid==u)
                    {
                        I=1;
                        k=1;
                        break;
                    }
                }
                file.close();
                if(I==1)
                    break;
                else
                {
                    cout<<"Invalid user name\n";
                    if(j==1)
                        cout<<"Last chance\n";
                    if(j==2)
                        exit(0);
                }
                j++;
            }
            int J,Passw=0;
            string u,pass;
            while(Passw<3)
            {
                cout<<"Enter password : ";
                cin>>pass;
                file.open("pass.txt");
                while(!file.eof())
                {
                    file>>u>>pass;
                    if(usid==u && pass==pass)
                    {
                        J=1;
                        break;
                    }
                    else
                        J=2;
                }
                if(J==1)
                {
                    break;
                }
                else
                {
                    if(Passw==1||Passw==0)
                        cout<<"Access denied!!\n";
                    else
                        exit(0);
                }
                Passw++;
                file.close();
            }
            while(u)
            {
                int Choice;
                 long int ac;
                User u;
                fstream file;
                file.open("userfile.dat");
                while(!file.eof())
                {
                    file>>z>>>>m>>p>>b>>u>>ac;
                    if(u==uid)
                    {
                        k=1;
                        break;
                    }
                }
                file.close();
                if(k==1)
                {
                    cout<<"Access Granted";
                }
                else
                {
                    cout<<"No such account exist";
                    exit(0);
                }
                file.close();
               
                        nw.close();
                        f1.open("username.txt",std::ofstream::out | std::ofstream::trunc);
                        f1.close();
                        nw.open(".txt");
                        f1.open("data.txt");
                        while(!nw.eof())
                        {
                            long double bil;
                            nw>>z>>>>m>>p>>bil>>UI>>ac;
                            if(nw.eof())
                                break;
                            f1<<z<<" "<<m<<" "<<p<<" "<<u<<" "<<ac<<"\n";
                        }
                        f1.close();
                        nw.close();
                        nw.open("uid.txt",std::ofstream::out | std::ofstream::trunc);
                        nw.close();
                        exit(0);
                    default :
                        cout<<"Invalid Choice";
                    }
                }
            }
        }
        else
            cout<<"Invalid choice!!";
    }
    while(1);
    return 0;
}
