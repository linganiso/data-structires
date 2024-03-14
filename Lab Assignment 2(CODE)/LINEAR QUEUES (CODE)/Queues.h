//Header file: Queue.h
#ifndef QUEUE_H
#define QUEUE_H

// allows program to perform input and output
#include <iostream>	

// definition of array size			
#define size 5					

// use std namespace
using namespace std;			

// declare class Stack
class Queues						
{
	// private access specifier
	private:					
		// variable declarations			
		int front;
		// declare integer variable front
						
		int rear;	
		// declare integer variable rear
					
		int intCount;
		// declare integer variable intCount
					
		int arr[5];	
		//declaration of the size of array			
	
	// public access specifier
	public:
		Queues();
		//default contructor
						
		bool isEmpty();	
		//Function to determine whether the Queue is empty.
		//Postcondition: Returns true if the Queue is empty,
		// otherwise returns false.	
			
		bool isFull();	
		//Function to determine whether the Queue is full.
		//Postcondition: Returns true if the Queue is full,
		// otherwise returns false.
				
		void enqueue(int);	
		//Function to add value to the Queue.
		//Precondition: The Queue exists and is not full.
		//Postcondition: The Queue is changed and value is added
		// to the rear of the Queue.
			
		int dequeue();	
		//Function to remove the top element of the Queue.
		//Precondition: The Queue exists and is not empty.
		//Postcondition: The Queue is changed and the front element
		// is removed from the Queue.
				
		int count();
		//Function to count the number of element of the Queue
					
		void display();	
		//Function to display the element in the Queue array
				
};// end class declaration
 #endif
