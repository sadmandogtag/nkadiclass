#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
struct process{
	struct process *next; //8
	struct process *prev;

	//payload:
	char name[10];
	char path[10];
	int vp;
};

struct process *head;

struct process n[11]= {
		{&n[1], (struct process *)&head, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, 0},
		{&n[2],                   &n[1], {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, 0},
		{&n[3],                   &n[2], {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, 0},
		{&n[4],                   &n[3], {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, 0},
		{&n[5],                   &n[4], {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, 0},
		{&n[6],                   &n[5], {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, 0},
		{&n[7],                   &n[6], {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, 0},
		{&n[8],                   &n[7], {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, 0},
		{&n[9],                   &n[8], {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, 0},
		{&n[10],                  &n[9], {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, 0},
		{NULL,                    &n[10],{0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, 0}};

int main() {
head = &n[0];
struct process *ptr = n;
ptr = malloc(10*sizeof(n));
struct process *newnode = malloc(sizeof(n));
memset(newnode->path,0,10);
memset(newnode->name,0,10);

struct process* current = head;
int i =0;

while(current != NULL){
	current->vp=i++;
	current = current ->next;
}
current =head;
while (current != NULL){
	printf("%d\n", current-> vp);
	current= current->next;
}
return 0;

}
