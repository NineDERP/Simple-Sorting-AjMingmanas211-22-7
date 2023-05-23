#include <iomanip>

inline void display(int *a, int n){
  int i;
  for(i=0;i<n;i++){
    cout<<setw(5)<<a[i];
  }
  cout<<endl;

}

// selection sort function module in C 
void selectionSort(int *a, int length) { 
	int i, j, mi; 
	for (i = 0; i < length - 1; i++) 
	{ 
    mi = i;
    cout<<"check number "<< i+1 <<" in order:";
    for(j=i+1;j < length; j++)
      {
        if(a[j]<a[mi]) mi=j;      }
      swap(a[i],a[mi]);
	   /* find the minimum */ 
	  
     display(a,length);
     
	} 
} 



void insertion(int *a,int n){
 int i,j;
  int new_number= 2; //decendingly
  int temp;
  for(i=1;i<n;i++)
    {
      temp=a[i];
      for(j=i-1;j>=0&&a[j]>temp;j--)
        {
          a[j+1] = a[j];
          display(a,i);
        }
      a[j+1] = temp;
      cout<<endl;
      cout<<"result:";
      display(a,i+1);
      cout<<endl;
    }
 

}

inline void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
  
}

void bubbleSort(int *a,int n){

int i,j,temp;
int sorted;
// how may pair to compare?
for(i=0;i<n-1;i++){
  sorted=0;
  for(j=0;j<n-1-i;j++){
  if(a[j]>a[j+1]){
  temp=a[j];
  a[j]=a[j+1];
  a[j+1]=temp;
  sorted=1;
  }
   display(a,n);
  }
  
  cout<<endl;
  cout<<"result: "; 
  display(a,n);
  cout<<endl;
  if(sorted==0) break;
  }
  
}
