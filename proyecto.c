#include<stdio.h>
int main() 
{
	//Creamos matriz
	
	char matriz[3][3], opc;
	int n, m, fila, col, ganador=0, turno=1; // Declaramos variables 
	//Mensaje de bienvenida 
	printf("\nHola jugadores, bienvenidos al juego del gato!\n");


	for(n=0; n<3; n++)
	{ //representa a la fila de la matriz
		for(m=0; m<3; m++)
		{ //representa a la columna de la matriz 
			matriz[n][m]=' ';
			printf("[%c]",matriz[n][m]); //Imprime la matriz 
		}
		printf("\n");
	}
	printf("\n\nPresione W para jugar / V para salir: ");
	scanf("%c",&opc);
	if (opc == 'W' || opc == 'w'){

		do{ //Empieza el juego 
			if(turno%2==1){ //Empieza con el jugador 1
				do{
					printf("\nJugador 1: \n");
					printf("\nDigite fila:\n");
					scanf("%d", &fila);
					printf("\nDigite columna:\n");
					scanf("%d",&col);

					if(matriz[fila][col]== 'x' || matriz[fila][col]== 'o' || fila > 2 || col > 2 ) 
					{
						printf("\nCoordenadas no válidas, pruebe otra vez\n");
					}

				}while(matriz[fila][col]== 'x' || matriz[fila][col]== 'o'|| fila > 2 || col > 2  );
				
				matriz[fila][col]='x'; //Sale del bluce e imprime la matriz
				
				
				for(n=0; n<3; n++)// Representa fila de la matriz 
				{
					for(m=0; m<3; m++) //Representa columna de la matriz 
					{
						printf("[%c]",matriz[n][m]); //Imprime la matriz 

					}
					printf("\n");
				}
				turno ++; // Contador que va sumando de 1 en 1 
			} else 
				if(turno%2==0)
				{ //Empieza con el jugador 2
					do{
						printf("\nJugador 2: \n");
						printf("\nDigite fila:\n");
						scanf("%d", &fila);
						printf("\nDigite columna:\n");
						scanf("%d",&col);

							if(matriz[fila][col]== 'x' || matriz[fila][col] == 'o'|| fila > 2 || col > 2 )
							{
								printf("\nCoordenas no válidas, pruebe otra vez\n");
							}

					}while(matriz[fila][col]== 'x' || matriz[fila][col] == 'o'|| fila > 2 || col > 2 );

					matriz[fila][col]='o'; //Sale del bucle e imprime la matriz 
					
					 
					for(n=0; n<3; n++) //Representa fila de la matriz 
					{
						for(m=0; m<3; m++) //Representa columna de la matriz 
						{
							printf("[%c]",matriz[n][m]);

						}
						printf("\n");
					}
					turno ++;
				}
				//Comprobaciones para el ganador 
				if(matriz[0][0]== 'x' && matriz[0][0] == matriz[0][1] && matriz[0][0]== matriz[0][2]
					|| matriz[1][0]== 'x' && matriz[1][0] == matriz[1][1] && matriz[1][0]== matriz[1][2]
					|| matriz[2][0]== 'x' && matriz[2][0] == matriz[2][1] && matriz[2][0]== matriz[2][2]

					||matriz[0][0]== 'x' && matriz[0][0] == matriz[1][0] && matriz[0][0]== matriz[2][0]
					||matriz[0][1]== 'x' && matriz[0][1] == matriz[1][1] && matriz[0][1]== matriz[2][1]
					||matriz[0][2]== 'x' && matriz[0][2] == matriz[1][2] && matriz[0][2]== matriz[2][2]

					||matriz[0][0]== 'x' && matriz[0][0] == matriz[1][1] && matriz[0][0]== matriz[2][2]
					||matriz[0][2]== 'x' && matriz[0][2] == matriz[1][1] && matriz[0][2]== matriz[2][0] )
					{
					ganador=1;
					printf("\nFelicidades! Ganó el jugador #1\n");
					}


				if(matriz[0][0]== 'o' && matriz[0][0] == matriz[0][1] && matriz[0][0]== matriz[0][2]
					|| matriz[1][0]== 'o' && matriz[1][0] == matriz[1][1] && matriz[1][0]== matriz[1][2]
					|| matriz[2][0]== 'o' && matriz[2][0] == matriz[2][1] && matriz[2][0]== matriz[2][2]

					||matriz[0][0]== 'o' && matriz[0][0] == matriz[1][0] && matriz[0][0]== matriz[2][0]
					||matriz[0][1]== 'o' && matriz[0][1] == matriz[1][1] && matriz[0][1]== matriz[2][1]
					||matriz[0][2]== 'o' && matriz[0][2] == matriz[1][2] && matriz[0][2]== matriz[2][2]

					||matriz[0][0]== 'o' && matriz[0][0] == matriz[1][1] && matriz[0][0]== matriz[2][2]
					||matriz[0][2]== 'o' && matriz[0][2] == matriz[1][1] && matriz[0][2]== matriz[2][0] ){
					ganador=1;
				printf("\nFelicidades! Ganó el jugador #2\n");
							}
							if (ganador==0 && turno==10)
							{
								printf("\nHay un empate!!\n");
								ganador=1;
							}

				
				} while(ganador != 1);

				

		} else 
			{
				 
				printf("\nAnímense a jugar, es divertido!:)\n");
			}
	return 0;
}