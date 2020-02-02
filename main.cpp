#include<iostream>
#include<vector>
/*using std::cout ;
using std::cin ;
using std::endl ;*/
using namespace std ;

int main()
{
	//section 7 challenge
	
	/*cout<<"========================"<<endl ;
	cout<<"\n section 7 challenge "<<endl ;
	
	vector<int> vector1 ;
	vector<int> vector2 ;
	
	cout<<"vector 1"<<endl ;
	vector1.push_back(10) ;
	vector1.push_back(20) ;
	cout<<"at index 1: "<<vector1.at(0)<<endl ;
	cout<<"at index 2: "<<vector1.at(1)<<endl ;
	cout<<"size of vector1: "<<vector1.size()<<endl ;
	
	cout<<"vector 2"<<endl ;
	vector2.push_back(100) ;
	vector2.push_back(200) ;
	cout<<"at index 1: "<<vector2.at(0)<<endl ;
	cout<<"at index 2: "<<vector2.at(1)<<endl ;
	cout<<"size of vector2: "<<vector2.size()<<endl ;
	
	cout<<"2D vector" ;
	vector<vector<int>> vector2d ;
	vector2d.push_back(vector1) ;
	vector2d.push_back(vector2) ;
	
	cout<<vector2d.at(0).at(0)<<" "<<vector2d.at(0).at(1)<<endl ;
	cout<<vector2d.at(1).at(0)<<" "<<vector2d.at(1).at(1)<<endl ;
	
	vector1.at(0) = 1000 ;
	
    cout<<vector2d.at(0).at(0)<<" "<<vector2d.at(0).at(1)<<endl ;
	cout<<vector2d.at(1).at(0)<<" "<<vector2d.at(1).at(1)<<endl ;
	
	cout<<"at index 1: "<<vector1.at(0)<<endl ;
	cout<<"at index 2: "<<vector1.at(1)<<endl ;
	cout<<"size of vector1: "<<vector1.size()<<endl ;
	
	cout<<"sum of two numbers: " ;
	int a = 1000 ;
	int b = 2000 ;
	cout<<"\n a "<<" "<<"+"<<" "<<"b"<<" "<<"="<<" "<<a+b ;*/
	
	//Dollor to Rupee Convertor 
	/*cout<<"====================="<<endl ;
	cout<<"DOLLOR TO RUPEES CONVERTOR"<<endl ;
	float rupee ;
	float dollor ;
    const float rs_per_$ = 74.5 ;
	cout<<"welcome to $ to Rs conversion"<<endl ;
	cout<<"enter the value in DOLLOR: $" ;
	cin>>dollor ;
	rupee = dollor * rs_per_$ ;
	cout<<"\n this is equivalent to Rupees "<<rupee ;
	dollor++ ;
	cout<<"\n dollor: $"<<dollor ;*/
	
	
	//Section 8 Challenge
	/*cout<<"n================" ;
	const int dollor = 100 ;
	const int quater = 25 ;
	const int dime = 10 ;
	const int nickel = 5 ;
	cout<<"\n Money exhange" ;
	int cents ;
	cout<<"\n enter the number of cents: " ;
	cin>>cents ;
	cout<<"\n changes provided to the user: "<<endl ; ;
	
	int balance = 0, dollorchange = 0, pennieschange = 0, quaterchange = 0, dimechange = 0, nickelchange = 0 ;
	
	dollorchange = cents/dollor ;
	//balance = cents - (dollorchange * dollor) ;
	balance = cents%dollor ;
	
	quaterchange = balance/quater ;
	//balance -= (quater * quaterchange) ;
	balance %= quater  ;
	
	dimechange = balance/dime;
	//balance -= (dimechange * dime) ;
	balance %= dime ;
	
	nickelchange = balance/nickel ;
	//balance -= (nickelchange * nickel) ;
	balance %= nickel ;
	
	pennieschange = balance ;
	
	cout<<"dollor: "<<dollorchange<<endl ;
    cout<<"quater: "<<quaterchange<<endl ;
	cout<<"dime: "<<dimechange<<endl ;
	cout<<"nickel: "<<nickelchange<<endl ;
	cout<<"pennies: "<<pennieschange<<endl ;*/
	
	//sequential flow   
	/*cout<<"======================="<<endl  ;
	const int min = 10 ;
	const int max = 100 ;
	int num ;
	cout<<"enter the number between "<<min<<" and "<<max<<": "<<endl ;
	cin>>num ;
	
	if(num >= min)
	{  cout<<"====statement1===="<<endl ;
	   cout<<num<<" is greater than "<<min<<endl ;
	   int diff = num-min ;
	   cout<<num<<" is "<<diff<<" greater than "<<min<<endl ;
		}
	
	if(num <= max){
	  cout<<"====statement2===="<<endl ;
	   cout<<num<<" is smaller than "<<min<<endl ;
	   int diff = max-num ;
	   cout<<num<<" is "<<diff<<" smaller than "<<max<<endl ;
	}
	
	if(num >= min && num <= max){
	  cout<<"====statement3===="<<endl ;
	   cout<<num<<" is in the range "<<endl ;
	   cout<<"this means statement 1 and 2 both will also display"<<endl ;
	}
	
	if(num == min || num == max){
		  cout<<"====statement4===="<<endl ;
	   cout<<num<<" is the boundary value "<<endl ;
	   cout<<"this means all statement will also display"<<endl ;	
	}*/
	
	
	//section 9 question example
	cout<<"============================"<<endl ;
	cout<<"section 9 example::"<<endl ;
	int length, width, height ;
	double bcost = 2.50 ;
    int maxd = 10 ;
	const int tier1 = 100 ;
	const int tier2 = 500 ;
	double tier1surcharge = 0.10 ;
	double tier2surcharge = 0.25 ;
	int package = 0;
	
	cout<<"Welcome to package cost calculator"<<endl ;
	cout<<"=========="<<endl ;
	cout<<"t&c"<<endl ;
	cout<<"1. base cost of every package is: $"<<bcost<<endl ;
	cout<<"2. if the package is greater than 100 cubic inches there is 10% of surcharge"<<endl ;
	cout<<"3. if the package is greater than 500 cubic inches there is 25% of surcharge"<<endl ;
	cout<<"===========" <<endl ;
	cout<<"enter the dimension of the package: " ;
	cin>>length>>width>>height ;
	cout<<endl ;
	
	if(length>maxd || width>maxd ||height>maxd){
		cout<<"Sorry!!! your package is rejected"<<endl ;
	}
	else{
		double cost = bcost ;
		package = (length*width*height) ;
		
		if(package>tier2){
			cost += (cost * tier2surcharge) ;
			cout<<"adding tier2 surcharge"<<endl ;
		} 
		else if(package>tier1){
			cost += (cost * tier1surcharge) ;
			cout<<"adding tier1 surcharge"<<endl ;
		}
		
		cout<<"the volume of your package is: "<<package<<endl ;
		cout<<"your package will cost: $"<<cost<<" to ship "<<endl ;
	}
	
	return 0 ;
}