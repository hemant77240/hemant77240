#include <iostream>
using namespace std;

int main(){
	
	int n;

	
	cout<< "enter array size";
	cin>>n;
	int arr[n];
	
	for(int j=0;j<n;j++){
		
		cin>>arr[j];
	}
	
	
	int key;
	cout<<"enter key value";
	
	cin>>key;
	int i=0;
	int c=0;
	while(i<n){
		if(arr[i]==key){
			c=c+1;
			break;
		
	}
	
else
    {
    	i=i+1;
    	
    	
	}
}
	if(c==0){
		cout<<"not found";
		
	}
	else{
		cout<<"found"<<endl;
		cout<<" found of index"<< i;
		
	}
}

