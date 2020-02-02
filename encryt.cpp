#include<iostream>
#include<vector>
#include<cstring>
#include<cctype> 
#include<string>

using namespace std ;

int main()
{
	/*char first[10] = {} ;
	char last[15] = {} ;
	char full[30] = {} ;
	
	cout<<"please enter your first name: " ;
    cin>>first ;
//  cout<<endl ;
	
	cout<<"please enter your last name: " ;
	cin>>last ;
	cout<<endl ;
	cout<<"======================"<<endl ;
    
	cout<<"hello "<<first<<" your first name conatin "<<strlen(first)<<" characters"<<endl ;
	cout<<"and your last name contain "<<strlen(last)<<" characters"<<endl ;
	cout<<endl ;
	//strcat(full, first) ;
	//strcat(full, " ") ;
	//strcat(full, last) ;
	//cout<<"Your full name is: "<<full<<endl ;
	 
	
	cout<<"enter your full name: " ;
	cin.getline(full,30) ;
	cout<<"Full Name: "<<full ;
	*/
	
	//#####*****SECTION 10 ChALLENGE*****#####
	
	cout<<"========================================"<<endl ;
	cout<<" Welcome to SUBSTITUTION CIPHER"<<endl ;
	cout<<"----------------------------------------"<<endl ;
	cout<<"Here you will covert your secret message into another form"<<endl ;
	cout<<"that is of your own and can encrypt the message in code form"<<endl ;
	cout<<"later on you can also decrypt the encrypted message o get the secret message "<<endl ;
	cout<<"-----------------------------------------"<<endl;
	cout<<endl ;
	
	string msg = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"} ;
	string message = {"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"} ;
	
	string secret = {} ;
	cout<<"Enter your secret message: " ;
	getline(cin,secret) ;
	cout<<endl ;
	
	string encrypt = {} ;
	cout<<"----------"<<endl ;
	cout<<"Encrypting message..."<<endl ;
	
	for(char c:secret){
		size_t position = msg.find(c) ;
		if(position != string::npos){
			char n = { message.at(position)} ;
			encrypt += n ;
		}
		else{
			encrypt += c ;
		}
	}
	
	cout<<"The Encrypted Message is: "<<encrypt <<endl ;
	cout<<"----------"<<endl ;
	
	
	string decrypt = {} ;
	cout<<"----------"<<endl ;
	cout<<"Decrypting message..."<<endl ;
	
	for(char c:encrypt){
		size_t position = message.find(c) ;
		if(position != string::npos){
			char n = { msg.at(position) } ;
			decrypt += n ;
		}
		else{
			decrypt += c ;
		}
	}
	cout<<"The Decrypt Message is: "<<decrypt<<endl ;
	cout<<"----------"<<endl ;
	
    return 0 ;
}