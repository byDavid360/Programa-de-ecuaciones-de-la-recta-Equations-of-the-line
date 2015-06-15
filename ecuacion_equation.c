#include <stdio.h>
#include<conio.h> 
#include<math.h> 


int main(){	
int seleccion;
    int num;
    int p1,p2,v1,v2;
int C;
int p11 = 0;
int p22 = 0;
int v11 = 0;
int v22 = 0;    
int n;   
	
	
	printf("BIENVENIDO A LA APLICACION QUE TE RESUELVE LAS ECUACIONES DE LA RECTA\n\n(Para escoger la ecuacion pon el numero de la ecuacion deseada):\n");
	printf("ANTES DE EMPEZAR: Esta APP tiene un fallo:\nNO SIMPLIFICA DEL TODO.\nES DECIR SI SALE UN + Y UN - JUNTOS NO PONE -, TE PONE PARENTESIS. Dicho esto,\nDIVIERTETE Y SUERTE EN EL EXAMEN! ;-)\n");
	printf("\n");
	printf("1--Ecuacion Vectorial.\n");
	printf("2--Ecuaciones Parametricas.\n");
	printf("3--Ecuacion continua.\n");
	printf("4--Ecuacion punto pendiente.\n");
	printf("5--Ecuacion general.\n");
	printf("6--Ecuacion explicita.\n");
	printf("\n");
	printf("ESCOGE!:");
	scanf("%d", &num);
	printf("\n");
		printf("\n");
	
	
	if (num == 1 ) {
	printf("Bienvenido a la ecuacion vectorial de la recta\n");
		printf("\n");
	printf("(x,y) = (a,b) + t * (v1,v2)\n");
		printf("\n");
	printf("Cual es el la X del PUNTO?:");
	scanf("%i", &p1);
		printf("\n");
	printf("Cual es la Y del PUNTO?:");
	scanf("%i", &p2);
		printf("\n");
	printf("Cual es la X del VECTOR?:");
	scanf("%i", &v1);
		printf("\n");
	printf("Cual es la Y del VECTOR?:");
	scanf("%i", &v2);
		printf("\n");
	printf("La ecuacion es:\n");
		printf("\n");
	printf("(x,y) = (%d, %d) + t (%d, %d)\n", p1, p2, v1, v2);
		printf("\n");
	printf("Gracias por usar mi APP.\nbyDavid360");
}
else if ( num == 2){
	printf("Bienvenido a la ecuacion parametrica de la recta\n");
		printf("\n");
	printf("x = a + t * v1\ny = b + t * v2\n");
		printf("\n");
	printf("Cual es la X del PUNTO?:");
	scanf("%d", &p1);
		printf("\n");
	printf("Cual es la Y del PUNTO?:");
	scanf("%i", &p2);
		printf("\n");
	printf("Cual es la X del VECTOR?:");
	scanf("%i", &v1);
		printf("\n");
	printf("Cual es la Y del VECTOR?:");
	scanf("%i", &v2);
		printf("\n");
	printf("La ecuacion es:\n");
		printf("\n");
	printf("X = (%i) + t (%i)\nY = (%i) + t (%i)\n", p1, v1, p2, v2);
		printf("\n");
	printf("Gracias por usar mi APP.\nbyDavid360");
}
else if ( num == 3){
	printf("Bienvenido a la ecuacion continua de la recta\n");
		printf("\n");
	printf("x-a/v1 = y-b/v2\n");
		printf("\n");
	printf("Cual es la X del PUNTO?:");
	scanf("%d", &p1);
		printf("\n");
	printf("Cual es la Y del PUNTO?:");
	scanf("%i", &p2);
		printf("\n");
	printf("Cual es la X del VECTOR?:");
	scanf("%i", &v1);
		printf("\n");
	printf("Cual es la Y del VECTOR?:");
	scanf("%i", &v2);
		printf("\n");
	printf("La ecucacion es:\n");
		printf("\n");
	printf("X-(%i)/(%i) = Y-(%i)/(%i)\n", p1, v1, p2, v2);
		printf("\n");
    printf("Gracias por usar mi APP.\nbyDavid360");	
}
else if ( num == 4){
	printf("Bienvenido a la ecuacion punto pendiente de la recta\n");
		printf("\n");
	printf("y - b = m (x - a)\n");
		printf("\n");
    printf("Cual es la X del PUNTO?:");
	scanf("%d", &p1);
		printf("\n");
	printf("Cual es la Y del PUNTO?:");
	scanf("%i", &p2);
		printf("\n");
	printf("Cual es la X del VECTOR?:");
	scanf("%i", &v1);
		printf("\n");
	printf("Cual es la Y del VECTOR?:");
	scanf("%i", &v2);
		printf("\n");
	printf("La ecucacion es:\n");
		printf("\n");
	printf("Y - (%i) = %i/%i * (X - %i)\n", p2, v2, v1, p1);
		printf("\n");
	printf("Gracias por usar mi APP.\nbyDavid360");
}
else if ( num == 5){
	
	printf("Bienvenido a la ecuacion general de la recta\n");
		printf("\n");
	printf("Ax + By + C = 0\n");
		printf("\n");
	printf("Cual es la X del PUNTO?:");
	scanf("%i", &p11);
		printf("\n");
	printf("Cual es la Y del PUNTO?:");
	scanf("%i", &p22);
		printf("\n");
	printf("Cual es la X del VECTOR?:");
	scanf("%i", &v11);
		printf("\n");
	printf("Cual es la Y del VECTOR?:");
	scanf("%i", &v22);
		printf("\n");
C = -1*((-v22 * (p11) + (v11*p22)));
	printf("La ecuacion es:\n");
		printf("\n");
	printf("-%iX + %iY + %i = 0\n", p11, p22, C) ;
		printf("\n");
	printf("Gracias por usar mi APP.\nbyDavid360");
	
}
else if ( num == 6){
	printf("Bienvenido a la ecuacion explicita de la recta\n");
		printf("\n");
	printf("y = mx + n\n");
		printf("\n");
	printf("Cual es la X del PUNTO?:");
	scanf("%i", &p11);
		printf("\n");
	printf("Cual es la Y del PUNTO?:");
	scanf("%i", &p22);
		printf("\n");
	printf("Cual es la X del VECTOR?:");
	scanf("%i", &v11);
		printf("\n");
	printf("Cual es la Y del VECTOR?:");
	scanf("%i", &v22);
		printf("\n");
	n = ((-v22 * (p11) + (v11*p22)))/v11;
	printf("La ecuacion es:\n");
		printf("\n");
	printf("Y = (%i/%i)X + (%i)\n", v22, v11, n);
		printf("\n");
	printf("Gracias por usar mi APP.\nbyDavid360");
	
	
}
else{
	
	printf(" El numero o letra no coincide con ninguna ecuacion.\nIntentalo de nuevo poniendo un numero DISPONIBLE!");
}


return 0;
}







	
