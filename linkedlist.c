#include <stdlib.h>
#include <stdio.h>

#define INIT 10

struct node {
	int value;
	struct node *next=NULL;

};


struct node *head=NULL;
struct node *current=NULL;

void printlist() {

	struct node *ptr=head;
	printf("/n[ ");

	while (ptr!=NULL) {
		printf("%d, ",ptr->value);
		ptr=ptr->next;

	
	printf(" ]");

}
 

void insertfirst(node n) {











int main(void){

	return 0;
}

