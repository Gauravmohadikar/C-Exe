#include<iostream>
#include<vector>

using namespace std ;

/*int *large(int *x, int *y)   //returning pointer function 
{
	if(*x > *y)
	{
		return x ;
		
	}
	else 
		return y ;
}*/


int *create(size_t siz, int val)   //function for returningdynamically form function
{
	int *newstorage = nullptr ;
	newstorage = new int[siz] ;
	for(size_t i=0; i<siz; i++)
	{
		*(newstorage + i) = val ;
	}
	return newstorage ;
}

int display(const int *const array,int sze) //function for returningdynamically form function
{
	for(size_t i=0; i<sze; i++)
	{
		cout<<array[i]<<" " ;
	} 	
	cout<<endl ;
}


//void doubledata(int *ptr)  //passing pointer into the function
//	{
//		*ptr *= 2 ;
//	}
//
//void swap(int *a, int *b)
//{
//	int temp ;
//	temp = *a ;
//	*a = *b ;
//	*b = temp ;
//}	


int main()
{
	/*int *p ;
	cout<<"value of P: "<<p<<endl ;
	cout<<"address of p: "<<&p<<endl ;
	cout<<"size of p:"<<sizeof p<<endl ;
	p = nullptr ;
	cout<<"valur of p: "<<p<<endl ;
	double *a ;
	cout<<"size of a: "<<sizeof a <<endl ;
	unsigned long long *r ;
	cout<<"size of r: "<<sizeof r<<endl ;
	vector<string> *t = nullptr ;
	cout<<"size of t: "<<sizeof t<<endl ;
	
	int score = 100 ;
	int *ptr = &score ;
	cout<<"the value of score is: "<<score<<endl ;
	cout<<"the value of ptr is: "<<*ptr<<endl ;
	*ptr = 200 ;
	cout<<"the vlaue of ptr now is: "<<*ptr<<endl ;
	cout<<"the vlaue of score now is: "<<score<<endl ;
	
	double temphigh = 9256 ;
	double templow = 34 ;
	double *temp = &temphigh ;
	cout<<"the value of temp is: "<<*temp<<endl ;
	temp = &templow ; 
	cout<<"tthe value of temp now is: "<<*temp<<endl ;
	cout<<endl ;*/
	/*string name = "gaurav" ;
	string *nam = nullptr ;
	cout<<"the value of nam is: "<<nam<<endl ;
	nam = &name ;
	cout<<"the value of nam is: "<<*nam<<endl ;
	name = "gaurav mohadikar" ;
	cout<<"tthe value of nam now is: "<<*nam<<endl ;
	cout<<endl ;
	
	cout<<"here the example of defrenceing a pointer: "<<endl ;
	int num = 100 ;
	int *ptr = nullptr ;
	cout<<"the value of num is: "<<num<<endl ;
	cout<<"the value of ptr is: "<<ptr<<endl ;
    ptr = &num ;
	cout<<"the value of ptr now is: "<<*ptr<<endl ;
	*ptr = 250 ;
	cout<<"the value of num now is: "<<num<<endl ;
	cout<<"the value of ptr now is: "<<*ptr<<endl ;
	*/
	 
	//dynamic memory allocation
	
	/*int *ptr = nullptr ;
	ptr = new int ;
	cout<<"the loc of ptr is: "<<*ptr<<endl ;
	delete ptr ;
	cout<<"the loc of ptr now is: "<<ptr ;  //this ptr has memory addressin stack 
	cout<<endl ;
	size_t size = 0 ;
	double *dobptr = nullptr ;
	cout<<"how many: " ;
	cin>>size ;
	while(true)
	dobptr = new double[size] ;
    cout<<"the loc of dobptr is: "<<dobptr<<endl ;
    delete [] dobptr ;  
	//dobptr = nullptr ;*/
	
	//relation bt array and pointer
	/*
	int score[] = {100,95,89} ;
	cout<<"the value of score is: "<<score<<endl ;
	int *array = score ;
	cout<<"the value ofarray is: "<<array<<endl ;
	
	cout<<"score subscript notation: "<<endl ;
	cout<<score[0]<<endl ;
	cout<<score[1]<<endl ;
	cout<<score[2]<<endl ;

    cout<<"array subscript notation: "<<endl ;
	cout<<array[0]<<endl ;
	cout<<array[1]<<endl ;
	cout<<array[2]<<endl ;
	
	cout<<"array offset notation: "<<endl ;
	cout<<*array<<endl ;
	cout<<*(array+1)<<endl ;
	cout<<*(array+2)<<endl ;
	
	cout<<"score offset notation: "<<endl ;
	cout<<score<<endl ;
	cout<<(score+1)<<endl ;
	cout<<(score+2)<<endl ;
	*/
	/*int score[] = {100,95,85} ;
	cout<<"the valueof score is: "<<score<<endl ;
	int *ptr = score ;
	cout<<"the'value of ptr is: "<<ptr<<endl ;	
	cout<<endl ;
	cout<<"score subscript notation: "<<endl ;
	cout<<score[0]<<endl ;
	cout<<score[1]<<endl ;
	cout<<score[2]<<endl ;
	cout<<"ptr subscript notation: "<<endl ;
	cout<<ptr[0]<<endl ;
	cout<<ptr[1]<<endl ;
	cout<<ptr[2]<<endl ;
	cout<<"score offset notation: "<<endl ;
	cout<<score<<endl ;
    cout<<(score+1)<<endl ;
    cout<<(score+2)<<endl ;
    cout<<"score offset notation: "<<endl ;
    cout<<(ptr)<<endl ;
	cout<<ptr+1 <<endl;
	cout<<ptr+2<<endl ;
	cout<<endl ;
	cout<<endl ;
	int array[] = {10,20,30,40,-1};
	int *arr = array ;
	
	while(*arr!=-1)
	{
		cout<<arr<<endl ;
		*arr++ ;
	}
	*/
	
	//passing pointer into the function
	
	/*int value = 100 ;
    int *ptr = nullptr ;
	
	cout<<"the value of Value: "<<value<<endl ;
	doubledata(&value) ;
	cout<<"the value of ptr is: "<<value<<endl ;
	cout<<endl<<"==============="<<endl ;
	ptr = &value ;
	cout<<"the value of Value is: "<<value<<endl ;
	doubledata(ptr) ;
	cout<<"the value of ptr is: "<<value<<endl ;
	cout<<endl<<"=================================="<<endl ;
	int x=10, y=20 ;
	cout<<"value of x: "<<x<<endl ;
	cout<<"value of y: "<<y<<endl ;
	swap(&x,&y) ;
	cout<<"value of x now is: "<<x<<endl ;
	cout<<"value of y now is: "<<y<<endl ;
	*/ 
	
    // returning a pointer from a function 
	/*int *largest = nullptr ;
	int a= 100, b =200 ;
	largest = large(&a,&b) ;
	cout<<"the largest number is: "<<*largest <<endl ;
	*/
	
	//returning pointer dynamically from a function
	
	int *myarr = nullptr ;
	int size, inival ;
	cout<<"enter the size: " ;
	cin>>size ;
	cout<<endl ;
	cout<<"enter the initial value: " ;
	cin>>inival  ;
	cout<<endl ;
	
	myarr = create(size,inival) ;
	cout<<"========================="<<endl ;
	
	display(myarr, size) ;
	delete []myarr ;
	
	return 0 ;
}