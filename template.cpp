#include<iostream>
#include<string.h>
 using namespace std;
  template<class T>
   
    class sort
    {
    	public:
    	int array_size, i,j, temp;
    	T arr[100];
    	void read();
    	void Selection_sort();
    	
	};
	
	template<class T>
	void sort<T>::read()
	{
		 cout<<"Enter the size of the array\n";
		 cin>>array_size;
		 
		 cout<<"Enter the array elements\n";
		 for(i=0;i<array_size;i++)
		 {
		 	cin>>arr[i];
		 }
		
	}
    	
    template<class T>
	void sort<T>::Selection_sort()
	{
		cout<<"----------------Sorting array using Selection Sort we get-------------\n";
		for(i=0;i<array_size;i++)
		{
			for(j=i+1;j<array_size;j++)
			{
				if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			}
		}
		cout<<"Now the Array after sorting is :\n";
			for(i=0; i<array_size; i++)
			{
			cout<<arr[i]<<" ";
			}
		
	}
		
		int main()
		{
			
			sort<int>   a1;
			sort<float> a2;
			int ch;
			cin>>ch;
			switch(ch)
			{
				case 1:
					cout<<"Press 1 for sorting integer array \n";
					a1.read();
					cout<<"-----------------The array after the sorting is----------------\n";
					a1.Selection_sort();
					break;
				
				case 2:
					cout<<"Press 2 for sorting float array\n";
					a2.read();
					cout<<"------------------The array after the sorting is---------------\n";
					a2.Selection_sort();
					break;
				
				case 3:
					cout<<"Thank you!\n";
					break;
					default:
						break;
					
			}
			return 0;
		}
			
			
		
			
			
		
		
		
