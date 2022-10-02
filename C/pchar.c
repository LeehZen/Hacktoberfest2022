#include<stdio.h>


int main(){
	char ori[20], rev[20];
	int i,n, a=0;

	printf("Enter a string: ");
	scanf("%s", ori);

	for(i=0; ori[i] != '\0';i++){
		n=i+1;
	}
	
	//printf("%s\n", ori);
	
	//printf("n: %d\n", n);

	for(i=0; i<n; i++){
		rev[i] = ori[n-i-1];
	}

	//printf("rev: %s\n", rev);

	for(i=0; i<n; i++){
		if( rev[i] != ori[i])
			a=1;
	}

	//printf("a: %d\n",a);

	if(a==1)
		printf("%s is not a palindrome\n", ori);
	else
		printf("%s is a palidrome\n",ori);

	return 0;
}
