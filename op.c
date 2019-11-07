

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include <omp.h>


#define THREADS 8

int i,j,k,po,end;
double wall_timer; 
   
double **AB;
double **A;
double **B;




void serial(int n){
   
   for (i=0;i<n;i++){                                                 	
    for (k=0;k<n;k++){
      for (j=0;j<n;j++){
         AB[i][j]= AB[i][j] + A[i][k]*B[i][j];
        }
     }
  }

   
}


double Threads_2(int n){

 #pragma omp  parallel
  { 
  wall_timer = omp_get_wtime(); 
  #pragma omp for
  for (i=0;i<n;i++){                                                 	
    for (k=0;k<n;k++){
      for (j=0;j<n;j++){
         AB[i][j]= AB[i][j] + A[i][k]*B[i][j];
        }
     }
  }


  }
   return (double) omp_get_wtime() - wall_timer;
   
};


int main(){
  time_t end;
  int n=4096;

   printf("\nInit\n");
  
  
   ///Alocação de matrizes///
  
   A   = (double **)calloc(n,sizeof(double*));
   B   = (double**)calloc(n,sizeof(double*));
   AB  = (double **)calloc(n,sizeof(double*));
   
   
   for(i=0;i<n;i++){
     A[i]  = (double *) calloc(n,sizeof(double));
     B[i]  = (double *) calloc(n,sizeof(double));
     AB[i] = (double *) calloc(n,sizeof(double));	
   }
   
   
   
 for(i=0;i<n;i++){ 
	 for(j=0;j<n;j++){
	    if(i == j)
	      A[i][j] = 1;
	    else
	      A[i][j] = 0;
	
	 }
   }
   

	
  for(i=0;i<n;i++){
	   for(j=0;j<n;j++){
	       po = 5 * (i+j); 
	       B[i][j] = (po*po) +1;
		   			 
	  }		 
	  
   }  
   
   
for(int j=1;j<4;j++){
   for(i=0;i<=THREADS;i=i*2){
    if(i == 0){
       serial(n);
       printf("\n *IKJ* Time:%f  N=%i\n",(double) (clock() - end)/CLOCKS_PER_SEC,n);
       i=2;
    }
    
    else{  
       omp_set_num_threads(i);  
       end = clock() ;
       Threads_2(n);
       
     } 
     printf("\n *IKJ* Time_Atual:%f Timer_Thresds-%i:= %f N=%i\n",(double) (clock() - end)/CLOCKS_PER_SEC,i,Threads_2(n),n);
    }
    printf("\n\n fim \n\n");
}



   
   for(i=0;i<n;i++){
      free(A[i]);
      free(B[i]);
      free(AB[i]);
   
   }
      free(A);
      free(B);
      free(AB);
      printf("\nMemoria Desalocanda...\nSucesso!");
  
   
   getchar();
   return 0;

  
  
  
  
}
