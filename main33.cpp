#include<iostream>
#include<vector>

using namespace std ;

//menu function
void display() ;

//function
void dislist(vector<int> &list) ;
void addnum(vector<int> &list) ;
void meanlist(vector<int> &list) ;
void largenum(vector<int> &list) ;
void smallnum(vector<int> &list) ;
void quit() ;

void display() 
{
	cout<<"========================================="<<endl ;
	cout<<"*****welcome to menu*****" <<endl ;
    cout<<"========================================="<<endl ;
    cout<<"A.display the list"<<endl ;
    cout<<"B.add a number in the list"<<endl ;
	cout<<"C.display the mean of the list"<<endl ;
	cout<<"D.display the largest number in the list"<<endl ;
	cout<<"E.display the smallest number in the list"<<endl ;
	cout<<"F.Quit"<<endl ;
	
}


int main()
{
	vector<int> number = {1,2,3,4,5} ;
	char ch,ans ;
	
	do{ 
		display() ;
		cout<<"Enter the choice: " ;
	    cin>>ch ;
		cout<<endl ;
		
		switch(ch)
		{
			case 'a':
			case 'A': dislist(number) ;
			          break ;
			case 'b':
			case 'B': addnum(number) ;
			          break ;
			case 'c':
			case 'C': meanlist(number) ;
			          break ;
			case 'd':
			case 'D': largenum(number) ;
			          break ;
		    case 'e': 
			case 'E': smallnum(number) ;
			          break ;
		    case 'f':
			case 'F': quit() ;
			          break ;
			default: cout<<"wrong choice!!!"<<endl ;
			      
		}
		
		cout<<"----------------------------------"<<endl ;
		cout<<"want to enter again: " ;
		cin>>ans ;
		cout<<endl ;
		cout<<"----------------------------------"<<endl ;
	}while(ans == 'y' || ans == 'Y') ;
    
	
	
  return 0 ;
}


void dislist(vector<int> &list)
{
	cout<<"********************************"<<endl ;
	if(list.size() == 0)
	{
		cout<<"[] - List is empty"<<endl ;
	}
	else
	{   
		cout<<"[ " ;
		for(auto n:list)
		{
			cout<<n<<", " ;
		}
		cout<<" ]"<<endl ;
	}
	cout<<"***********************************"<<endl ;
}


void addnum(vector<int> &list)
{
	cout<<"***********************************"<<endl ;
    int n ; 
	cout<<"enter the number you want to add: " ;
	cin>>n ;
	list.push_back(n) ;
	cout<<endl ;
	cout<<"the number "<<n<<" is added to the list"<<endl ;
	cout<<"***********************************"<<endl ;
}


void meanlist(vector<int> &list)
{
	cout<<"*************************************"<<endl ;
	if(list.size() == 0)
	{
		cout<<" unable to determine the mean of the list... "<<endl ;
		cout<<"[] - list is empty"<<endl ;
	}
	else
	{
		int result = 0 ; 
      	int mean = 0 ; 
	    for(auto n:list)
     	{
	    	result += n ;
    	}
    	mean = (result/list.size()) ;
    	cout<<"the mean of the list is: "<<static_cast<double>(mean)<<endl ;
	}	
    cout<<"**************************************"<<endl ;
}


void largenum(vector<int> &list)
{
	cout<<"**************************************"<<endl ;
	if(list.size() == 0)
	{
		cout<<"Unable to determine the largest number in the list..."<<endl ;
		cout<<"[] - no data"<<endl ;
	}
	else
	{
		int large = list.at(0) ;
		for(auto n:list)
		{
			if(large < n)
				{
					large = n ;
				}
		}
		cout<<"the largest number in the list is: "<<large<<endl ;
	}
	cout<<"*********************************************"<<endl ;
}


void smallnum(vector<int> &list)
{
	cout<<"*********************************************"<<endl ;
	if(list.size() == 0)
	{
		cout<<"Unable to determine the smallest number in the list..."<<endl ;
		cout<<"[] - no data"<<endl ;
	}
	else
	{
		int small = list.at(0) ;
		for(auto n:list)
		{
			if(small > n)
			{
				small = n ;
			}
		}
		cout<<"the smallest number in the list is: "<<small<<endl ;
	}
	cout<<"************************************************"<<endl ;
}

void quit()
{
	exit(0) ;
}
