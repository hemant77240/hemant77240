#include <iostream>
using namespace std;
 int main (){
 
 	
 	
 	int n;
 	cout<< " size of array"<<endl;
 	
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++){
 		cout<<" enter value"<<endl;
 		
 		cin>>arr[i];
 		
	 }
	 
	for(int i=1; i<n; i++){
		int x= arr[i];
		
		for (int j=i-1; j>=0; j--){
			
			if(arr[j]>x){
				
				arr[j+1]=arr[j];
				
				}
			 else {
				break;
				
			}	  
				
				
			
			arr[j]=x;
			
		}
	
		
	} 
	cout<<"final shorted array"<<endl;
	for(int p=0; p<n; p++){
	 	cout<<arr[p];
	 	cout<<" "<<endl;
	 	
}
}
	
