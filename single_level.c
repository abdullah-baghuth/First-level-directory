
#include <stdio.h> 

struct { 
char dname[10]; 
char fname[10][10]; 
int fcnt; }dir;
 
int main(void) 
{ 
    int c; 
    dir.fcnt=0; 
	printf("\nEnter the name of directory:"); 
	scanf("%s",dir.dname); 
	do 
	{ 
	   printf("\nEnter the name of the file:"); 
	   scanf("%s",dir.fname[dir.fcnt]); 
	   dir.fcnt++; 
	   printf("\nDo you want to continue:1/0?"); 
	   scanf("%d",&c); 
	}
	while(c==1);
	printf("The directory name is:%s\n",dir.dname);
	printf("The Files are:\n"); 
	for(int i=0;i<dir.fcnt;i++) 
		{ printf("%s\n",dir.fname[i]); } 
return 0; 
}
