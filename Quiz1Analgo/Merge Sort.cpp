#include<iostream>
using namespace std;

int main(){
	int A,p,q,r;
	int L[n1];
	int R[n2];
	
	int n1=q-p+1;
	int n2=r-q;
	
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1+ j]; 

	L[n1+1]
    i=1; j=1;

    for (k=p; k<r; k++){
        if (L[i] <= R[j]){
            A[k] = L[i];
            i = i+1;
        }
        else{
            A[k] = R[j];
            j = j+1;
        }
    }

}
