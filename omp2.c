
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include <omp.h>

// 1.084:Threads 8
// 1.108:Threads 4
// 1.104Threads 2
// 1.104:Threads 0


int i,j,k,po,end;
time_t end;
   
double **AB;
double **A;
double **B;




int main(){
   int N  = 2096
   
   //omp_set_num_threads(2);
   printf("Init"); 
  
   ///Alocação de matrizes///
   AB  = (double **)calloc(N,sizeof(double*));
   A   = (double **)calloc(N,sizeof(double*));
   B   = (double**)calloc(N,sizeof(double*));
   
   
   for(i=0;i<N;i++){
     A[i]  = (double *) calloc(N,sizeof(double));
     B[i]  = (double *) calloc(N,sizeof(double));
     AB[i] = (double *) calloc(N,sizeof(double));	
   }
   
   
   

   for(i=0;i<N;i++){ 
	 for(j=0;j<N;j++){
	    if(i == j)
	      A[i][j] = 1;
	    else
	      A[i][j] = 0;
	
	 }
   }
   

	
     for(i=0;i<N;i++){
	   for(j=0;j<N;j++){
	       po = 5 * (i+j); 
	       B[i][j] = (po*po) +1;
		   			 
	  }		 
	  
   }  
   

             /*Print na Tela*/
             
              

    
   
   for(i=0;i<N;i++){
      free(A[i]);
      free(B[i]);
      free(AB[i]);
   
   }
      free(A);
      free(B);
      free(AB);
      printf("\nMemoria Desalocanda...\nSucesso!");
  
   
   system("pause");
   return 0;

}


 //A= (1 0)  B= (1  25)   (1*1+0*25 1*25+0*100)  (1  25)   
    //(0 1)     (25 100)  (0*1+1*25 0*25+1*100)  (25 100)
