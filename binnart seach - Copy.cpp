#include <iostream>

using namespace std;


int main(){
	
	int n;
	cout<<"enter size of array"<<endl;
	
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cout<<"enter element"<<endl;
		
		cin>>arr[i];
		
	}
	
	int low=0;
	int high=n-1;
	int c=0;
	int mid =(low+high)/2;
	int key;
	cout<<"enter key value"<<endl;
	
	cin>>key;
	
	while(low<=high){
		
		if (arr[mid]==key){
			c=c+1;
			break;
		}
			else if(arr[mid]>key){
				high=mid-1;
				
			}
			else (arr[mid]<key);{
			
			
				
				low=mid+1;
				
			}
			
			
			
			
		}
		
		if(c==0){
			 cout<<" element not found"<< endl;
			 
		}
		else
		cout<<"element found of index" <<endl;
		cout<<mid;
		
	}
	

