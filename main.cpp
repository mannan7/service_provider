#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<fstream>
using namespace std;

fstream regdata;
fstream cou;
static   const char *name;
static int counts;

long int receipt();
//
//void back(){
//	goto trys;
//};
void test(int, int, int a[],string service[]);
void edit(int i,string service[],int price[]);
void exit(){
    exit(0);}



void cls(){
	system("cls");
}

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

class shop{
	protected:
	int totalstock;
	int employees;
	float stockcost;
	float totalcash;
 	public:
		int n,n1,b;
		shop(){
		totalstock=50;
		employees=50;
		stockcost=15.76;
		totalcash=1000.50;
		}
		int price[20];
		string service[20];
		int i;
		int t;

		virtual void show()=0;

	void set_totalcash(float cash){
		totalcash=cash;
	}
	void get_totalcash(){
		cout<<"Total cash in the vault: "<<totalcash<<endl;
	}
		public:
	void epc(){
		cout<<"Welcome TO EPC WorkShop.\nKindly select your desired option.\n[1]:Electricians\n[2]:Plumbers \n[3]:Carpenters \n";
		cin>>n;
		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                          \tELECTRICIANS\n----------------------------------------------------------------------------------------------";
			cout<<"\n[1]:Lights and Switches\nRS:300\n\n[2]:Inverter\nRS: 350\n\n[3]:Geyser\nRS 450\n\n[4]:Others\nRS:500 ";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER "	;
		    cin>>n1;
		    int a[]={300,350,450,500};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	service[i]="Lights and Switches";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
				service[i]="Inverter";
				i+=1;
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
				service[i]="Geyser";
				i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
				service[i]="Others";
				i+=1;
			}
		}
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                            PLUMBING\n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Taps and Mixers\t\nRs: 300\n\n[2]:Blockage\nRs: 200\n\n[3]:Water Tank\nRS: 250\n\n[4]:Motor\n RS:600\n\n[5]:Toilet\n RS 250\n\n[6]:Others\n RS:500";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		  int a[]={300,200,250,600,250,500};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	service[i]="Taps and Mixers";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	service[i]="Blockage";
		    	i+=1;

			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="Water Tank";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	service[i]="Motor";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	service[i]="Toilet";
		    	i+=1;
			}
			else if(n1==6)
			{
				price[i]=a[5];
				t+=a[5];
		    	service[i]="Others";
		    	i+=1;
			}
		 }
	    if(n==3){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           \tCARPENTERY       \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Drill and Hang\nRs: 120\n\n[2]:Windows and Curtain Blinds\nRs: 300\n\n[3]:Furniture Repair and Assembly\nRS: 350\n\n[4]:Door Lock\n RS: 300\n\n[5]:Others\n RS 500";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		    		  int a[]={120,300,300,350,500};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	service[i]="Drill and Hang";
		    	i+=1;

			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	service[i]="Windows and Curtain Blinds";
		    	i+=1;
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="Furniture Repair and Assembly";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	service[i]="Door Lock";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	service[i]="Others";
		    	i+=1;
			}

	}		int q;
		cls();
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items";
		cin>>q;
		cls();
		if(q==1)
		{
			shop::epc();

		}
		else if(q==2)
		{
			test(t,i,price,service);
		}
		else if(q==3){
		char l;
		for(int j=0;j<i;j ++)

			cout<<"["<<j+1<<"] :"<<service[j]<<"\n"<<"Rs:"<<price[j]<<"\n\n";
		cout<<"do you want to delete an item? (Y/N)";
		cin>>l;
		while(l=='y'||l=='Y'){
		{



			edit(i,service,price);
			i--;
			cout<<"do you want to delete an item? (Y/N)";
				cin>>l;

		if(l=='n'||l=='N')
		{
			break;
		}
			}
			}

				cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill ";

				cin>>q;

		if(q==1)
		{
			shop::epc();
		}
		else if(q==2)
		{
		test(t,i,price,service);
		}




}
}

	void elec()
	{
		cout<<"Welcome to ELEC Heaven.\nKindly select your desired option.\n[1]:AC and Refigerator Service or Repair\n[2] TV and Washing Machine Service or Repair \n[3]Laptop and Computer Reapir \n[4]Others";
		cin>>n;
		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tAC and Refigerator Service or Repair\n----------------------------------------------------------------------------------------------";
			cout<<"\n[1]: AC Service RS:300\n\n[2]:Refigerator Service RS: 350\n\n[3]:Repair\nRS 450 ";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER "	;
		    cin>>n1;
			int a[]={300,350,1200,450};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	service[i]="AC Service";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];

				t+=a[1];
		    	service[i]="Refigerator Service";
		    	i+=1;

			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="Repair";
		    	i+=1;
}
		}
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tTV and Washing Machine Service or Repair\n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Installation of TV Upto 50 inches\t\nRs: 500\n\n[2]:Installation of TV above 50 inches\nRs: 600\n\n[3]:TV Repair\nRS: 250\n\n[4]:Washing Machine Service\n RS: 400\n\n[5]:Washing Machine Repair\n RS 250";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY\n"	;
		    cin>>n1;
		    		  int a[]={500,600,250,400,250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	service[i]="Installation of TV Upto 50 inches";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	service[i]="Installation of TV above 50 inches";
		    	i+=1;

			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="TV Repair";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	service[i]="Washing Machine Service";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	service[i]="Washing Machine Repair";
		    	i+=1;
			}
		 }
	    if(n==3){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           \tLaptop and Computer Reapir\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Laptop Repair\t\nRs: 250\n\n[2]:CPU Repair\nRs: 300\n\n[3]:Router Repair\nRS: 300\n\n[4]:Monitor Repair\n RS: 250\n\n[5]:Others\n RS 250";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		    		  int a[]={250,300,300,250,250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	service[i]="Laptop Repair";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	service[i]="CPU Repair";
		    	i+=1;

			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="Router Repair";
		    	i+=1;

			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	service[i]="Monitor Repair";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	service[i]="Others";
		    	i+=1;
			}

		}
		if(n==4){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tOTHERS\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Water Purifier Repair\nRs: 300\n\n[2]:Microwave Repair\nRs: 300\n\n[3]:Mixer Repair\nRS: 300\n\n[4]:Geyser Repair\n RS: 300\n\n[5]:Chimney Repair\n RS 300";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY "	;
		    cin>>n1;
				  int a[]={300,300,300,300,300};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	service[i]="Water Purifier Repair";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	service[i]="Microwave Repair";
		    	i+=1;

			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="Mixer Repair";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	service[i]="Geyser Repair";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	service[i]="Chimney Repair";
		    	i+=1;
			}
		}
				int q;
		cls();
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items";
		cin>>q;
		cls();
		if(q==1)
		{
			shop::elec();

		}
		else if(q==2)
		{
			test(t,i,price,service);
		}
		else if(q==3){
		char l;
		for(int j=0;j<i;j ++)

			cout<<"["<<j+1<<"] :"<<service[j]<<"\n"<<"Rs:"<<price[j]<<"\n\n";
		cout<<"do you want to delete an item? (Y/N)";
		cin>>l;
		while(l=='y'||l=='Y'){
		{



			edit(i,service,price);
			i--;
			cout<<"do you want to delete an item? (Y/N)";
				cin>>l;

		if(l=='n'||l=='N')
		{
			break;
		}
			}
			}

				cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill ";

				cin>>q;

		if(q==1)
		{
			shop::elec();
		}
		else if(q==2)
		{
		test(t,i,price,service);
		}




}
		}
		void salon(){
			cout<<"Welcome to Sandy's Salon.\nKindly select your desired option.\n[1]:Men Salon\n[2]:Women Salon \n[3]:Kids Salon \n[4]:Pets Salon";
		cin>>n;
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tMEN SALON\n----------------------------------------------------------------------------------------------";
			cout<< "\n[1]:Full Body Massage\nRS:1000\n\n[2]:Hair Styling\nRS:350\n\n[3]:Ayurvedic Massage\nRS 1500\n\n[4]:De-Tanning\n RS:550 \n\n[5]:Manicure & Pedicure\nRS: 700 ";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER "	;
		    cin>>n1;
		    		  int a[]={1000,350,1500,550,700};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];

		    	service[i]="Full Body Massage";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	service[i]="Hair Styling";
		    	i+=1;

			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="Ayurvedic Massage";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	service[i]="De-Tanning";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	service[i]="Manicure & Pedicure";
		    	i+=1;
			}
		}
		if(n==3){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tWomen Salon\n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Full Body Massage\t\nRs:1000\n\n[2]:Hair Styling\nRs: 600\n\n[3]:Stress-Relief Massage\n RS:800\n\n[4]:Manicure and Pedicure\n RS: 700\n\n[5]:Wedding Makeup and Styling \n RS 1250";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		    		  int a[]={1000,600,800,700,1250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	service[i]="Full Body Massage";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	service[i]="Hair Styling";
		    	i+=1;

			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="Stress-Relief Massage";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	service[i]="Manicure and Pedicure";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	service[i]="Wedding Makeup and Styling";
		    	i+=1;
			}
		 }
	    if(n==4){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           Kids Salon \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Baby HairCut\t\nRs: 200\n\n[2]:Kid HairCut\nRs:250\n\n[3]:Kid Massage \nRS: 600\n\n[4]:Kid Grooming for an event\n RS: 600\n\n[5]:Kid Facial Pack\n RS 250";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		     int a[]={200,250,600,600,250};
		    if(n1==1){
		    price[i]=a[0];
		    t+=a[0];
		    service[i]="Baby HairCut";
		    i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	service[i]="Kid HairCut";
		    	i+=1;

			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="Kid Massage";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	service[i]="Kid Grooming for an event";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	service[i]="Kid Facial Pack";
		    	i+=1;
			}

		}
		if(n==1){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tPet Salon\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Dog Grooming\nRs: 600\n\n[2]:Cat Grooming\nRs: 500\n\n[3]:Bunny Grooming\nRS: 700\n\n[4]:Pet Bath\nRS: 500\n\n[5]:Others\n RS 800";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY "	;
		    cin>>n1;
		    		  int a[]={600,500,700,500,800};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	service[i]="Dog Grooming";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	service[i]="Cat Grooming";
		    	i+=1;

			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="Bunny Grooming";
		    	i+=1;

			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	service[i]="Pet Bath";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	service[i]="Others";
		    	i+=1;
			}

		}		int q;
		cls();
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items";
		cin>>q;
		cls();
		if(q==1)
		{
			shop::salon();

		}
		else if(q==2)
		{
			test(t,i,price,service);
		}
		else if(q==3){
		char l;
		for(int j=0;j<i;j ++)

			cout<<"["<<j+1<<"] :"<<service[j]<<"\n"<<"Rs:"<<price[j]<<"\n\n";
		cout<<"do you want to delete an item? (Y/N)";
		cin>>l;
		while(l=='y'||l=='Y'){
		{



			edit(i,service,price);
			i--;
			cout<<"do you want to delete an item? (Y/N)";
				cin>>l;

		if(l=='n'||l=='N')
		{
			break;
		}
			}
			}

				cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill ";

				cin>>q;

		if(q==1)
		{
			shop::salon();
		}
		else if(q==2)
		{
		test(t,i,price,service);
		}




}}

	void restro(){
		cout<<"Welcome to Restro Wadiya.\nKindly select your desired option.\n[1]:BREAKFAST \n[2]:STARTERS \n[3]:PIZZA \n[4]:DESSERT\n[5]:MAIN COURSE";
		cin>>n;
		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tBREAKFAST      \n----------------------------------------------------------------------------------------------";
			cout<<"\n[1]:Cheese & Mushroom Omelette\ntRS:450\n\n[2]:Omelette\ntRS: 350\n\n[3]:Breakfast Burrito\nRS 450 \n\n[4]:STOVES AND CLOVES'S SPECIAL OMELETE\n\nRS:800";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER "	;
		    cin>>n1;
		    		  int a[]={450,350,450,800};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	service[i]="CheeseAndMushroomOmelette";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	service[i]="Omelette";
		    	i+=1;

			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="BreakfastBuritto";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	service[i]="SpecialOmelette";
		    	i+=1;
			}

		}
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tSTARTERS      \n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Ceasar Salad\t\nRs: 600\n\n[2]:Chicken Strips\nRs: 190\n\n[3]:Peri Bites\nRS: 180\n\n[4]:Fries\n RS: 190\n\n[5]:Fries with Dip\n RS 250";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		    		  int a[]={600,190,180,190,250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	service[i]="CeasarSalad";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	service[i]="ChickenStrips";
		    	i+=1;

			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="PeriBites";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	service[i]="Fries";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	service[i]="FrieswithDip";
		    	i+=1;
			}
		 }
	    if(n==4){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           \tDESSERTS       \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Chocolate Decadence Cake Slice\t\nRs: 400\n\n[2]:Chocolate Malt Cake Slice\nRs: 310\n\n[3]:Chocolate Heaven Cake Slice\nRS: 140\n\n[4]:Red Velvet Cake Slice\n RS: 400\n\n[5]:New York Cheese Cake\n RS 250";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		    		  int a[]={400,310,140,400,250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	service[i]="ChocolateDecadence";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	service[i]="ChocolateMaltCake";
		    	i+=1;

			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="ChocolateHeaven";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	service[i]="RedVelvetCake";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	service[i]="NewyorkCheeseCake";
		    	i+=1;
			}

		}
		if(n==5){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tMAIN    COURSE\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Grilled Chicken Sandwich\nRs: 600\n\n[2]:Penne Arrabiata\nRs: 410\n\n[3]:Fettuccine Alfredo\nRS: 800\n\n[4]:Classic Beef Burger\n RS: 400\n\n[5]:Chicken Mushroom Burger\n RS 550";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY "	;
		    cin>>n1;
		    		  int a[]={600,410,800,400,550};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	service[i]="GrilledChickenSandwich";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	service[i]="PenneArrabiata";
		    	i+=1;

			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="FetuccinneAlfredo";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	service[i]="ClassicBeefBurger";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	service[i]="MushroomBurger";
		    	i+=1;
			}

		}
		if(n==3){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tPIZZAS        \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Margherita\nRs: 600\n\n[2]:Chicken Tikka\nRs: 410\n\n[3]:Hot & Spicy\nRS: 800\n\n[4]:Pepperoni\n RS: 400\n\n[5]:Mediterranean Pizza\n RS 550";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY \n"	;
		    cin>>n1;
				  int a[]={600,410,800,400,550};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	service[i]="Margherita";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	service[i]="ChickenTikka";
		    	i+=1;
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	service[i]="HotandSpicy";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	service[i]="Pepperoni";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	service[i]="MediterraneanPizza";
		    	i+=1;
			}
		}
		int q;
		cls();
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items";
		cin>>q;
		cls();
		if(q==1)
		{
			shop::restro();

		}
		else if(q==2)
		{
			test(t,i,price,service);
		}
		else if(q==3){
		char l;
		for(int j=0;j<i;j ++)

			cout<<"["<<j+1<<"] :"<<service[j]<<"\n"<<"Rs:"<<price[j]<<"\n\n";
		cout<<"do you want to delete an item? (Y/N)";
		cin>>l;
		while(l=='y'||l=='Y'){
		{



			edit(i,service,price);
			i--;
			cout<<"do you want to delete an item? (Y/N)";
				cin>>l;

		if(l=='n'||l=='N')
		{
			break;
		}
			}
			}

				cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill ";

				cin>>q;

		if(q==1)
		{
			shop::restro();
		}
		else if(q==2)
		{
		test(t,i,price,service);
		}




}}};


long int receipt(){

srand (time(NULL));

long int receipt=rand()%1000+1;
			return receipt;
}


class bill:public shop{
	public:
		int j;
		int total;

	public:
		void show(){cout<<"nothing";
		}
		bill(){
		}
		int operator+(int z)
		{
			return this->total+z;
		}

		void displaybill(int t,int i,int price[],string service[])
		{
			cls();
			cout<<"\n\t\t\t------------------------------------------------";
			cout<<"\n\t\t\t------------------CRUZER---------------------";
			cout<<"\n\t\t\t--------------Customer Receipt:"<<receipt()<<"----------------";
			cout<<"\n\t\t\tITEM:\t\t\t\tAMOUNT:\n";
			for(int j=0;j<i;j++)
			{
				cout<<endl<<"\t\t\tITEM "<<j+1<<": "<<service[j]<<"\t\t\t"<<price[j];
				total=total+price[j];
			}
			cout<<"\n--------------------------------------------------";
			cout<<endl<<"QUANTITY \t\t\t\t"<<i<<endl;
			cout<<endl<<"TOTAL\t\t\t\t"<<t<<endl;
			regdata.open(name,ios::out|ios::app);
			regdata<<"\t\t\tBill Info\t"<<"Receipt:\t"<<receipt()<<endl;
			regdata<<"\t\tItems=\t"<<i<<"\t\tTotal purchase value=\t"<<t<<endl;
			regdata.close();
		}
		void rider(int t)
		{
			srand(time(NULL));
			string guy[]={"Arkam","Hassan","Alex","Hina","Faisal","Kamra","Rohan","Rabia","Tariq","Tooba","Rethek"};
			int index=rand()%7;
			cout<<"\n\t\t\t\tThank you for choosing Cruzer!\n";
			cout<<"\n\t\t\t\tPlease take notes the details provided below: \n";
			cout<<"\n\t\t\t\tReciept Number: "<<receipt()<<endl;
			cout<<"\n\t\t\t\tRider Name: "<<guy[index]<<endl;
			cout<<"\n\t\t\t\tRider Contact: 090078601"<<endl;
			cout<<"\n\t\t\t\tTotal Amount: "<<t<<endl;
			cout<<"\n\t\t\t\tMode Of Payment: Cash"<<endl;
			cout<<"\n\t\t\t\tArrival Time: 60 minutes"<<endl;
			}
	void feedback()
{
	regdata.open(name,ios::out|ios::app);
	int d;
	string str;
	system("pause");
	cls();
	cout<<"Do you wish to provide feedback: \n[1]Yes\n[2]No\n";
	cin>>d;
	if(d==2)
	{
		cout<<"Cruzer wishes you a happy service! Thank You!\n";
		exit();
	}
	else if(d==1)
	{
		cout<<"Team Cruzer will not take much of your time. Please answer the following questionaire: \n";
		cout<<"\nWas Cruzer website user friendly enough?If no please explain.\n";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Was the service upto mark?If no please explain.\n";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Was the customer service helpful?If no please explain.\n";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Was the service quick enough?If no please explain.\n";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Would you choose Cruzer again for ordering food?If no please explain.\n";
		getline(cin,str);
		regdata<<endl<<str;

		cout<<"Please add further comments or suggestions: \n";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Thank You for providing us with feedback. It is now stored in the Cruzer database for future consideration.\n\t\t\t\t Happy Service! \n";
		regdata.close();
		exit();
	}
}
};


void edit(int i,string service[],int price[]){
	int pos;



			cout<<"select the item you want to delete";
			cin>>pos;

   if(pos>i)
   {
   cout<<"\n\nThis value is out of range: select again";
   cin>>pos;

   }
   else
   {
   --pos;
   for(int k=pos;k<i;k++)
   {
    service[k]=service[k+1];
    price[k]=price[k+1];
   }
   cout<<"\n\nNew items in your cart: ";
   for(int k=0;k<i-1;k++)
   {
   cout<<"\n"<<service[k]<<"\t"<<"Rs:"<<price[k]<<"\n\n";

				}
			}
		}





void test(int t, int i,int a[],string service[]){
	bill b;
	b.displaybill(t,i,a,service);
	system("pause");
	cls();
	b.rider(t);
	b.feedback();

}



class admin:public shop{
	private:
	string aid;
	string apass;
	public:
	admin(){
	apass="1234";
	aid="1234";
	}
	void show(){
		cout<<"just for formality";
	}
bool login(string ai,string pa){
	if(ai=="1234" && pa=="1234"){
	}
	}
void control_panel(){
	mark:
	system("pause");
	cls();
	cout<<endl<<"-------------------------------------------------------------"<<endl;
	cout<<"1:for editing stocks"<<endl<<"2:for checking stocks"<<endl;
	cout<<"3:for editing employee number"<<endl<<"4:for checking total employees"<<endl;
	cout<<"5: for checking total revenue";
	cout<<endl;
	int v;
	cin>>v;
	if(v==1){
	int tst;
	cout<<endl<<"Enter the total number of stock that you want to set"<<endl;
	cin>>tst;
	set_tstock(tst);
	admin::get_tstock();
	goto mark;
}
else if(v==2){
	get_tstock();
	goto mark;
}
else if(v==3){
	cout<<endl<<"Enter the updated amount of employees, current employees are"<<endl;
	int en;
	cin>>en;
	set_enumb(en);
	goto mark;
}
else if(v==4){
	cout<<endl<<"Current employeees are"<<endl;
	get_enumb();
	goto mark;
}
else if(v==5){
	get_totalcash();
	goto mark;
}
}

	void set_tstock(int tst){
		totalstock=totalstock+tst;
	}
	void get_tstock(){
		cout<<"Total stock of the restaurant="<<totalstock;
	}

	void set_enumb(int en){
		employees=en;
	}
	void get_enumb(){
		cout<<"Total employees of the Cruzer ="<<employees;
	}

};


class customer: protected shop{
	protected:
		string email_id,emailid,emaiid;
		string pass,pw,password;
		string pass2;

		int choice;
		string add;
		int n;
		string n1;

	public:
		void menu(){
			cls();
			cout<<"Enter area you wish to have service provided to you: \n";
			cin>>add;
			cout<<"redirecting..";
			delay(400);
			cls();
			cout<<"Please wait while we locate "<<add<<endl;
			delay(800);
			cls();
			cout<<"\n\n\n\n\n\n\n\t\t\t\t\tLOADING";
			cout<<"\n\n\n\n\n\n\n\t\t\t\t\t";
			for(int v=0;v<12;v++)
			{
				cout<<"\xdb";
				delay(400);
			}
			cls();
			cout<<"\nService Providers found in "<<add<<"! Please choose your desired service to view : \n";
			cout<<"[1]Electrical Plumbing Carpenter's EPC\n";
			cout<<"[2]Elec\n";
			cout<<"[3]Salon\n";
			cout<<"[4]Restro (HIGHLY RECOMMENDED)\n";
			cin>>n;
			if(n==1)
			{
				cls();
			    cout<<"Redireting you to your chosen service provider!Please wait..";
			    delay(1000);
		      	cls();
		      	i=0;
		      	t-0;

			//	cout<<"Welcome to EPC's Wokshop!\n";
		         shop::epc();
			}

			else if(n==2)
			{
				cls();
			    cout<<"Redireting you to your chosen service!Please wait..";
			    delay(1000);
			    cls();
			    i=0;
			    t=0;

				//cout<<"Welcome to Elec Heaven!\n";
			     shop::elec();
			}
			else if(n==3)
			{
				cls();
			    cout<<"Redireting you to your chosen service!Please wait..";
			    delay(1000);
			    cls();
			    i=0;
			    t=0;

			//	cout<<"Welcome to Salon!\n";
			shop::salon();
			}
			else if(n==4)
			{
				cls();
			    cout<<"Redireting you to your chosen service!Please wait..";
			    delay(1000);
			    cls();
			    i=0;
			    t=0;

			}
				//cout<<"Welcome to Restro!\n";
			shop::restro();
			}

		void show(){cout<<"same";}
		void SignIn(){
			string emaiid,p;
			cls();
			cout<<"Enter username or email address: \n";
			cin>>email_id;
			cout<<"Enter password: \n";
			cin>>pass;
			regdata.open(name,ios::in);
			regdata.seekg(0,ios::beg);
			while(!regdata.eof()){
				getline(regdata,emaiid);
				getline(regdata,pw);
				regdata.close();
			if((email_id==emaiid) && (pass==pw)){

				system("pause");

				customer::menu();

			}


			else
			{
			   	cout<<"\nAccess Denied!Do you wish to try again?\n[1]YES\n[2]NO\n";

				cin>>choice;
				if(choice==1)
				{
					cls();
					cout<<"Redirecting back to login page.. Please Wait!\n";
					cls();
					customer::SignIn();
				}
				else if(choice==2)
				{
					exit();
				}
			}
			regdata.close();}
		}
		void SignUp()
		{
			cls();
	int ph;
			cout<<"Enter your email address: \n";
			cin>>emailid;
			cout<<"enter phone number: \n";
			cin>>ph;
			cout<<"Enter a strong password: \n";
			cin>>password;
			cout<<"Enter a strong password again: \n";
			cin>>pass2;
			if(password==pass2)
			{	regdata.open(name,ios::app);
			regdata<<emailid<<"\n"<<password<<"\n";
				regdata.close();
				cout<<"Your Sign Up was successful! Cruzer will send you regular notifications with our weekly deals. Thank You!\n";
				cout<<"Do you want to place an order? press 1\n";
				int A;
				cin>>A;
				if (A==1){

				customer::SignIn();}
			}
		else if (pw!=pass)
			{
				cout<<"Passowrds do not match!Please Try again.\n";
				cin>>pass2;

			}
			cout<<"Your Sign Up was successful! Cruzer will send you regular notifications with our weekly deals. Thank You!\n";
			cout<<"do you want to place an order? press 1";
				customer::SignIn();

		}
		void start()
		{char n[20];
			cls();
			cout<<"\nWelcome to Cruzer!\n";
			cout<<"Please enter your name for referencing purposes: \n";
			cin>>n;
			name=n;
			cls();
			cout<<"Thank You "<<name<<" for choosing Cruzer!\n";
			cout<<"Choose the appropriate option: \n [1] Sign Up\n [2]Sign In\n";
			cin>>choice;
			if(choice==1)
			{
				customer::SignUp();
			}
			else if(choice==2)
			{
				customer::SignIn();
			}
		}
};


class choice{
	public:
	choice(){
	admin ad;
	int acc;

	{time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	cout << "\n\n\t\t\t\tCURRENT TIME:\n";
	cout << "\t\t\t\t\t\t"<<timePtr->tm_hour << ":"<< timePtr->tm_min << ":"<< timePtr->tm_sec << endl;
	cout << "\t\t\t\tToday's Date: " <<endl;
	cout << "\t\t\t\t\t\t"<<timePtr->tm_mday << "/" << timePtr->tm_mon+1 << "/" << timePtr->tm_year+1900  <<endl<<endl;

	}
	cout<<"\n\t\t\t\t\t\t\tSERVICING PROVIDING SYSTEM\n";
	cout<<"\t\t\t\t\t\t\t\tCRUZER\n";
	cout<<"PRESENTED BY:\n Mohammed Abdul Mannan\n Abul Hasan Sayeed\n";
	delay(300);
	system("pause");
	cls();

trys:
cout<<"\n\t\t\t\tCRUZER"<<endl<<endl;
cout<<"\t\t\t\tEnter your choice"<<endl;
cout<<"\t\t\t\t1: Customer Access"<<endl;
cout<<"\t\t\t\t2: Admin access"<<endl;
cout<<"\t\t\t\t3: Return back"<<endl<<endl;
LOOP:cin>>acc;
if(acc==2){
cout<<endl<<endl<<"\n\t\t\t\tEnter ID:\n\t\t\t\t";
string id,pass;
cin>>id;
cout<<"\n\t\t\t\tPASSWORD:\n\t\t\t\t";
cin>>pass;
if(ad.login(id,pass)==1){
	system("CLS");
	cout<<"login successful"<<endl;
	ad.control_panel();
}
else{

	cout<<"ERROR-Authorisation Required"<<endl<<endl<<endl;
	cout<<"Try again?1 for YES"<<endl;
	int lo;
	cin>>lo;
	if(lo==1){
		cout<<"Enter the choice again"<<endl;
	goto LOOP;
}
else{
	cout<<"Thanks for visiting Cruzer page"<<endl;
}
}
}
else if(acc==1){
		customer obj;
	obj.start();
}
else if(acc==3){
	cout<<"Thanks for visitng Cruzer page"<<endl;
}
}
};

int main(){
system("COLOR E0");
cls();
choice ch;
}
