#include<iostream>
using namespace std;
int main()
{
	int Quantity;
	int choice;
	int total;
	// Avialble quantity of products
	int Qrooms=0, Qpasta=0, Qburger=0, Qshake=0, Qnoodles=0, Qchicken=0;
	// Sold items of products
    int srooms=0, spasta=0, sburger=0, sshake=0, snoodles=0, schicken=0;
    // Total price of the sold products
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_shake=0, Total_noodles=0, Total_chicken=0;
	cout<<"\t\tQuantiy of items\n";
	cout<<"Rooms Available: ";
	cin>>Qrooms;
	cout<<"\nQuantity of pasta: ";
	cin>>Qpasta;
	cout<<"\nQuantity of Burger: ";
	cin>>Qburger;
	cout<<"\nQuantity of shakes: ";
	cin>>Qnoodles;
	cout<<"\nQuantity of noodles: ";
	cin>>Qshake;
	cout<<"\nQuantity of chicken: ";
	cin>>Qchicken;
	while(1)
	{
		cout<<"\n\t\t\tPlease Select From Below Options:";
		cout<<"\n\n1) Rooms";
		cout<<"\n\n2) pasta";
		cout<<"\n\n3) burger";
		cout<<"\n\n4) shakes";
		cout<<"\n\n5) noodles";
		cout<<"\n\n6) chicken-roll";
		cout<<"\n\n7) Information regarding sales and collections";
		cout<<"\n\n8) Exit";
		cout<<"\n\n-:Please enter your choice:-";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					cout<<"\nEnter the number of rooms you want: ";
					cin>>Quantity;
					if(Qrooms - srooms>=Quantity)
					{
						srooms+=Quantity;
						Total_rooms=Total_rooms+Quantity * 700;
						if(Quantity==1)
						{
							cout<<"\n1 room is alloted to you successfully";
						}
						else
						{
							cout<<"\n"<<Quantity<<" No of rooms are alloted to you successfully!";
						}
						
					}
					else
					{
						cout<<"\nSorry for inconvinience, Only "<<Qrooms-srooms<<" No of rooms are avialabe at present";
					}
					
				}
				break;
			case 2:
				{
					cout<<"Enter the number of PASTA you want: ";
					cin>>Quantity;
					if(Qpasta - spasta>=Quantity)
					{
						spasta+=Quantity;
						Total_pasta=Total_pasta+Quantity * 50;
						if(Quantity==1)
						{
							cout<<"\n1 pasta is orderd sucessfully. Please wait for a moment your Order will be served to you soon.";
						}
						else
						{
							cout<<"\n"<<Quantity<<" pastas are orderd sucessfully. Please wait for a moment your Order will be served to you soon.";
						}
						
					}
					else
					{
						cout<<"\nSorry for inconvinience, Only "<<Qpasta-spasta<<" PASTA are avialabe at present";
					}
					
				}
				break;
			case 3:
				{
					cout<<"Enter the number of BURGER you want: ";
					cin>>Quantity;
					if(Qburger - sburger>=Quantity)
					{
						sburger+=Quantity;
						Total_burger=Total_burger+Quantity * 20;
						if(Quantity==1)
						{
							cout<<"\n1 Burger is orderd sucessfully. Please wait for a moment your Order will be served to you soon.";
						}
						else
						{
							cout<<"\n"<<Quantity<<" Burgers are orderd sucessfully. Please wait for a moment your Order will be served to you soon.";
						}
						
					}
					else
					{
						cout<<"\nSorry for inconvinience, Only "<<Qburger-sburger<<" Burgers are avialabe at present";
					}
					
				}
				break;
			case 4:
				{
					cout<<"Enter the number of SHAKE you want: ";
					cin>>Quantity;
					if(Qshake - sshake>=Quantity)
					{
						sshake+=Quantity;
						Total_shake=Total_shake+Quantity * 20;
						if(Quantity==1)
						{
							cout<<"\n1 SHAKE is orderd sucessfully. Please wait for a moment your Order will be served to you soon.";
						}
						else
						{
							cout<<"\n"<<Quantity<<" SHAKES are orderd sucessfully. Please wait for a moment your Order will be served to you soon.";
						}
						
					}
					else
					{
						cout<<"\nSorry for inconvinience, Only "<<Qshake-sshake<<" SHAKES are avialabe at present";
					}
					
				}
				break;
			case 5:
				{
					cout<<"Enter the number of NOODLES you want: ";
					cin>>Quantity;
					if(Qnoodles - snoodles>=Quantity)
					{
						snoodles+=Quantity;
						Total_noodles=Total_noodles+Quantity * 150;
						if(Quantity==1)
						{
							cout<<"\n1 Plate of NOODLE is orderd sucessfully. Please wait for a moment your Order will be served to you soon.";
						}
						else
						{
							cout<<"\n"<<Quantity<<"plate of NOODLES are orderd sucessfully. Please wait for a moment your Order will be served to you soon.";
						}
						
					}
					else
					{
						cout<<"\nSorry for inconvinience, Only "<<Qnoodles-snoodles<<" NOODLES are avialabe at present";
					}
					
				}
				break;
			case 6:
				{
					cout<<"Enter the number of CHICKEN ROLL you want: ";
					cin>>Quantity;
					if(Qchicken - schicken>=Quantity)
					{
						schicken+=Quantity;
						Total_chicken=Total_chicken+Quantity * 150;
						if(Quantity==1)
						{
							cout<<"\n1 CHICKEN ROLL is orderd sucessfully. Please wait for a moment your Order will be served to you soon.";
						}
						else
						{
							cout<<"\n"<<Quantity<<"CHICKEM ROLLS are orderd sucessfully. Please wait for a moment your Order will be served to you soon.";
						}
						
					}
					else
					{
						cout<<"\nSorry for inconvinience, Only "<<Qchicken-schicken<<" CHIKCEN ROLL are avialabe at present";
					}
					
				}
				break;
			case 7:
				{
					cout<<"\n\t\t\t-:Details of products:-";
					cout<<"\nProduct\t\tAvialable\tSold\tRemaining\tTotal collection\n";
					cout<<"Rooms"<<"\t\t"<<Qrooms<<"\t\t"<<srooms<<"\t  "<<Qrooms-srooms<<"\t\t"<<Total_rooms<<"\n";
					cout<<"Pasta"<<"\t\t"<<Qpasta<<"\t\t"<<spasta<<"\t  "<<Qpasta-spasta<<"\t\t"<<Total_pasta<<"\n";
					cout<<"Burger"<<"\t\t"<<Qburger<<"\t\t"<<sburger<<"\t  "<<Qburger-sburger<<"\t\t"<<Total_burger<<"\n";
					cout<<"Shake"<<"\t\t"<<Qshake<<"\t\t"<<sshake<<"\t  "<<Qshake-sshake<<"\t\t"<<Total_shake<<"\n";
					cout<<"Noodles"<<"\t\t"<<Qnoodles<<"\t\t"<<snoodles<<"\t  "<<Qnoodles-snoodles<<"\t\t"<<Total_noodles<<"\n";
					cout<<"Chicken"<<"\t\t"<<Qchicken<<"\t\t"<<schicken<<"\t  "<<Qchicken-schicken<<"\t\t"<<Total_chicken<<"\n";
					total=Total_rooms+Total_pasta+Total_burger+Total_shake+Total_noodles+Total_chicken;
					cout<<"Today total revenue generated="<<total;	
					
					
					
				}
				break;
			case 8:{
					cout<<"\n5Thanks for visiting our Hotel!";
					exit(0);
				}
			default:{
					cout<<"Invalid choice! please enter a valid choice";
				}
		}
	}
}