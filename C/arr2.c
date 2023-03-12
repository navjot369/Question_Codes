#include<stdio.h>
int main(){
	int n , i ;
	printf("enter number: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter number %d: ",i);
		scanf("%d",&arr[i]);
	}
	// array is formed 

	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
    }

	// print array 

	int j;
    for(i=0,j=n-1 ;i<=n-1,j>=0 ;i++,j--){
    	if(arr[i] != arr[j]){
    		printf("array is not palindrome\n");
        }
	}
}