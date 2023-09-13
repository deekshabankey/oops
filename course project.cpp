#include<iostream>
#include<fstream>
using namespace std;

string z[]={"Bat man","Saga of the Swamp Thing","Fables","Hellboy","Preacher"};
int z1[]={1000, 960,1200,500,750};
int z2[]={50,40,55,25,35};
string y[]={"The Great Gatsby","The Catcher in the Rye","Emma","The Lord of Rings","Great Expectations"};
int y1[]={1000, 960,1200,500,750};
int y2[]={50,40,55,25,35};
string x[]={"Dracula","I Am Legend","Misery","Tales of Mystery and Imagination","The Strange Case of Dr Jekyll and Mr Hyde"};
int x1[]={1000, 960,1200,500,750};
int x2[]={50,40,55,25,35};
string w[]={"Frankenstein","Foundation","The Stars My Destination","The Moon is a Harsh Mistress","Neuromancer"};
int w1[]={1000, 960,1200,500,750};
int w2[]={50,40,55,25,35};
string v[]={"The Odyssey","Gulliver's Travels","The Adventures of Huckleberry Finn","Treasure Island","King Solomon's Mines"};
int v1[]={1000, 960,1200,500,750};
int v2[]={50,40,55,25,35};
string u[]={"Comic","Literature","Horror","Science Fiction","Adventure"};
int Total=0;
int size1,b;
int l=0;
char p=true;

class customer_details{
	public:
		string name="Abhishek",contact_no="7440517747",age="19",gender="Male";
		void add_customer_details(){
			cout<<"\nEnter the name of customer: ";
			cin>>name;
			cout<<"Enter the contact number of "<<name<<": ";
			cin>>contact_no;
			cout<<"Enter the age of "<<name<<": ";
			cin>>age;
			ofstream fout("d:/03-09.txt");
			fout<<"\nName: "<<name<<"\nContant number: "<<contact_no<<"\nAge: "<<age;
			fout.close();
		}
		void get_customer_details(){
			cout<<"\nName of customer: "<<name<<"\ncontact number of "<<name<<": "<<contact_no<<"\nAge of "<<name<<": "<<age<<"Gender: "<<gender;
		}
};
class cbooks{
	public:
		void buy_cbook(){
			size1=sizeof(z)/sizeof(z[0]);
			for(int i=0;i<size1;i++){
				cout<<"\n"<<i+1<<"."<<z[i]<<"\nPrice of the book: "<<z1[i]<<"\n";
			}
			cout<<"\n"<<"\nWhich book you want to buy(enter serial number): ";
			cin>>b;
			if(b<size1){
				Total=Total+z1[b-1];
				ofstream fout("d:/03-09.txt",ios_base::app);
				fout<<"\n"<<z[b-1]<<"\t"<<z1[b-1];
				fout.close();
			}
			else{
				cout<<"\nInvalid input\n";
			}
		}
		void rent_cbook(){
			size1=sizeof(z)/sizeof(z[0]);
			for(int i=0;i<size1;i++){
				cout<<"\n"<<i+1<<"."<<z[i]<<"\nPrice of the book: "<<z2[i]<<"\n";
			}
			cout<<"\n"<<"\nWhich book you want to rent(enter serial number): ";
			cin>>b;
			if(b<size1){
				Total=Total+z2[b-1];
				ofstream fout("d:/03-09.txt",ios_base::app);
				fout<<"\n"<<z[b-1]<<"\t"<<z2[b-1];
				fout.close();
			}
			else{
				cout<<"\nInvalid input\n";
			}
			
		}
		
};

class lbooks:public cbooks{
	public:
		void buy_lbook(){
			size1=sizeof(y)/sizeof(y[0]);
			for(int i=0;i<size1;i++){
				cout<<"\n"<<i+1<<"."<<y[i]<<"\nPrice of the book: "<<y1[i]<<"\n";
			}
			cout<<"\n"<<"\nWhich book you want to buy(enter serial number): ";
			cin>>b;
			if(b<size1){
				Total=Total+y1[b-1];
				ofstream fout("d:/03-09.txt",ios_base::app);
				fout<<"\n"<<y[b-1]<<"\t"<<y1[b-1];
				fout.close();
			}
			else{
				cout<<"\nInvalid input\n";
			}
		}
		void rent_lbook(){
			size1=sizeof(y)/sizeof(y[0]);
			for(int i=0;i<size1;i++){
				cout<<"\n"<<i+1<<"."<<z[i]<<"\nPrice of the book: "<<y2[i]<<"\n";
			}
			cout<<"\n"<<"\nWhich book you want to rent(enter serial number): ";
			cin>>b;
			if(b<size1){
				Total=Total+y2[b-1];
				ofstream fout("d:/03-09.txt",ios_base::app);
				fout<<"\n"<<y[b-1]<<"\t"<<y2[b-1];
				fout.close();
			}
			else{
				cout<<"\nInvalid input\n";
			}
			
		}
		
};

class hbooks:public lbooks{
	public:
		void buy_hbook(){
			size1=sizeof(x)/sizeof(x[0]);
			for(int i=0;i<size1;i++){
				cout<<"\n"<<i+1<<"."<<x[i]<<"\nPrice of the book: "<<x1[i]<<"\n";
			}
			cout<<"\n"<<"\nWhich book you want to buy(enter serial number): ";
			cin>>b;
			if(b<size1){
				Total=Total+x1[b-1];
				ofstream fout("d:/03-09.txt",ios_base::app);
				fout<<"\n"<<x[b-1]<<"\t"<<x1[b-1];
				fout.close();
			}
			else{
				cout<<"\nInvalid input\n";
			}
		}
		void rent_hbook(){
			size1=sizeof(x)/sizeof(x[0]);
			for(int i=0;i<size1;i++){
				cout<<"\n"<<i+1<<"."<<x[i]<<"\nPrice of the book: "<<x2[i]<<"\n";
			}
			cout<<"\n"<<"\nWhich book you want to rent(enter serial number): ";
			cin>>b;
			if(b<size1){
				Total=Total+x2[b-1];
				ofstream fout("d:/03-09.txt",ios_base::app);
				fout<<"\n"<<x[b-1]<<"\t"<<x2[b-1];
				fout.close();
			}
			else{
				cout<<"\nInvalid input\n";
			}
			
		}
		
};

class sbooks:public hbooks{
	public:
		void buy_sbook(){
			size1=sizeof(w)/sizeof(w[0]);
			for(int i=0;i<size1;i++){
				cout<<"\n"<<i+1<<"."<<w[i]<<"\nPrice of the book: "<<w1[i]<<"\n";
			}
			cout<<"\n"<<"\nWhich book you want to buy(enter serial number): ";
			cin>>b;
			if(b<size1){
				Total=Total+w1[b-1];
				ofstream fout("d:/03-09.txt",ios_base::app);
				fout<<"\n"<<w[b-1]<<"\t"<<w1[b-1];
				fout.close();
			}
			else{
				cout<<"\nInvalid input\n";
			}
		}
		void rent_sbook(){
			size1=sizeof(w)/sizeof(w[0]);
			for(int i=0;i<size1;i++){
				cout<<"\n"<<i+1<<"."<<w[i]<<"\nPrice of the book: "<<w2[i]<<"\n";
			}
			cout<<"\n"<<"\nWhich book you want to rent(enter serial number): ";
			cin>>b;
			if(b<size1){
				Total=Total+w2[b-1];
				ofstream fout("d:/03-09.txt",ios_base::app);
				fout<<"\n"<<w[b-1]<<"\t"<<w2[b-1];
				fout.close();
			}
			else{
				cout<<"\nInvalid input\n";
			}
			
		}
		
};

class abooks:public sbooks{
	public:
		void buy_abook(){
			size1=sizeof(v)/sizeof(v[0]);
			for(int i=0;i<size1;i++){
				cout<<"\n"<<i+1<<"."<<v[i]<<"\nPrice of the book: "<<v1[i]<<"\n";
			}
			cout<<"\n"<<"\nWhich book you want to buy(enter serial number): ";
			cin>>b;
			if(b<size1){
				Total=Total+v1[b-1];
				ofstream fout("d:/03-09.txt",ios_base::app);
				fout<<"\n"<<v[b-1]<<"\t"<<v1[b-1];
				fout.close();
			}
			else{
				cout<<"\nInvalid input\n";
			}
		}
		void rent_abook(){
			size1=sizeof(v)/sizeof(v[0]);
			for(int i=0;i<size1;i++){
				cout<<"\n"<<i+1<<"."<<v[i]<<"\nPrice of the book: "<<v2[i]<<"\n";
			}
			cout<<"\n"<<"\nWhich book you want to rent(enter serial number): ";
			cin>>b;
			if(b<size1){
				Total=Total+v2[b-1];
				ofstream fout("d:/03-09.txt",ios_base::app);
				fout<<"\n"<<v[b-1]<<"\t"<<v2[b-1];
				fout.close();
			}
			else{
				cout<<"\nInvalid input\n";
			}
			
		}
		
};

class tbooks:public abooks{
	public:
		string t;
		string a;
		void get_books(){
			cout<<"\n\nDo you want to buy the book or rent the book: ";
			cin>>t;
			if(t=="buy"){
				ofstream fout("d:/03-09.txt",ios_base::app);
				fout<<"\nBooks you Buyed";
				fout.close();
			}
			if(t=="rent"){
				ofstream fout("d:/03-09.txt",ios_base::app);
				fout<<"\nBooks you Rented";
				fout.close();
			}
			while(p==true){
				if (t=="buy" or t=="Buy"){
					
					int size=sizeof(u)/sizeof(u[0]);
					for (int j=0;j<size;j++){
						cout<<"\n"<<j+1<<"."<<u[j];
					}
					cout<<"\n6.Exit and get Total bill"<<"\n";
					cout<<"\nWhich type of book you want to buy: ";
					cin>>a;
					if (a=="1"){
						buy_cbook();
					}
					else if(a=="2"){
						buy_lbook();
					}
					else if (a=="3"){
						buy_hbook();
					}
					else if(a=="4"){
						buy_sbook();
					}
					else if (a=="5"){
						buy_abook();
					}
					else if (a=="6"){
						for (int i=0;i<26;i++){
							cout<<"*";
						}
						cout<<" Details  ";
						for (int i=0;i<26;i++){
							cout<<"*";
						}
						ofstream fout("d:/03-09.txt",ios_base::app);
						fout<<"\n"<<"Total amount to be paid: "<<"\t"<<Total;
						fout.close();
						p=false;
					}
					else{
						cout<<"\nInvalid input\n";
					}
					}
				
				if (t=="rent" or t=="Rent"){
					
					int size=sizeof(u)/sizeof(u[0]);
					for (int j=0;j<size;j++){
						cout<<"\n"<<j+1<<"."<<u[j];
					}
					cout<<"\n6.Exit and get Total bill"<<endl;
					cout<<"\n\nWhich type of book you want rent: ";
					cin>>a;
					if (a=="1"){
						rent_cbook();
					}
					else if (a=="2"){
						rent_lbook();
					}
					else if (a=="3"){
						rent_hbook();
					}
					else if (a=="4"){
						rent_sbook();
					}
					else if (a=="5"){
						rent_abook();
					}
					else if(a=="6"){
						for (int i=0;i<26;i++){
							cout<<"*";
						}
						cout<<" Details  ";
						for (int i=0;i<26;i++){
							cout<<"*";
						}
						ofstream fout("d:/03-09.txt",ios_base::app);
						fout<<"\nBooks you Rented";
						fout<<"\n"<<"Total amount to be paid: "<<"\t"<<Total;
						fout.close();
						p=false;
					}
					else{
						cout<<"\nInvalid input\n";
					}
				}
			}
		}
};

int main(){
	for (int i=0;i<26;i++){
		cout<<"*";
	}
	cout<<" Book Shop ";
	for (int i=0;i<26;i++){
		cout<<"*";
	}
	cout<<"\n";
	customer_details x;
	x.add_customer_details();
	tbooks r;
	r.get_books();
	

	ifstream inputFile("d:/03-09.txt");
    if (!inputFile) {
        cerr << "Error: Unable to open the file." << endl;
    }
    string fileContent((istreambuf_iterator<char>(inputFile)),(istreambuf_iterator<char>()));
    inputFile.close();
    cout << fileContent <<endl;
    return 0;
}
