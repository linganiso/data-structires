#include <iostream>	
// allows program to perform input and output

#include "Queues.h"
// link header to implementation

using namespace std;
// use std namespace

// function main begins program execution
int main()
{	
	Queue q1;
	// declare object of Queue
	
	// variable declarations
	int option;
	// declare integer variable front
	int value;
	// declare integer variable front
	
	do
	{
		cout<<"==================================================";
		cout<<"\n What Operation do you want to perform ? \n Select Option(1-7).Enter 0 to Exit .\n";
		cout<<"=================================================="<<endl;
		cout<<"1. To Add Elements in a queue array. "<<endl;
		cout<<"2. To Dequeue Elements from the queue array. "<<endl;
		cout<<"3. To Check if the stack in Empty or Not."<<endl;
		cout<<"4. To Check if the stack in Full or Not."<<endl;
		cout<<"5. To Count the number of Elements in the array. "<<endl;
		cout<<"6. To Display Elements in the screen. "<<endl;
		cout<<"7. To Clear up the screen. "<<endl;
		
		// Print the first cout statement on the screen.
		// Print all the option statement that range (1 to 7).
		
		cout<<endl;
		// new line

		cout<<"--------------------------------------------------";
		cout << "\nOption: " ;
		//Prompt the user to enter option value (1 to 7).
		
		cin>>option;
		// Store the integer that is entered by the user.
		
		cout<<"--------------------------------------------------\n"<<endl;
		
		switch(option)
		{
			case 0:
				break;
				// Case 0 exit if the user enter 0 as option.
				
			case 1:
				cout<<"Enqueue Option \nEnter an item to Enqueue in the Queue"<<endl;
				cin>>value;
				q1.enqueue(value);
				break;
				// Case 1 allow the user to enter the value and enqueue 
				//to the Enqueue function to store it in queue array
				
				case 2:
					cout<<"Dequeue Option \nDequeue Value : "<<q1.dequeue()<<endl;
				break;
				// Case 2 dequeue the the value that was entered by the user 
				//in queue array 
				
			case 3:	
				if(q1.isEmpty())
					cout<<"Queue is Empty"<<endl;
				else
					cout<<"Queue is not Empty"<<endl;		
				break;
				// Case 3 is checking whether the queue is empty or not then if
				//the queue is empty print Queue is Empty otherwise print
				//Queue is not Empty.
				
			case 4:	
				if(q1.isFull())
					cout<<"Queue is Full"<<endl;
				else
					cout<<"Queue is not Full"<<endl;		
				break;			
				// Case 4 is checking whether the queue is full or not then if
				//the queue is full print Queue is full otherwise print
				//Queue is not full.
						
			case 5:
				cout<<"Count Operation \nCount of items in Queue : "<<q1.count()<<endl;;
				break;	
				// Case 5 count the number of element in a queue array
				
			case 6:
				cout<<"Display Function Called - "<<endl;
				q1.display();
				cout<<"\n\n";
				break;
				// Case 6 display the all the element in a queue array
				
			case 7:
				system("cls");
				break;
				// Case 7 clear up the screen.
					
			default:
				cout<<"Enter the propre option number"<<endl;
				// default print enter the propre option number if you enter
				//option which is not on this range (1 to 7).
		}
	}
	// Switch function allow the user to choose and enter different option
	
		while(option!=0);
		// The program termates if the user enter 0.
			
	return 0;
}
