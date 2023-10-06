#include<stdio.h>
#include<stdlib.h>
struct sll
{
        int data;
	struct sll*p;
};
void display_data(struct sll*head);
void diaplay_data(struct sll*head){
	struct sll*temp=NULL;
	temp=head;

	if (temp==NULL)
	{
		printf("The link is empty");
	}
int count=0;
while (temp!=NULL){
	count++;
	printf("%d",temp->data);
	temp=temp->p;
}
printf("%d", count);
}

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
        display_data(head);
	return 0;
}
