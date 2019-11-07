#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <math.h>

#define MAX 2
int v[MAX];

float conta(int valor){
 return valor;
 
}
      ///Thread
void *thread_func(void *arg){
int *valor = (int *) (arg);
int conta;


//f(x) = 2x +5x+10 + 10*2 = ?
printf("Thread %d",*valor);


}

int main(){
pthread_t t1,t2,t3;
int i=0;
int a1 = 5;
int a2 = 10;
int a3 = 20;

pthread_create(&t1,NULL, thread_func,(void *)(&a1));
pthread_create(&t2,NULL, thread_func,(void *)(&a2));
pthread_create(&t2,NULL, thread_func,(void *)(&a3));

//pthread_join(t1,NULL);
//pthread_join(t2,NULL);	
//pthread_join(t3,NULL);		

    

exit(0);
}

