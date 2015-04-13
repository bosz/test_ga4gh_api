#include<stdio.h>
#include<avro.h>

GAReference * getReference(char *id){
	GAReference *ref;
	
	//The server code returns the structure and then i get the number of GAReference.
	int size = 5; //i assumed that the number of returned references is 5;

	*ref = (GAReference *) malloc ( size * sizeof(GAReference) );

	//fill the values returned from the server code to ref
	return *ref;
}
