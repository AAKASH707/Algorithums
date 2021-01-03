//   Implementation of Bubble sort  
#include<iostream> 
#include<chrono>
using namespace std; 
void swap(int &a, int &b)    //swfunctionap    
{  
    int temp = a;  
    a = b;  
    b = temp;  
}  
//  function for bubble sort  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
// Last element is sorted   
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(arr[j], arr[j+1] );  
}  
void printarray(int arr[], int size)   // Function to print the array 
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
// main function  
int main()  
{   int arr[50] ,i,n;
	cout<< "Enter size of Array\n"; // input of array size
	cin>>n;
	for(i=0;i<n;i++)  //loop to fill the elements in array
	{	
		cout<<"Enter the element "<<i+1<<"_:";
		cin>>arr[i];
	}
     cout<<"Unsorted list"<<"\n"; //unsorted list input by user
    printarray(arr,n);
    auto start1 =std::chrono::high_resolution_clock::now();  //elapsed time 
    bubbleSort(arr, n);
    auto finish1=std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed1=finish1 - start1;
    cout<<"\nAfter sorting"<<"\n";
    printarray(arr,n);
    std::cout<<"Time elapsed: "<<elapsed1.count()<<"s\n";
    return 0;
}  
