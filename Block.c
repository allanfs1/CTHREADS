
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
//#include <conio.h>



int i,j,k,po,end;

double **AB;
double **A;
double **B;

///Dois Melhores ID
void Block_IKJ(int n){	
for (i=0;i<n;i=i+2){                                                 	
   for (k=0;k<n;k=k+2){
     for (j=0;j<n;j=j+2){
		 AB[i][j] = AB[i][j] + A[i][k]*B[k][j];
		 AB[i+1][j] = AB[i+1][j] + A[i+1][k]*B[k][j];
		 AB[i][j] = AB[i][j] + A[i][k+1]*B[k+1][j];
		 AB[i+1][j] = AB[i+1][j] + A[i+1][k+1]*B[k+1][j];
	 }	 

  }
	
}

	
	
}
	

/*
void Block_JKI(int n){	
for (j=0;j<n;j=j+2){                                                 	
   for (k=0;k<n;k=k+2){
     for (i=0;i<n;i=i+1){
		 AB[i][j] = AB[i][j] + A[i][k]*B[k][j];
		 AB[i][j+1] = AB[i][j+1] + A[i][k]*B[k][j+1];
		 AB[i][j] = AB[i][j] + A[i][k+1]*B[k+1][j];
		 AB[i][j+1] = AB[i][j+1] + A[i][k+1]*B[k+1][j+1];
		 
		  
	 }	 

  }
	
}

	
	
}//fim


*/

void Block_JIK(int n){	
for (j=0;j<n;j=j+2){                                                 	
   for (i=0;i<n;i=i+2){
     for (k=0;k<n;k=k+2){	 
	     AB[i][j] = AB[i][j] + A[i][k]*B[k][j];
		 AB[i][j+1] = AB[i][j+1] + A[i][k]*B[k][j+1];
		 AB[i+1][j] = AB[i+1][j] + A[i+1][k]*B[k][j];
		 AB[i+1][j+1] = AB[i+1][j+1] + A[i+1][k]*B[k][j+1];	 		 
	 }	 

  }
	
}

	
	
}

//fim


void MatAB_IJK_RL4(int n){
 for (i=0;i<n;i++){                                                 	
   for (j=0;j<n;j++){
     for (k=0;k<n;k=k+4){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k+1][j]=A[i][i]*B[k+1][j];
      AB[k+2][j]=A[i][i]*B[k+2][j];
      AB[k+3][j]=A[i][i]*B[k+3][j];
       }
     
   }
}

}


void MatAB_IKJ_RL4(int n){
 for (i=0;i<n;i++){                                                 	
   for (k=0;k<n;k++){
     for (j=0;j<n;j=j+4){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];
      AB[k][j+2]=A[i][i]*B[k][j+2];
      AB[k][j+3]=A[i][i]*B[k][j+3];
       }
     
   }
}

}


void MatAB_JIK_RL4(int n){
 for (j=0;j<n;j++){                                                 	
   for (i=0;i<n;i++){
     for (k=0;k<n;k=k+4){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k+1][j]=A[i][i]*B[k+1][j];
      AB[k+2][j]=A[i][i]*B[k+2][j];
      AB[k+3][j]=A[i][i]*B[k+3][j];
      }
     
   }
}

}

void MatAB_JKI_RL4(int n){
 for (j=0;j<n;j++){                                                 	
   for (k=0;k<n;k++){
     for (i=0;i<n;i=i+4){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j]=A[i+1][i+1]*B[k][j];
      AB[k][j]=A[i+2][i+2]*B[k][j];
      AB[k][j]=A[i+3][i+3]*B[k][j];
     }
   }
}

}


void MatAB_KIJ_RL4(int n){
 for (k=0;k<n;k++){                                                 	
   for (i=0;i<n;i++){
     for (j=0;j<n;j=j+4){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];
      AB[k][j+2]=A[i][i]*B[k][j+2];
      AB[k][j+3]=A[i][i]*B[k][j+3];
   
     }
   }
}

}

void MatAB_KJI_RL4(int n){
 for (k=0;k<n;k++){                                                 	
   for (j=0;j<n;j++){
     for (i=0;i<n;i=i+4){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j]=A[i+1][i+1]*B[k][j];
      AB[k][j]=A[i+2][i+2]*B[k][j];
      AB[k][j]=A[i+3][i+3]*B[k][j];
   
     }
   }
}

}




void MatAB_IJK_RL2(int n){
 for (i=0;i<n;i++){                                                 	
   for (j=0;j<n;j++){
     for (k=0;k<n;k=k+2){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k+1][j]=A[i][i]*B[k+1][j];
 
       }
     
   }
}

}


void MatAB_IKJ_RL2(int n){
 for (i=0;i<n;i++){                                                 	
   for (k=0;k<n;k++){
     for (j=0;j<n;j=j+2){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];

       }
     
   }
}

}


void MatAB_JIK_RL2(int n){
 for (j=0;j<n;j++){                                                 	
   for (i=0;i<n;i++){
     for (k=0;k<n;k=k+2){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k+1][j]=A[i][i]*B[k+1][j];
      
      }
     
   }
}

}

void MatAB_JKI_RL2(int n){
 for (j=0;j<n;j++){                                                 	
   for (k=0;k<n;k++){
     for (i=0;i<n;i=i+2){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j]=A[i+1][i+1]*B[k][j];
  
     }
   }
}

}


void MatAB_KIJ_RL2(int n){
 for (k=0;k<n;k++){                                                 	
   for (i=0;i<n;i++){
     for (j=0;j<n;j=j+2){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];
 
   
     }
   }
}

}

void MatAB_KJI_RL2(int n){
 for (k=0;k<n;k++){                                                 	
   for (j=0;j<n;j++){
     for (i=0;i<n;i=i+2){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j]=A[i+1][i+1]*B[k][j];
    
   
     }
   }
}

}
//------------------------------------------------------------------------------------------------------------


void MatAB_IJK(int n){
 for (i=0;i<n;i++){                                                 	
   for (j=0;j<n;j++){
     for (k=0;k<n;k++){
      AB[k][j]=A[i][i]*B[k][j];
       }
     
   }
}

}


void MatAB_IKJ(int n){
 for (i=0;i<n;i++){                                                 	
   for (k=0;k<n;k++){
     for (j=0;j<n;j++){
      AB[k][j]=A[i][i]*B[k][j];
       }
     
   }
}

}


void MatAB_JIK(int n){
 for (j=0;j<n;j++){                                                 	
   for (i=0;i<n;i++){
     for (k=0;k<n;k++){
      AB[k][j]=A[i][i]*B[k][j];

      }
     
   }
}

}

void MatAB_JKI(int n){
 for (j=0;j<n;j++){                                                 	
   for (k=0;k<n;k++){
     for (i=0;i<n;i++){
      AB[k][j]=A[i][i]*B[k][j];

     }
   }
}

}


void MatAB_KIJ(int n){
 for (k=0;k<n;k++){                                                 	
   for (i=0;i<n;i++){
     for (j=0;j<n;j++){
      AB[k][j]=A[i][i]*B[k][j];

     }
   }
}

}

void MatAB_KJI(int n){
 for (k=0;k<n;k++){                                                 	
   for (j=0;j<n;j++){
     for (i=0;i<n;i++){
      AB[k][j]=A[i][i]*B[k][j];

     }
   }
}

}


void print_Mat(int nt,int n){

 for(int i=0;i<nt;i++){
  

   printf("\n\nFinal do Loop%d:N=%d ##################\n",i,n); 
   end =  clock();
   MatAB_IKJ(n);
   printf("\n-----------*Serial*-----------\n \nSerial:Tempo_IKJ: %.3f\tbytes-%d",(double) (clock() - end)/CLOCKS_PER_SEC,n);	
 
 
   //end =  clock();
   //MatAB_JIK(n);
   //printf("\nSerial:Tempo_JIK: %.3f\tbytes-%d",(double) (clock() - end)/CLOCKS_PER_SEC,n);
  
 
 
   end =  clock();
   Block_IKJ(n);
   printf("\n\n-----------*Block*-----------\n \nBlock_IKJ: \t  %.3f\tbytes-%d",(double) (clock() - end)/CLOCKS_PER_SEC,n);	
   
  
  
   end =  clock();
   Block_JIK(n);
   printf("\nBlock_JIK: \t  %.3f\tbytes-%d",(double) (clock() - end)/CLOCKS_PER_SEC,n);
 
 
   end =  clock();
   MatAB_IKJ_RL2(n);
   printf("\n-----------*RL2*-----------\nRL2_IKJ: \t  %.3f\tbytes-%d",(double) (clock() - end)/CLOCKS_PER_SEC,n);
   

 
   end =  clock();
   MatAB_JIK_RL2(n);
   printf("\nRL2_JIK: \t  %.3f\tbytes-%d",(double) (clock() - end)/CLOCKS_PER_SEC,n);
   
  
  
   end =  clock();
   MatAB_IKJ_RL4(n);
   printf("\n\n-----------*RL4*-----------\nRL4_IKJ: \t  %.3f\tbytes-%d",(double) (clock() - end)/CLOCKS_PER_SEC,n);
   
  
  
   end =  clock();
   MatAB_JIK_RL4(n);
   printf("\nRL4_JIK: \t  %.3f\tbytes-%d",(double) (clock() - end)/CLOCKS_PER_SEC,n);
   
 
  
 
 } 
   
	
   /*
    MatAB_IJK(n);  
    MatAB_IKJ(n);  
    MatAB_JIK(n);   
    MatAB_JKI(n);
    MatAB_KIJ(n);
    MatAB_KJI(n);
   
   
    MatAB_IJK_RL2(n);  
    MatAB_IKJ_RL2(n);  
    MatAB_JIK_RL2(n);   
    MatAB_JKI_RL2(n);
    MatAB_KIJ_RL2(n);
    MatAB_KJI_RL2(n);
   
    MatAB_IJK_RL4(n);  
    MatAB_IKJ_RL4(n);  
    MatAB_JIK_RL4(n);   
    MatAB_JKI_RL4(n);
    MatAB_KIJ_RL4(n);
    MatAB_KJI_RL4(n);
   */
	
}

int main(){

   //time_t end;
   int n =4096;
   printf("Init"); 

  
   ///Alocação de matrizes///
   AB  = (double **)calloc(n,sizeof(double*));
   A   = (double **)calloc(n,sizeof(double*));
   B   = (double**)calloc(n,sizeof(double*));
   
   
   for(i=0;i<n;i++){
     A[i]  = (double *) calloc(n,sizeof(double));
     B[i]  = (double *) calloc(n,sizeof(double));
     AB[i] = (double *) calloc(n,sizeof(double));	
   }
   
   
   //Matriz A -> Matriz Identidade
   for(i=0;i<n;i++){ 
	 for(j=0;j<n;j++){
	    if(i == j)
	      A[i][j] = 1;
	    else
	      A[i][j] = 0;
	
	 }
   }
   

	
     //Matriz B -> f(x) = (5*(i+j))^2
     for(i=0;i<n;i++){
	   for(j=0;j<n;j++){
	       po = 5 * (i+j); 
	       B[i][j] = (po*po) +1;
		   			 
	  }		 
	  
   }  
   
             /*Print na Tela*/
  
  
   
   print_Mat(2,n);
  
  
   
   for(i=0;i<n;i++){
      free(A[i]);
      free(B[i]);
      free(AB[i]);
   
   }
      free(A);
      free(B);
      free(AB);
      printf("\nMemoria Desalocanda...\nSucesso!");
  
   
   system("pause");
   //system("color 02");
   return 0;

}


 //A= (1 0)  B= (1  25)   (1*1+0*25 1*25+0*100)  (1  25)   
    //(0 1)     (25 100)  (0*1+1*25 0*25+1*100)  (25 100)
