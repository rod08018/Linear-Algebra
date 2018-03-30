#include <stdio.h>
int m,n,x,y,c,r,comun=0,d,sarrus=2,pos[5],neg[5],p=0,n=0;
int i;
int valor=0;
int A[10][10],B[10][10],RES[10][10],cof[10][10],adj[10][10],det[10][10],trans[10][10],inv[10][10];


void transpuesta(int v,int u,int X[v][u]){
	for(r=0;r<u;r++){
			for(c=0;c<v;c++)
	           		 {
	              		 trans[r][c]=X[c][r];
	            	}
	}
	result(v,u,trans);
}
void cofactor(int v,int u,int X[v][u]){
	
}
int determinante22(int v,int u,int X[v][u]){
	return X[0][0]*X[1][1]-X[0][1]*X[1][0];
}
void inversa(){
	
}
void determinante(int v,int u,int X[v][u]){
	if(x=y){
		//se copia la matriz deseada dentro de la matriz determinante
		for(r=0;r<x;r++){
			for(c=0;c<y;c++)
	           		 {
	              		 det[r][c]=X[r][c];
	              		 
	            	}
    	}
		
		//Se agregan las primeras filas a la matriz del determinante para usar el metodo de Sarrus
		for(r=0;r<x;r++)
            {
            	for(c=y;c<y+sarrus;c++)
		        {
		        	
				}

    		}
    	 int sent=0;
        int aux;
         int h;
		//se inician todas las posiciones de nuestro vector positivo con 1
	    for(r=0;r<x;r++)
	    {
	        pos[r]=1;
	    }
   
        //se inician todas las posiciones de nuestro vector negativo con -1
        for(r=0;r<x;r++)
	    {
	        neg[r]=-1;
	    }
	     //SARRUS POSITIVO
	    for(r=0;r<y;r++)
	    {
           		 	//ingreso de operandos dados por la multiplicacion de las diagonales paraa ser sumadas
              		 pos[sent]=pos[sent]*det[h+sent][h];
              		 //resetea la cuenta y hace que el ciclo comience una casilla abajo de manera que pone una nueva diagonal a ser
              		 //operada
              		 if((h==y-1)&&(y!=sent))
              		 {
              			sent++;
              			h=0;
              		 }
              		 //suma las operaciones
              		 if(sent==y){
              		 	for(r=0;r<sent;r++)
	              		 {
	              		   p=p+pos[r];
	              		   h=y;
	              		 }
              		 }
              		 
              		 
        }
        sent=0;
         //SARRUS NEGATIVO  
        for(h=0;h<y;h++)
           		 {
           		 	//ingreso de operandos dados por la multiplicacion de las diagonales paraa ser sumadas
              		 pos[sent]=pos[sent]*det[h-sent][h];
              		 //resetea la cuenta y hace que el ciclo comience una casilla abajo de manera que pone una nueva diagonal a ser
              		 //operada
              		 if(h==1)
              		 {
              			sent++;
              			h=y;
              		 }
              		 //suma las operaciones
              		 if(sent==y){
              		 	for(r=0;r<sent;r++)
	              		 {
	              		   n=n+pos[r];
	              		   h=y;
	              		 }
              		 }
              		 
              		 
            	}
    	d=p+n;
		 printf("Determinante: %d\n", d);	
	}else{
    	printf("No tiene determinante al no ser cuadrada!\n");
    }
            	
}

int generador(){
    
    scanf("%d%d", &m,&n);
    
    printf("Llene su matriz\n");
    for(r=0;r<m;r++){
    	for(c=0;c<n;c++)
            {
                scanf("%d", &A[r][c]);
            }
    } 
    transpuesta(m,n,A);
	determinante(m,n,A);      
}
int generador2(){
    
    scanf("%d%d", &x,&y);
    printf("Llene su matriz\n");
    
    for(r=0;r<x;r++)
            {
            	for(c=0;c<y;c++)
           		 {
              		 scanf("%d",&B[r][c]);
              		 
            	}
            }
    transpuesta(x,y,B);
	determinante(x,y,B); 
}


void multi(){
    if(n=x)
    {
        for(r=0;r<n;r++){
        
            for(c=0;c<x;c++)
            {
                for(comun;comun<n;comun++){
                    valor=valor+A[r][comun]*B[comun][c];
                }
                RES[c][r]=valor;
                valor=0;
            }
    	}
		//result(x,x,RES);	
    }else{
        printf("No se puede realizar la multiplicacion\n");
    }
}

int result(int f, int g, int a[x][y]){
	for ( c = 0 ; c < f ; c++ )
    {
      for ( d = 0 ; d < g ; d++ )
        printf("%d\t", a[c][d]);
 
      printf("\n");
    }
}

    void main(void){
	printf("\n"); 
	printf("Resultado de la Multiplicacion \n"); 
	
    printf("Ingrese las dimensiones de la matriz A\n");
    generador();
    
    printf("Ingrese las dimensiones de la matriz B\n");
    generador2();
    printf("\n");
    printf("Multiplicacion");
    multi();
    printf("\n"); 
	printf("Determinante de A \n"); 
	printf("%d", &d);
    
}                     
