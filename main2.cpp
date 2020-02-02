#include<iostream>
#include<vector>

using namespace std ;

int main()
{
	vector<int> list = {5,9,3,8} ;
	int small=0, large=0, n ;
	int mean ;
	char ans, choice ;
	
	do{
		cout<<"============================="<<endl ;
	    cout<<"Welcome to the mean maina"<<endl ;
		cout<<"-----------------------------"<<endl ;
		cout<<"(P).Print Number"<<endl ;
	    cout<<"(A).Add Number"<<endl ;
	    cout<<"(M).Display the Mean of the Number"<<endl ;
	    cout<<"(S).Display the Smallest Number in the List"<<endl ;
	    cout<<"(L).Display the Largest Number in the List"<<endl ;
		cout<<"(Q).Qiut"<<endl ;
	    cout<<"------------------------------"<<endl ;
	    cout<<"=============================="<<endl ;
	    cout<<endl ;
	
		cout<<"--------------------------"<<endl ;
		cout<<"Enter your choice: " ;
		cin>>choice ;
		cout<<endl ;
		
		switch(choice)
		{
			case 'p':
			case 'P': cout<<"***Print Number***"<<endl ;
					  if(list.size() == 0){
						  cout<<"[] - the List is Empty "<<endl ;
					  }
					  else{
						  cout<<"the List is: [ " ;
						  for(auto num:list){
							  cout<<num<<" " ;
						  }
						  cout<<"]"<<endl ;
					  }
			          break ;
			
			case 'a':
			case 'A': cout<<"***Add Number***"<<endl ;
			          cout<<"enter the number you wantto add: " ;
					  cin>>n ;
					  list.push_back(n);
					  cout<<n<<" is added to the List"<<endl ;
			          break ;
			
            case 'm':
		    case 'M': cout<<"***Display the Mean of the Number***"<<endl ;
			          if(list.size() == 0){
						  cout<<"Unable to determine the Mean of the List - No Data"<<endl ;
					  }
					  else{
						  int result=0 ;
						  for(auto num:list){
							  result += num ;
						  }
						  mean = (result/list.size()) ;
						  cout<<"The Mean of the List is: "<<static_cast<double>(mean)<<endl ;
					  }
					  break ;
	
			case 's':
			case 'S': cout<<"***Display Smallest Number***"<<endl ;
			          if(list.size() == 0){
						  cout<<"Unable to determine the Smallest Number - No Data"<<endl ;
					  }
					  else{
						  int small = list.at(0) ;
						  for(auto num:list){
							  if(num < small ){
								  small = num ;
							  }
						  }
						  
						  cout<<"the Smallest Number is: "<<small<<endl ;
					  }
					  break ;
			
			case 'l':
			case 'L': cout<<"***Display Largest Number***"<<endl ;
					  if(list.size() == 0){
						  cout<<"Unable to determine the Largest Number - No Data"<<endl ;
					  }
					  else{
						  int large = list.at(0) ;
						  for(auto num:list){
							  if(num>large){
								  large = num ;
							  }
						  }
						  
						  cout<<"the Largest Number is: "<<large<<endl ;
					  }
					  break ;
			
			case 'q':
			case 'Q': cout<<"***Quit***"<<endl ;
			          cout<<"GoodBye"<<endl ;
					  exit(0) ;
			          break ;
				
			default: cout<<"Unknown Selection...please enter again!!!"<<endl ;
		}
		
		cout<<endl ;
		cout<<"-------------------------"<<endl ;
		cout<<"Wnat to enter again: " ;
		cin>>ans ;
		cout<<"-------------------------"<<endl ;
		cout<<endl ;
		
	}while(ans == 'y' || ans == 'Y') ;

    return 0 ;		
}