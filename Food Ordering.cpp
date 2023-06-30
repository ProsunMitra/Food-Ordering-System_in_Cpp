#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<unistd.h>
#include<windows.h>
using namespace std;
class one
{
	
     
public:
	void menu1();
	
};
void one::menu1()
{
	
		cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO FOOD ORDERING HUB =========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t==================================================\t======================================\t\t=========================================="<<endl;
	cout<<"\t(1) Gosht Awadhi Handi Briyani[Full Plate] --- Rs.475"<<"\t(2) Gosht Rogan Josh[4 Pieces] --- Rs.450\t(3) Gosht Galauti Kabab [4 Pieces] --- Rs.425\n\t(4) Murgh Awadhi Handi Briyani [Full Plate] --- Rs.450\t(5) Gosht Bhuna [4 Pieces] --- Rs.450\t\t(6) Murgh Afghani Kabab [4 Pieces] --- Rs.345\n\t(7) Moti Briyani [Serves 1-2] --- Rs.450\t\t(8) Murgh Rezala [2 Pieces] --- Rs.350\t\t(9) Awadhi Sugandhi Mahi [4 Pieces] --- Rs.475\n\t(10) Special Raan Briyani [Serves 1-2] --- Rs.560\t(11) Murgh Shahi Korma [4 Pieces] --- Rs.350\t(12) Murgh Seekh Kabab --- Rs.340\n\t(13) Veg Briyani --- Rs.250\t\t\t\t(14) Paneer Korma --- Rs.275\t\t\t(15) Shahi Dahi Kabab [4 Pieces] --- Rs.270\n\t==================================================\t======================================\t\t==========================================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
 cout<<"\n\t========================================================================================================================================================"<<endl;
}

class two:public one
	{
	protected:
		 int  item,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0;
     string y,ye;
     public:
void menu2()
{    ofstream write;
write.open("order.text");
if(!write)
{
	cout<<"file can not open"<<endl;
	exit (-1);
}
   a:
   	b:
   		c:
   	 cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
      cin>>ch;
    
      
  cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
  cin>>ye;
  if(ye=="y"|| ye=="Y")
  {
  	goto b;
  }
  else
  {
   switch(ch)
   {
   	case 1:
   			cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   	
   		a=475;
   		s=s+a*item;
   		write<<"YOU ORDER \nGosht Awadhi Handi Briyani [Full Plate] : 475";
   		write<<" \n";
   		write<<"QUANTITY : "<<item;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Gosht Awadhi Handi Briyani [Full Plate] "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   		
		   b=450;
   		s=s+b*item;
   		write<<"YOU ORDER  Gosht Rogan Josh [4 Pieces] : 450";
   		write<<" \n";
   			write<<"QUANTITY : "<<item;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Gosht Rogan Josh [4 Pieces] "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   	
   		c=425;
   		s=s+c*item;
   			write<<"YOU ORDER  Gosht Galauti Kabab [4 Pieces] : 425";
   			write<<" \n";
   				write<<"QUANTITY : "<<item;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Gosht Galauti Kabab [4 Pieces] "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   	
   		d=450;
   		s=s+d*item;
   		write<<"YOU ORDER  Murgh Awadhi Handi Briyani [Full Plate] : 450";
   	write<<" \n";
   		write<<"QUANTITY : "<<item;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  Murgh Awadhi Handi Briyani [Full Plate] "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   	
   		e=450;
   		s=s+e*item;
   		write<<"YOU ORDER  Gosht Bhuna [4 Pieces] : 450";
   		write<<" \n";
   			write<<"Quantity : "<<item;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Gosht Bhuna [4 Pieces] "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   	
   		f=345;
   		s=s+f*item;
   		write<<"YOU ORDER Murgh Afghani Kabab [4 Pieces] : 345";
   		write<<"\n ";
   			write<<"QUANTITY : "<<item;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Murgh Afghani Kabab [4 Pieces] "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   	
   		g=450;
   		s=s+g*item;
   		write<<"YOU ORDER Moti Briyani [Serves 1-2] : 450";
   		write<<"\n ";
   			write<<"QUANTITY : "<<item;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Moti Briyani [Serves 1-2] "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   	
   		h=350;
   		s=s+h*item;
   		write<<"YOU ORDER Murgh Rezala [2 Pieces] : 350";
   		write<<" \n";
   			write<<"QUANTITY : "<<item;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Murgh Rezala [2 Pieces] "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   	
		i=475;
		s=s+i*item;
		write<<"YOU ORDER Awadhi Sugandhi Mahi [4 Pieces] : 475";
		write<<" \n";
			write<<"QUANTITY : "<<item;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Awadhi Sugandhi Mahi [4 Pieces] "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 10:
   		cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   	
   		j=560;
   		s=s+j*item;
   		write<<"YOU ORDER Special Raan Briyani [Serves 1-2] : 560";
   		write<<" \n";
   			write<<"QUANTITY : "<<item;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Special Raan Briyani [Serves 1-2] "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   			cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   	
   		k=350;
   		s=s+k*item;
   		write<<"YOU ORDER Murgh Shahi Korma [4 Pieces] : 350";
   		write<<" \n";
   			write<<"QUANTITY : "<<item;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Murgh Shahi Korma [4 Pieces] "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   	
   		l=340;
   		s=s+l*item;
   		write<<"YOU ORDER Murgh Seekh Kabab : 340";
   		write<<" \n";
   			write<<"QUANTITY : "<<item;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Murgh Seekh Kabab "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 13:
   		cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   	
   		m=250;
   		s=s+m*item;
   		write<<"YOU ORDER  Veg Briyani  : 250";
   		write<<" \n";
   			write<<"QUANTITY : "<<item;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Veg Briyani "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   	
   		n=275;
   		s=s+n*item;
   		write<<"YOU ORDER Paneer Korma : 275";
   		write<<" \n";
   			write<<"QUANTITY : "<<item;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Paneer Korma "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tQUANTITY :";
   		cin>>item;
   	
   		o=270;
   		s=s+o*item; //fn1353
   		write<<"YOU ORDER  Shahi Dahi Kabab [4 Pieces] : 270";
   		write<<"\n ";
   			write<<"QUANTITY : "<<item;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Shahi Dahi Kabab [4 Pieces] "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By PROSUN MITRA";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(int a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ==============================================="<<endl;
						cout << "\t\t\t\t\t\t\t  |              Food Ordering Hub              |"<<endl;
						cout << "\t\t\t\t\t\t   ==============================================="<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Harry"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   
  write.close();
  }
  void show1()
  {
  	menu1();
  	menu2();
  }
  
};
class three:public one,public two
{
	public:
		void total()
      {
      		long userId; //for user id of administrator
      		
			d:	
			cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t---------------------";
			cout<<"\n\t\t\t\t\t\t\tEnter Login Id = ";
			cin>>userId;
			cout<<"\t\t\t\t\t\t\t---------------------";
			if(userId!= 50798)  
			{
				cout<<"\nDon't try to be smart.....Enter correct id\n";
				goto d;
			}
			else
			cout<<"\n\n\n\t\t\t\t\t\t\tWELCOME USER,\n";
			z:
			string pwd="MITTER";  //password
			string pass="";  //empty string
			char c;	
				cout<<"\n\n\n\t\t\t\t\t\t\tPassword = "; 
				p:
				c=getch();
				cout<<"*";   //for printing * instead for password
				if(c!=13)
				{
					pass=pass+c;  //for concatenating the string
					goto p;
				}   
					
      			{
      			if(pass==pwd)
      			{
      				cout<<"\n\n\t\t\t\t\t\t\tAccess Granted. Welcome to our system\n\n\n";
      				system("PAUSE");
      				system("CLS");
      				show1();
				}
				else
				{
				cout<<"\n\t\t Please Enter a Correct Password\n";
				goto z;
				}
			}
		}
};
int main()
{   
   three ob;
   ob.total();
   getch();
}
