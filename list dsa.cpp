#include<iostream>
#include <stdlib.h>

using namespace std;

int n;
int N;

bool isfull(void){
	if (n==N)
	return true;
	else
	return false;
}

bool isempty(void){
	if (N==0)
	return true;
	else
	return false;
}

void insertatzero(int array[], int value){
	if (isfull()){
		cout<<"list is full"<<endl;
	}
	else{
		cout<<"enter the value you want to insert: ";
		cin>>value;
		for(int i=N-1;i>=0;i--)
		{
			array[i+1]=array[i];
		}
		array[0]=value;
		N=N+1;
	}
}

void insertatk(int array[], int value,int k){
		if (isfull()){
		cout<<"list is full"<<endl;
	}
	else{
		cout<<"enter the value you want to insert: ";
		cin>>value;
		for (int i=N-1; i>=k-1; i--){
			array[i+1]=array[i];
		}
		array[k-1]=value;
		N=N+1;
	}
}

void insertatend(int array[], int value){
		if (isfull()){
		cout<<"list is full"<<endl;
	}
	else{
		cout<<"enter the value you want to insert: ";
		cin>>value;
		array[N]=value;
		N=N+1;
		}
}

void Deleteatzero(int array[]){
	if (isempty()){
		cout<<"list is empty "<<endl;
	}
	else{
		for(int i=0;i<N;i++)
		{
			array[i]=array[i+1];
		}
		N=N-1;
	}
}

void Deleteatk(int array[],int k){
	if (isempty()){
		cout<<"list is empty "<<endl;
	}
	else{
		for(int i=k-1;i<N;i++)
		{
			array[i]=array[i+1];
		}
		N=N-1;
	}
}

void Deleteatend(int array[]){
	if (isempty()){
		cout<<"list is empty "<<endl;
	}
	else{	
		N=N-1;
	}
}

void search(int array[], int value){
	bool found=false;
	cout<<"enter the value you want to search: ";
	cin>>value;
	for (int i = 0; i<N; i++){
		if(array[i]==value)
		{
			found=true;
			break;
		}		
	}
	if(found==true)
	{
		cout<<"Searched value is present in the list "<<endl;
	}			
	else 
	cout<<"Searched value is not present in the list "<<endl;
}

void display(int array[]){
	cout<<"displaying:" <<endl;
	for (int i = 0; i<N; i++){
		cout<<array[i]<<endl;
	}
}

int main(){
	int array[]={};
	cout<<"enter size of array: ";
	cin>>n;
	cout<<"enter size of list: ";
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cout<<"Enter elements of list: ";
		cin>>array[N];	
	}
	int value, choice,k;
	while (true){
		cout<<"enter 1 to insert at zero\n";
		cout<<"enter 2 to insert at k\n";
		cout<<"enter 3 to insert at end\n";
		cout<<"enter 4 to Delete at zero\n";
		cout<<"enter 5 to Delete at k\n";
		cout<<"enter 6 to Delete at end\n";
		cout<<"enter 7 to search\n";
		cout<<"enter 8 to display\n";
		cout<<"enter 9 to exit\n";
		cout<<"enter your choice\n";
		cin>>choice;
		
		if (choice==0) 
		break;
		else{
			switch (choice){
				case 1: {
					insertatzero(array, value);
					break;
				}
				case 2:{
					cout<<"Enter the position at which you want to insert value";
					cin>>k;
					if(k>=0&&k<=N)
					{
						insertatk(array, value,k);
					}
					else
					{
						cout<<"Invalid position entered.";
					}
					
					break;
				}
				case 3:{
					insertatend(array, value);
					break;
				}
				case 4: {
					Deleteatzero(array);
					break;
				}
				case 5:{
					cout<<"Enter the position at which you want to delete value";
					cin>>k;
					if(k>=0&&k<=N)
					{
					Deleteatk(array,k);
					}
					else{
						cout<<"Invalid position entered.";
					}
					break;
				}
				case 6:{
					Deleteatend(array);
					break;
				}
				case 7: {
					search(array,value);
					break;
				}
				case 8: {
					display(array);
					break;
				}
				case 9: {
					exit(0);
				}
				default :{
					cout<<"invalid choice";
					break;
				}
				
			}
		}
		}
		return 0;
	}
