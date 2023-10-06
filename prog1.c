#include<stdio.h>
#include<stdlib.h>
struct sll
{
	int data;
	struct sll*p;
};
int main()
{
	struct sll*head=(struct sll*)malloc(sizeof(struct sll));
	head->data=10;
	head->p=NULL;
	struct sll* current=(struct sll*) malloc (sizeof (struct sll));
	current->data=20;
	current->p=NULL;
	head->p=current;
	current=(struct sll*)malloc(sizeof (struct sll));
	current->data=30;
	current->p=NULL;
	head->p->p=current;
	printf("%d->%d->%d", head->data, head->p->data, head->p->p->data);
	return 0;
}
