#include<iostream>
#include<string>
using namespace std;
struct node
{
	string number;
	string first_name;
	string last_name;
	string country;
	node*next;
};
node*head=NULL;
int c=0;
void insertAt_firstin_contact(string number,string first_name,string last_name,string country)
{ 
	//insert new contact in first
	node*newcontact=new node;
	newcontact->number=number;
	newcontact->first_name=first_name;
	newcontact->last_name=last_name;
	newcontact->country=country;
	newcontact->next=head;
	head=newcontact;
	c=c+1;
}
void insertAt_lastin_contact(string number,string first_name,string last_name,string country)
{
	node*newcontact=new node;
	newcontact->number=number;
	newcontact->first_name=first_name;
	newcontact->last_name=last_name;
	newcontact->country=country;
	/newcontact->next=NULL;
if(head==NULL) //We would like to see if a list is empty, it will insert to a new contact at end
	{
	head=newcontact;
	}
	else{
	node*tail=head;
	while(tail->next!=NULL){
		tail=tail->next;
	}
	tail->next=newcontact;
	}
	c=c+1;  //So we know the list where you want to be contacted
}
void insertnewcontact_Atposition(string number,string first_name,string last_name,string country,int position)
{
    node*newcontact=new node;
	newcontact->number=number;
	newcontact->first_name=first_name;
	newcontact->last_name=last_name;
	newcontact->country=country;
	
	node*insert_position=head;
	int a=0;
	while(a<position-1) //1- //insert before position not after
	{
		insert_position=insert_position->next;
		a++;
	}

	newcontact->next=insert_position->next;
	insert_position->next=newcontact;
	c=c+1;
}
void deleteAt_first()
{
if(head==NULL)
{
cout<<"the list is empty"<<endl;
}
else{
node*del=head;
head=head->next;
delete del;
}
c=c-1; //Because whatever deletes contact counts the remainder of contact on the list
}
void deleteAt_postion(int postion)
{
	node*p1=head;
	int x=0;
	while(x<postion-1)
	{
		p1=p1->next;
	x++;
	}
	node*p2=p1->next;
	p1->next=p2->next;
	delete p2;
	c=c-1;
}
void displaycontact()
{
   node*display=head;
while(display!=NULL) //see the pointer display pointing to the head is not equal null or not
  { 
	cout<<display->number<<endl;
	cout<<display->first_name<<endl;
	cout<<display->last_name<<endl;
	cout<<display->country<<endl;
	display=display->next;

  }
}
void display_alphabet()
{
node*display1=head;  //first pointer indicates head
string temp,temp2,temp3,temp4;  //variables used to convey all information
int Q=0;    
while(Q<c) // do compare between names
{
	while(display1->next!=NULL)
	{	 
		if(head==NULL){ //We see that list is not empty or full. 
				 cout<<"the list is Empty"<<endl;
					  }
		else
		{	 
		if(display1->first_name > display1 ->next->first_name) //Compare the first name and the next name 
			{  
				temp=display1->first_name;  //A variable through which to transfer information from node to node
				display1->first_name=display1 ->next->first_name;
				display1 ->next->first_name=temp;
	

				temp2=display1->last_name;
				display1->last_name=display1 ->next->last_name;
				display1 ->next->last_name=temp2;
	

				temp3=display1->number;
				display1->number=display1 ->next->number;
				display1 ->next->number=temp3;
	
				temp4=display1->country;
				display1->country=display1->country;
				display1 ->next->country=temp4;
				
				display1=display1->next;
				
			}
		else display1 = display1 ->next;
		}	
	}
	display1 =head;
		Q++;	 
}
displaycontact();
}
int search_by_number(string number1)
{
	node*search=head;

	while(search!=NULL){

		if(search->number==number1) /*We see that the pointer that is pointing on the number is equal to the same number that I am calling, or no, and if it comes out,
			                        it prints the full contact*/
		{
			cout<<search->number<<endl;
			cout<<search->first_name<<endl;
			cout<<search->last_name<<endl;
			cout<<search->country<<endl;
		}
		search=search->next;
	}
}
int search_by_name(string name1)
{
	node*search=head;
	                         /*We see that the pointer that indicates the name is equal to the same name that I am a student,
							 no, and if it comes out, it prints the full contact*/
	while(search!=NULL){

		if(search->first_name==name1)
		{
			cout<<search->number<<endl;
			cout<<search->first_name<<endl;
			cout<<search->last_name<<endl;
			cout<<search->country<<endl;
		}
		search=search->next;
	}
}
int update(string new_name,string old_name,string number,string last_name,string country)
{
	  node* update = head;

	  if (head == NULL)
	  {
		 cout<<"Linked List is not find"<<endl;		  
	  }

	  else {
		  while (update != NULL)  //The while is to make the pointer go over the whole list until the contact reaches right in it.
		  {
			  
			  if (update->first_name == old_name)
			  {
				  update->first_name = new_name;
				  update->last_name=last_name;
				  update->number=number;
				  update->country=country;

				  cout<<update->number<<endl;
				  cout<<update->first_name<<endl;
				  cout<<update->last_name<<endl;
				  cout<<update->country<<endl;
				  
			  }
				  update = update->next;
		  }
	  }
}

void main()
{
	system("cls");
	system("color 03");
	cout << "\t\t\t\t*\t*";
	cout << "\t\t\t\t*\t*";
	cout << "\t\t\t\t**\t**";
	cout << "\t\t\t\t**\t**";
	cout << "\t\t\t\t**\t**";
	cout << "\t\t\t\t***\t***";
	cout << "\t\t\t\t***\t***";
	cout << "\t\t\t\t***\t***";
	cout << "\t\t\t\t***\t***";
	cout << "\t\t\t\t**\t**";
	cout << "\t\t\t\t**\t**";
	cout << "\t\t\t\t**\t**";
	cout << "\t\t\t\t*\t*";
	cout << "\t\t\t\t*\t*";	

		
	while (true)
	{
		int pos;
		string num, first, last, country, nname, oldname;
		int ch;
cout << "\n\t ** Welcome to Contact Management System **";
		cout << "\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] insertAt firstin contact\n\t\t[2] insertAt lastin contact\n\t\t[3] insert new contact Atposition\n\t\t[4] display contact\n\t\t[5] display contact alphabet\n\t\t\[6] deleteAt first contact \n\t\t[7] deleteAt by postion\n\t\t[8] search by number\n\t\t[9] search by firstname\n\t\t[10] update name\n\t\t[0] Exit\n\t\t=================\n\t\t"<<endl;
		cout<<"enter your choise:"<<endl;
		cin >> ch;

		switch (ch)
		{
		case 0: cout << "\n\n\t\tThank you for using CMS...";
			exit(0);
			break;
			break;
			break;
		case 1:
		{
			cout << "\n\n\t enter Phone_number:\n\n\t";
			cin >> num;
			cout << "\n\n\tfirst_name:\n\n\t";
			cin >> first;
			cout << "\n\n\t last_name:\n\n\t";
			cin >> last;
			cout << "\n\n\t country:\n\n\t";
			cin >> country;
			insertAt_firstin_contact(num, first, last, country);
			break;
		}
		case 2:
		{
		
			cout << "\n\n\t enter Phone_number:\n\n\t";
			cin >> num;
			cout << "\n\n\tfirst_name:\n\n\t";
			cin >> first;
			cout << "\n\n\t last_name:\n\n\t";
			cin >> last;
			cout << "\n\n\t country:\n\n\t";
			cin >> country;

			insertAt_lastin_contact(num, first, last, country);
			break;
		}
		case 3:
		{
			cout << "\n\n\tenter Phonenumber:\n\n\t";
			cin >> num;
			cout << "\n\n\tfirst name:\n\n\t";
			cin >> first;
			cout << "\n\n\t last name:\n\n\t";
			cin >> last;
			cout << "\n\n\tcountry:\n\n\t";
			cin >> country;
			cout << "\n\n\tposition:\n\n\t";
			cin >> pos;
			insertnewcontact_Atposition(num, first, last, country, pos);
			break;
		}
		case 4:
		{
			displaycontact();
		}
			break;
		case 5:
		{

			display_alphabet();
			break;
		}
		case 6:
		{

			deleteAt_first();

			break;
		}
		case 7:
		{
			cout << "\n\n\t position:\n\n\t";
			cin >> pos;
			deleteAt_postion(pos);

			break;
		}
		case 8:
		{
			cout << "\n\n\t enter Phone_number:\n\n\t";
			cin >> num;
			search_by_number(num);
			break;
		}
		case 9:
		{
			cout << "\n\n\t first_name:\n\n\t";
		cin >> first;
			search_by_name(first);
			break;
		}
		case 10:
		{


			cout << "\n\n\t new_name:\n\n\t";
			cin >> nname;
			cout << "\n\n\t old_name:\n\n\t";
			cin >> oldname;
			cout << "\n\n\t enter Phone_number:\n\n\t";
			cin >> num;
			cout << "\n\n\t last_name:\n\n\t";
			cin >> last;
			cout << "\n\n\t country:\n\n\t";
			cin >> country;
			update(nname, oldname, num, last, country);
			break;
		}
		
		default:
			cout << "\n\n\t error \n\n\t";
			break;
		}
	}
}






/*insertAt_firstin_contact("01024225445","khalid","ibrahim","egypt");
insertAt_lastin_contact("01024225456","ibrahim","saber","egypt");
insertAt_lastin_contact("01034645700","samir","essam","egypt");
insertAt_lastin_contact("01034645700","ahmed","ibrahim","egypt");
cout<<"before sorting"<<endl;
displaycontact();
cout<<endl;
cout<<"after sorting"<<endl;
display_alphabet();
displaycontact();
deleteAt_first();
cout<<"after delete"<<endl;
displaycontact();
deleteAt_postion(2);
cout<<"after delete postion"<<endl;
displaycontact();
cout<<"search"<<endl;
search_by_name("khalid");
cout<<"search by number"<<endl;
search_by_number("01024225445");
cout<<"update"<<endl;
update("adham","khalid","02225544455","waeel","paris");
return 0;
system("pause");
}*/