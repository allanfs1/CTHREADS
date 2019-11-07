#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

#define SIZE 10
int v[SIZE];

void *thread_func(void *arg){
	int *valor = (int *) (arg);
	int i;
	
	if(*valor == 1){
		printf("Threas execultado 1 \n");
		for(i=0;i< SIZE /2;i++){
			v[i] = 25;
		}
	}
	
	
	else{
		printf("Threas execultado 2 \n");
		for(i=SIZE /2;i<SIZE;i++){
			v[i]= 5;
			
		}
	}

	
}


int main(){
pthread_t t1,t2;
int i=0;
int a1 = 1;
int a2 = 2;

pthread_create(&t1,NULL, thread_func,(void *)(&a1));
pthread_create(&t2,NULL, thread_func,(void *)(&a2));

//pthread_join(t1,NULL);
//pthread_join(t2,NULL);		

for(i=0;i<SIZE;i++){
	printf("%d",v[i]);
}

exit(0);
}

