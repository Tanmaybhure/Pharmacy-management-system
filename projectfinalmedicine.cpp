#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
#include<ctime>

using namespace std;

  int p[11]={12,30,10,5,10,50,17,40,32,15,20};


string m[11]={"probiotics","Vitamin c","Acid Free","Women Multivate","Mario Tablet","Maxi Call Tablet","Amino Zink Tablet","Burnex","Fabuloss 5","Royal Propollen"};


   int s[11]={200,200,200,200,200,200,200,200,200,200,200};


class details
{
  protected:       string name[30];
                   string phn[11];
                   string address[30];
                   string doc[20];


      public:


                void getinfo()
                {
                    cout<<"Enter The Name of Customer:";
                    scanf("%s",&name);

                    cout<<"Enter Customer Phone Number:";
                    scanf("%s",&phn);

                    cout<<"Enter the name of Doctor by which Your Medicine is Suggested.";
                    scanf("%s",&address);

                    cout<<"Enter your address:";
                    scanf("%s",&doc);
                }

                void showinfo()
                {
                    cout<<"Name of Patient=";
                    printf("%s",name);
                    cout<<"\n";
                    cout<<"Phone Number";
                    printf("%s",phn);
                    cout<<"\n";
                    cout<<"Doctor Name:";
                    printf("%s",doc);
                    cout<<"\n";
                    cout<<"Address =";
                    printf("%s",address);
                    cout<<"\n";
                }

};

  class alist:virtual public details
  {
      public:   int qty;
                int total=0;
                string med;



    public:

             void getlist()
             {
                          cout <<"************\n";
                 cout<<"||-------------------------------------------------------------------------||------------------||";
                cout<<"\n";
    cout<<"||'''''''''''||''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''||''''''''''''''''''||"<<endl;
    cout<<"||  DRUG ID  ||  DRUGD TYPE  ||      DRUGS NAME    ||  DRUGS PRISE (Rs)    ||     Total Stock  ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||------------------||"<<endl;
     cout<<"||     0     ||     OTC      ||      "<<m[0]<<"    ||      " <<p[0]<<"(Rs)          ||       "<<  s[0]<<"        ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||------------------||"<<endl;
    cout<<"||     1     ||     OTC      ||     "<<m[1]<<"      ||       " <<p[1]<<"(Rs)         ||      "<< s[1]<<"         ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||------------------||"<<endl;
    cout<<"||     2     ||     OTC      ||  "<<m[2]<<"         ||       "<<p[2]<<"(Rs)         ||       "<< s[2]<<"        ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||------------------||"<<endl;
    cout<<"||     3     ||     OTC      ||  "<<m[3]<<"   ||      "<<p[3]<<"(Rs)           ||      "<<s[3]<<"         ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||------------------||"<<endl;
    cout<<"||     4     ||     OTC      ||  "<<m[4]<<"      ||       "<<p[4]<<"(Rs)         ||      "<< s[4]<<"         ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||------------------||"<<endl;
    cout<<"||     5     ||     OTC      || "<< m[5]<< "   ||      "<<p[5]<<"(Rs)          ||       "<< s[5]<<"        ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||------------------||"<<endl;
    cout<<"||     6     ||     OTC      || "<<m[6]<<"  ||      "<<p[6]<<"(Rs)          ||       "<< s[6]<<"        ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||------------------||"<<endl;
    cout<<"||     7     ||     OTC      ||  "<<m[7]<<"            ||     "<<p[7]<<"(Rs)           ||       "<<s[7]<<"        ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||------------------||"<<endl;
    cout<<"||     8     ||     OTC      ||  "<<m[8]<<"        ||     "<<p[8]<<"(Rs)           ||      "<< s[8]<<"         ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||------------------||"<<endl;
    cout<<"||     9     ||     OTC      ||   "<<m[9]<<"  ||    "<<p[9]<<"(Rs)            ||       "<< s[9]<<"        ||"<<endl;
    cout<<"||___________||______________||____________________||______________________||__________________||"<<endl;

cout<<"\n";

             }

  };

  int main()
  {
    alist l[11];
    int j;
    int z;
    int i;
    int a;
    int o;
    int r;
    int amount=0;
    int choice;
    string p;

    cout<<"\t \t \t Welcome to Pharmacy Management System.";
    cout<<"\n \n";
    cout<<"\t LOG IN:";
    cout<<"\n";
    cout<<"Enter Phone number.";
    cin>>p;
                                   while(true)
                        {
                              int f;
                              cout<<"\n";
                               cout<<"Enter Password (only 4 digit):";
                               cin>>f;
                               if((f>999)&&(f<10000))
                           {
                               cout<<"Login Successful.";
                               cout<<"\n";
                               break;
                           }
                           else
                           {
                                  cout<<"Please enter Correct 4 digit number.";
                           }
                       }

    details d;
    d.getinfo();
    cout<<"How Many Medicine Your Want(Maximum Limit 10) :";
    cin>>j;

    l[1].getlist();

    for(int a=1;a<=j;a++)
    { cout<<"\n";
        cout<<"  Enter Which medicine you want(according to Drug ID):";
        cin>>i;
        if(i<=10)
        {
        cout<<"You choose:"<<m[i];
        cout<<"\n";
        cout<<"Enter the quantity:";
        cin>>l[a].qty;
        if(l[a].qty<=s[i])
        {

            switch(i)
            {
                case 0: {
                              l[a].total=l[a].qty * 12;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                              l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 1: {
                              l[a].total=l[a].qty * 30;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 2: {
                              l[a].total=l[a].qty * 10;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 3: {
                              l[a].total=l[a].qty * 5;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 4: {
                              l[a].total=l[a].qty * 10;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }


                        case 5: {
                              l[a].total=l[a].qty * 50;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 6: {
                              l[a].total=l[a].qty * 17;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 7: {
                              l[a].total=l[a].qty * 40;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 8: {
                              l[a].total=l[a].qty * 32;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 9: {
                              l[a].total=l[a].qty * 15;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        default:
                                {
                                    cout<<"Invalid Number.";
                                    break;

                                }

            }

        }
        else
        {
            cout<<"Sorry! We dont't have enough stock.";
            cout<<"\n";
        }
        }
        else
        {
            cout<<"\n Invalid Drug Type.\n";
        }
    }

    cout<<"\n \n";
    cout<<"Final amount to be paid ="<<amount<<"\n";

      while(true)
    {
     cout<<"\n\t_________________________________________\t";
     cout<<"\n\t|1. Update List (Add medicines)         |\t";
	   cout<<"\n\t|2. show stock                          |\t";
     cout<<"\n\t|3. View List/reciept                   |\t";
     cout<<"\n\t|4. Do Payment                          |\t";
     cout<<"\n\t|5. Exit                                |\t";
     cout<<"\n\t|_______________________________________|\t\n";
     cout<<"\nEnter your choice: "<<endl;
     cin>>choice;
     cout<<"______________________"<<endl;

     switch(choice)
     {

       case 1:
                     {

                        cout<<"How Many Medicine Your Want to add.(Maximum Limit 10) :";
                        cin>>o;
                        o=o+j;

                       l[1].getlist();

                   for(int a=j+1;a<=o;a++)
          {
              cout<<"\n";
        cout<<"  Enter Which medicine you want(according to Drug ID):";
        cin>>i;
        if(i<=10)
        {
        cout<<"You choose:"<<m[i];
        cout<<"\n";
        cout<<"Enter the quantity:";
        cin>>l[a].qty;
        if(l[a].qty<=s[i])
        {

            switch(i)
            {
                case 0: {
                              l[a].total=l[a].qty * 12;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                              l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 1: {
                              l[a].total=l[a].qty * 30;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 2: {
                              l[a].total=l[a].qty * 10;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 3: {
                              l[a].total=l[a].qty * 5;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 4: {
                              l[a].total=l[a].qty * 10;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }


                        case 5: {
                              l[a].total=l[a].qty * 50;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 6: {
                              l[a].total=l[a].qty * 17;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 7: {
                              l[a].total=l[a].qty * 40;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 8: {
                              l[a].total=l[a].qty * 32;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        case 9: {
                              l[a].total=l[a].qty * 15;
                              s[i]=s[i]-l[a].qty;
                              cout<<"Total="<<l[a].total;
                              amount=amount+l[a].total;
                                l[a].med=m[i];
                              cout<<"\n"<<m[i]<<" "<<"Added to your list successfully.";
                              cout<<"\n";
                              break;
                        }

                        default:
                                {
                                    cout<<"Invalid Number.";
                                    break;

                                }

            }

        }
        else
        {
            cout<<"Sorry! We dont't have enough stock.";
            cout<<"\n";
        }
        }
        else
        {
            cout<<"\n Invalid Drug Type.\n";
        }
    }

    cout<<"\n \n";
    cout<<"Final amount to be paid ="<<amount<<"\n";
    r=0;
    break;
    }

       case 2:
                  {
                       cout<<"Welcome To Check Stock.";

                       cout<<"  Stock  Remaining in Godown.";
                    cout<<"\n \n";
                    cout<<" Medicine"<<"-------------||---------------"<<"Stock ";
                          cout <<"************\n";
                 cout<<"||-------------------------------------------------------------------------||";
                cout<<"\n";
    cout<<"||'''''''''''||''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''||"<<endl;
    cout<<"||  DRUG ID  ||  DRUGD TYPE  ||      DRUGS NAME    ||        Total Stock   ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||"<<endl;
    cout<<"||     0     ||     OTC      ||    "<<m[0]<<"      ||    "<< s[0]<<"               ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||"<<endl;
    cout<<"||     1     ||     OTC      ||  "<<m[1]<<"         ||    "<< s[1]<<"               ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||"<<endl;
    cout<<"||     2     ||     OTC      ||  "<<m[2]<<"         ||     "<< s[2]<<"              ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||"<<endl;
    cout<<"||     3     ||     OTC      ||  "<<m[3]<<"   ||     "<<s[3]<<"              ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||"<<endl;
    cout<<"||     4     ||     OTC      ||  "<<m[4]<<"      ||        "<< s[4]<<"           ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||"<<endl;
    cout<<"||     5     ||     OTC      || "<< m[5]<<"   ||      "<< s[5]<<"             ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||"<<endl;
    cout<<"||     6     ||     OTC      ||  "<<m[6]<<" ||      "<< s[6]<<"             ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||"<<endl;
    cout<<"||     7     ||     OTC      ||  "<<m[7]<<"            ||       "<<s[7]<<"            ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||"<<endl;
    cout<<"||     8     ||     OTC      ||  "<<m[8]<<"        ||      "<< s[8]<<"             ||"<<endl;
    cout<<"||-------------------------------------------------------------------------||"<<endl;
    cout<<"||     9     ||     OTC      ||   "<<m[9]<<"  ||        "<< s[9]<<"           ||"<<endl;
    cout<<"||___________||______________||____________________||______________________||"<<endl;


                      break;
                  }

       case 3:
                  {

                         d.showinfo();
                         time_t now;
                        struct tm nowLocal;
                        now=time(NULL);
                        nowLocal=*localtime(&now);
                        cout<<"\t\t\t\tPurchase Date:"<<nowLocal.tm_mday<<"-"<<nowLocal.tm_mon+1<<"-"<<nowLocal.tm_year+1900<<endl;
                        cout<<"\t\t\t\tPurchaseTime:"<<nowLocal.tm_hour<<":"<<nowLocal.tm_min<<":"<<nowLocal.tm_sec<<endl;

             cout<<"*******************************************************************************************";

             cout<<"\nMedicine    ||"<<"\t\t"<<"Quantity    ||"<<"\t\t"<<"Total    ||";

     		  cout<<"\n***************************************************************************************";

     	for(a=0;a<=j;a++)
            {

                cout<<"\n";
                cout<<l[a].med<<"\t \t "<<l[a].qty<<"\t \t"<<"\t \t"<<l[a].total<<"\n";

            }
            if(r==0)
              {
      for(a=j+1;a<=o;a++)
            {

               cout<<"\n";
               cout<<l[a].med<<"\t \t "<<l[a].qty<<"\t \t"<<"\t \t"<<l[a].total<<"\n";
               int *u,*q;
               string *p;
               u=&l[a].qty;
               p=&l[a].med;
               q=&l[a].total;
              delete u;
              delete p;
              delete q;

            }
                  }
            else
            {

            cout<<"\n";
            }
                  cout<<"\n";
                  cout<<"\t \t \t"<<amount<<"\n";
                  break;
                  }


       case 4:
                  {

                       cout<<"\t \t \t \t Welcome\n";
                       cout<<"\n\t_______________________________________________\t";
                       cout<<"\n\t|1. Card Payement                             |\t";
	                   cout<<"\n\t|2. Net Banking(Pay TM ,Phone pay, Google pay)|\t";
                       cout<<"\n\t|3. On Cash Delivery.                         |\t";
                       cout<<"\n\t|4. Exit                                      |\t";
                       cout<<"\n\t______________________________________________|\t";
                       int u;
                       cout<<"Enter your payment Method.:";
                       cin>>u;
                   switch(u)
                   {
                   case 1:
                    {

                                while(true)
                        {
                              int q;
                              cout<<"\n";
                               cout<<"Enter card Number(only 4 digit):";
                               cin>>q;
                               if((q>999)&&(q<10000))
                           {
                               cout<<"Card scan succesfully.";
                               break;
                           }
                           else
                           {
                                  cout<<"Please enter Correct 4 digit number.";
                           }
                       }

                       while(true)
                       {
                           int y;
                           cout<<"\n";
                           cout<<"Enter the password of your card(4 digit pin).";
                           cin>>y;
                          if((y>999)&&(y<10000))
                           {
                               cout<<"\n";
                               cout<<"Pinned correct.\n";
                               cout<<"Payment Successful\n";
                               cout<<"Thank you \n";
                               break;
                           }
                           else
                            {
                                cout<<"\nPlease Enter valid Pin(4 Digit Pin only).\n";
                            }
                       }
                       break;

                  }

                   case 2:
                           {
                               char nam[20];
                               int y;
                               cout<<"Enter your Name:";
                               cin>>nam;
                               while(true)
                             {

                               cout<<"\nEnter the password of your card(4 digit pin).";
                               cin>>y;
                                if((y>999)&&(y<10000))
                           {
                               cout<<"\n";
                               cout<<"Pinned correct.\n";
                               cout<<"Payment Successful\n";
                               cout<<"Thank you \n";
                               break;
                           }
                           else
                            {
                                cout<<"\nPlease Enter valid Pin(4 Digit Pin only).\n";
                            }
                           }
                           break;
                           }


                   case 3:
                          {

                              cout<<"Ok! medicines will shipped to you , Then you will pay.";
                              break;

                        }

                   case 4:
                    {
                        break;
                        exit(0);
                    }
                   default:
                            {
                                cout<<"Invalid Option.";
                                break;
                            }
                      }
                      break;

                  }

    case 5:
            {
               exit(0);
               break;
            }

     default:
              {
                  cout<<"Invalid choice.";
                  break;
              }


    }
    }
    return 0;

  }
