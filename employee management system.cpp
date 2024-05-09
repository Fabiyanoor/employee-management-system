#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<windows.h>
using namespace std;
struct emp{

	string name,id,address;

	int salary,contact;

};

int total=0;

emp e[1000];

void empdata(){

	int user=0;

	cout<<"How many employees data do you want to enter??"<<endl;

	cin>>user;;
		
	for(int i=total;i<total+user;i++){
		ofstream file("hello.txt",ios::app);

		cout<<"Enter data of employee "<<i+1<<endl<<endl;

		cout<<"Enter employee name: ";

		cin>>e[i].name;

		cout<<"Enter id: ";

		cin>>e[i].id;

		cout<<"Enter address: ";

		cin>>e[i].address;

		cout<<"Enter contact: ";

		cin>>e[i].contact;

		cout<<"Enter salary: ";

		cin>>e[i].salary;
		file<<"employee number is "<<i<<endl;
		file<<"name is  "<<e[i].name<<endl;
		file<<"id is "<<e[i].id<<endl;
		file<<"address is "<<e[i].address<<endl;
		file<<"contact no. is "<<e[i].contact<<endl;
		file<<"salary is  "<<e[i].salary<<endl;

	}

	total=total+user;

}

void show(){

	if(total!=0){

	for(int i=0;i<total;i++){

		cout<<"Data of employee "<<i+1<<endl;

		cout<<"Name: "<<e[i].name<<endl;

		cout<<"ID: "<<e[i].id<<endl;

		cout<<"Address: "<<e[i].address<<endl;

		cout<<"Contact: "<<e[i].contact<<endl;

		cout<<"Salary: "<<e[i].salary<<endl;
		

	}

    }

    else{
    	string data;
      	  ifstream file("hello.txt",ios::in);
 	  while(!file.eof())
     {
	  getline (file,data);
 	  cout<<data<<endl;
     }
 	  
    	cout<<"No data is entered"<<endl;

	}

}

void search(){

	if(total!=0){

	string id;

	cout<<"Enter id of employee which you want to search"<<endl;

	cin>>id;

	for(int i=0;i<total;i++){

		if(e[i].id==id){

		cout<<"Data of employee "<<i+1<<endl;

		cout<<"Name: "<<e[i].name<<endl;

		cout<<"ID: "<<e[i].id<<endl;

		cout<<"Address: "<<e[i].address<<endl;

		cout<<"Contact: "<<e[i].contact<<endl;

		cout<<"Salary: "<<e[i].salary<<endl;

		break;

		}

		if(i==total-1){

			cout<<"No such record found"<<endl;

		}

	}

}else{

	cout<<"No data is entered"<<endl;

}

}

void update(){

	if(total!=0){

	string id;

	cout<<"Enter id of employee which you want to update"<<endl;

	cin>>id;

	for(int i=0;i<total;i++){

		if(e[i].id==id){

		cout<<"Old data of employee "<<i+1<<endl;

		cout<<"Name: "<<e[i].name<<endl;

		cout<<"ID: "<<e[i].id<<endl;

		cout<<"Address: "<<e[i].address<<endl;

		cout<<"Contact: "<<e[i].contact<<endl;

		cout<<"Salary: "<<e[i].salary<<endl;

		cout<<"\nEnter new data"<<endl;

		cout<<"Enter employee name: ";

		cin>>e[i].name;

		cout<<"Enter id: ";

		cin>>e[i].id;

		cout<<"Enter address: ";

		cin>>e[i].address;

		cout<<"Enter contact: ";

		cin>>e[i].contact;

		cout<<"Enter salary: ";

		cin>>e[i].salary;
		
		ofstream file("hello.txt",ios::app);
		file<<"  --------- DATA AFTER UPDATING -----------   "<<endl;
		file<<"name is  "<<e[i].name<<endl;
		file<<"id is "<<e[i].id<<endl;
		file<<"address is  "<<e[i].address<<endl;
         file<<"contact is  "<<e[i].contact<<endl;
         file<<"salary is  "<<e[i].salary<<endl;
         
		break;

		}

		if(i==total-1){

			cout<<"No such record found"<<endl;

		}

	}

}else{

	cout<<"No data is entered"<<endl;


}

}
 void all(){
 	  cout<<"ALL THE DATA AVAILABILE BEFORE AND AFTER UPDATING"<<endl;
 	  string data;
 	  ifstream file("hello.txt",ios::in);
 	  while(!file.eof())
     {
	  getline (file,data);
 	  cout<<data<<endl;
     }
 	  
 	  
 }

void del(){

	if(total!=0){

	int press;

	cout<<"Press 1 to delete specific record"<<endl;

	cout<<"Press 2 to delete full record"<<endl;

	cin>>press;

	if(press==1){

		string id;

		cout<<"Enter id of employee which you want to delete"<<endl;

		cin>>id;

		for(int i=0;i<total;i++){

			if(e[i].id==id){

				e[i].name=e[i+1].name;

				e[i].id=e[i+1].id;

				e[i].address=e[i+1].address;

				e[i].contact=e[i+1].contact;

				e[i].salary=e[i+1].salary;

				total--;

				cout<<"Your required record is deleted"<<endl;

				break;

			}

			if(i==total-1){

			cout<<"No such record found"<<endl;

		}

		}

	}

	else if(press==2){

		total=0;

		cout<<"All record is deleted"<<endl;

	}

	else{

		cout<<"Invalid Input"<<endl;

	}

}else{

	cout<<"No data is entered"<<endl;

}

}





login()
{
	string name,password,name2 ,password2;
	name="fabiya";
	password="1234";
	start:
	cout<<"\n\n\tENTER YOUR NAME :"<<endl;
	cin>>name2;
	cout<<"\n\n\tENTER YOUR PASSWORD :"<<endl;
	cin>>password2;
	if(name2==name&&password2==password)
	{
			cout<<"\n\n\t\tEmployee Management System"<<endl;


	{

	system("CLS");

	char ch;

	while(1){
	 cout<<"\t\n\t\t\t\t****************************"<<endl;
      cout<<"\t\n\t\t\t\t  EMPOLYEE MANAGMENT SYSTEM "<<endl;
      cout<<"\t\n\t\t\t\t******************************"<<endl;
       cout<<" YOU CAN PERFORM FOLLOWING OPERATIONS"<<endl;
	cout<<"\n\nPress 1 to enter data"<<endl;

	cout<<"Press 2 to show data"<<endl;

	cout<<"Press 3 to search data"<<endl;

	cout<<"Press 4 to update data"<<endl;

	cout<<"Press 5 to delete data"<<endl;
	
	cout<<"Press 6 to diplay all the old and new data"<<endl;

	cout<<"Press 7 to logout"<<endl;

	cout<<"Press 8 to exit"<<endl;

	ch=getch();

	system("CLS");

	switch(ch){

		case '1':

			empdata();

			break;

		case '2':

			show();

			break;

		case '3':

			search();

			break;

		case '4':

			update();

			break;

		case '5':

			del();

			break;
			
			
	   case '6':
	   	
	   	     all();
	   	     
	   	     break;
	   	     

		case '7':

			goto start;

			break;

		case '8':

			exit(0);

			break;

		default:

			cout<<"\aInvalid Input"<<endl;

			break;

     	}

    }

   }
	}
	else
	{
		cout<<"\n\tinvalid username and password\n"<<endl;
	}
}

signup(){
	  string username,password;

    cout<<"\n\n\n\t\t******Signup******"<<endl;

	cout<<"\t\tEnter new username: ";

	cin>>username;

	cout<<"\t\tEnter new password: ";

	cin>>password;

	cout<<"\t\tYour new id is creating please wait..";

	for(int i=0;i<3;i++)

	{

		cout<<".";

		Sleep(200);

	}

	cout<<"\n\t\tYour id created successfully";

	Sleep(200);

	start:

	system("CLS");

	string usrn,pswd;

	cout<<"\n\n\t\tEmployee Management System"<<endl;

	cout<<"\n\n\n\t\t   LOGIN"<<endl;

	cout<<"\t\tEnter username: ";

	cin>>usrn;

	cout<<"\t\tEnter password: ";

	cin>>pswd;

	
	if(usrn==username&&pswd==password)
    {
			cout<<"\n\n\t\tEmployee Management System"<<endl;


	{

	system("CLS");

	char ch;

	while(1){
      cout<<"\t\n\t\t\t\t****************************"<<endl;
      cout<<"\t\n\t\t\t\t  EMPOLYEE MANAGMENT SYSTEM "<<endl;
      cout<<"\t\n\t\t\t\t******************************"<<endl;
      cout<<" YOU CAN PERFORM FOLLOWING OPERATIONS"<<endl;
	 	cout<<"\n\nPress 1 to enter data"<<endl;

	cout<<"Press 2 to show data"<<endl;

	cout<<"Press 3 to search data"<<endl;

	cout<<"Press 4 to update data"<<endl;

	cout<<"Press 5 to delete data"<<endl;
	
	cout<<"Press 6 to diplay all the old and new data"<<endl;

	cout<<"Press 7 to logout"<<endl;

	cout<<"Press 8 to exit"<<endl;

	ch=getch();

	system("CLS");

	switch(ch){

		case '1':

			empdata();

			break;

		case '2':

			show();

			break;

		case '3':

			search();

			break;

		case '4':

			update();

			break;

		case '5':

			del();

			break;
			
			
	   case '6':
	   	
	   	     all();
	   	     
	   	     break;
	   	     

		case '7':

			goto start;

			break;

		case '8':

			exit(0);

			break;

		default:

			cout<<"\aInvalid Input"<<endl;

			break;

     	}

    }

   }
	}
    
else
   { 
	cout<<"\ninvalid username and password\n"<<endl;
   } 
    }
	

   
 int main()
 
 { 
  system("color 0B");
    cout<<"\t\t_______________________________________\n"<<endl;
    cout<<"\t\t-----EMPOLYEE MANAGEMENT SYSTEM-------\n";
    cout<<"\t\t_______________________________________\n"<<endl;
   cout<<"\n\t****select 1 to login ****"<<endl;
   cout<<"\n\t****select 2 to sign up****"<<endl;
   char ch;
   ch=getch();
   switch(ch)
   {
   	case '1':
   		
   		login();
   		break;
   	case '2':
   		
   		signup();
   		break;
   			
   	default :
	   cout<<"\n\tinvalid input...."<<endl;
	   break;
	   		
   }
   }

