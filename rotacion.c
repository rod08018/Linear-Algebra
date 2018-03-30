#include <stdio.h>
#include <math.h>
int m,n,x,y,c,d,r,comun=0,valor=0;
float rotacion[3][3],Resultado[3],trans[3][3],vector[3];


void transpuesta(){
	printf("\n");
	for(r=0;r<3;r++){
			for(c=0;c<3;c++)
	           		 {
	              		 trans[c][r]=rotacion[r][c];
	              		 
	            	}
	            	printf("\n");
	}
	
}
void multitrans(){

       			Resultado[0]=vector[0]*trans[0][0]+vector[1]*trans[0][1]+vector[2]*trans[0][2];
				Resultado[1]=vector[0]*trans[1][0]+vector[1]*trans[1][1]+vector[2]*trans[1][2];
				Resultado[2]=vector[0]*trans[2][0]+vector[1]*trans[2][1]+vector[2]*trans[2][2];
				printf(" %.3f", Resultado[0]);
				printf(" %.3f", Resultado[1]);
				printf(" %.3f", Resultado[2]);
}
void multi(){

                Resultado[0]=vector[0]*rotacion[0][0]+vector[1]*rotacion[0][1]+vector[2]*rotacion[0][2];
				Resultado[1]=vector[0]*rotacion[1][0]+vector[1]*rotacion[1][1]+vector[2]*rotacion[1][2];
				Resultado[2]=vector[0]*rotacion[2][0]+vector[1]*rotacion[2][1]+vector[2]*rotacion[2][2];
        		printf(" %.3f", Resultado[0]);
				printf(" %.3f", Resultado[1]);
				printf(" %.3f", Resultado[2]);
}
void transformacion(int opcion,int angulo,int coordenadas){
	if(opcion==1){
		rotacion[0][0]=1;
		rotacion[0][1]=0;
		rotacion[0][2]=0;
		rotacion[1][0]=0;
		rotacion[1][1]=cos((angulo*3.14159)/180);
		rotacion[1][2]=-sin((angulo*3.14159)/180);
		rotacion[2][0]=0;
		rotacion[2][1]=sin((angulo*3.14159)/180);
		rotacion[2][2]=cos((angulo*3.14159)/180);
	}
	if(opcion==2){
		rotacion[0][0]=cos((angulo*3.14159)/180);
		rotacion[0][1]=0;
		rotacion[0][2]=sin((angulo*3.14159)/180);
		rotacion[1][0]=0;
		rotacion[1][1]=1;
		rotacion[1][2]=0;
		rotacion[2][0]=-sin((angulo*3.14159)/180);
		rotacion[2][1]=0;
		rotacion[2][2]=cos((angulo*3.14159)/180);
	}
	if(opcion==3){
		rotacion[0][0]=cos((angulo*3.14159)/180);
		rotacion[0][1]=-sin((angulo*3.14159)/180);
		rotacion[0][2]=0;
		rotacion[1][0]=sin((angulo*3.14159)/180);
		rotacion[1][1]=cos((angulo*3.14159)/180);
		rotacion[1][2]=0;
		rotacion[2][0]=0;
		rotacion[2][1]=0;
		rotacion[2][2]=1;
	}
	if(coordenadas==1)
	{
		transpuesta();
		multitrans();
	}
	if(coordenadas==2)
	{
		multi();
	}
}
int result(){
	printf("\n");
	printf("Rotacion elegida");
	printf("\n");
	for ( c = 0 ; c < 3 ; c++ )
    {
      for ( d = 0 ; d < 3 ; d++ ){
      
        printf(" %.3f", rotacion[c][d]);
        
    }
 
      printf("\n");
    }
    printf("\n");
    ("transpuesta de la rotacion");
    printf("\n");
    for ( c = 0 ; c < 3 ; c++ )
    {
      for ( d = 0 ; d < 3 ; d++ ){
      
        
        printf(" %.3f", trans[c][d]);
 	}
      printf("\n");
    }
}

void main(void){
	
    
    
    printf("Escoja su eje de rotacion\n");
    printf("1. Eje X\n");
    printf("2. Eje Y\n");
    printf("3. Eje Z\n");
    scanf("%d", &m);
    printf("Angulo de rotacion?\n");
    scanf("%d", &r);
    printf("\n");
    printf("Que transformacion de coordenadas quiere hacer\n");
    printf("1. Globales a Locales\n");
    printf("2. Locales a Globales\n");
    scanf("%d", &n);
    printf("Ingrese su vector de posicion\n");
    for(c=0;c<3;c++)
           		 {
              		 scanf("%d",&vector[c]);
              		 
            	}
    transformacion(m,r,n);
    printf("\n");
    result();

	printf("\n");
    
    
    
} 
