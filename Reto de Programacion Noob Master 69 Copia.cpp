#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int Respuesta1;
	int Respuesta2;
	int Respuesta3;
	int Respuesta4;
	int Respuesta5;
	
	int Resultado;
	
	printf("Holaa ! Mi nombre es Noob Master 69 ¿Me recuerdas? \nRealizaremos un test para saber que tan fan eres del Universo Marvel \n \n");
	
	printf("Muy bien comencemos:\n ¿Cuáles fueron las 2 Primeras películas de Marvel estrenadas en 2008?\n");
	printf("  1)Thor y Capitán América: El primer vengador \n  2)Hulk y Iron man\n");
	scanf("%i",&Respuesta1);
		
	if (Respuesta1 == 2)
	{
		printf("Muy bien tal vez este test sea fácil para ti \n");
	}
	else
	{
		printf("Estas chavo mijo, sigue participando \n");
	}
	printf("_________________________________________________________________________ \n");
	
	printf("\n ¿Cómo se llama el asistente personal de Iron Man? \n");
	printf("  1)Jarvis \n  2)Siri \n");
	scanf("%i",&Respuesta2);
	
	if (Respuesta2 == 1)
	{
		printf("Perfecto \n");
	}
	else
	{
		printf("No era esa pero tal vez a la próxima lo logres \n");
	}
	printf("_________________________________________________________________________ \n");
	
	printf("\n ¿Qué profesión tenia Stephen Strange antes de sufrir el Accidente Automovilístico? \n");
	printf("  1)Neurocirujano \n  2)Psicólogo \n");
	scanf("%i",&Respuesta3);
	
	if (Respuesta3 == 1)
	{
		printf("La enseñanza que nos deja 'No uses el Celular Mientras conduces' \n");
	}
	else
	{
		printf(" 'No era psicologo' Y por cierto no se vale usar Google por si lo estabas pensando jijiji \n");
	}
	printf("_________________________________________________________________________ \n");
	
	printf("\n ¿En Guardianes de la Galaxia cómo se llama el Mapache ? \n");
	printf("  1)Rocko \n  2)Rocket \n");
	scanf("%i",&Respuesta4);
	
	if (Respuesta4 == 2)
	{
		printf(" Esa era la respuesta 'Si no has fallado ninguna si que eres muy fan :)' \n");
	}
	else
	{
		printf("No era la respuesta, pero hey!! no te desanimes, yo te recomiendo ver todas las películas, al fin seguimos en cuarentena y seguro no te vas aburrir. \n");
	}
	printf("_________________________________________________________________________ \n");
	
	printf("\n Ultima Pregunta, Seguro has oído hablar de mi Noob Master 69 \n ¿En que Película se hace mención de mi nombre ? \n");
	printf("  1)Endgame \n  2)Infinity War \n");
	scanf("%i",&Respuesta5);
	
	if (Respuesta5 == 1)
	{
		printf(" Perfecto si que me conoces, espero que nunca me encuentres en Fortnite porque como dice Thanos 'Yo Soy Inevitable' \n");
	}
	else
	{
		printf("Si que me voy a poner triste :( \n");
	}
	printf("_________________________________________________________________________ \n");
	
	
	Resultado = Respuesta1 + Respuesta2 + Respuesta3 + Respuesta4 + Respuesta5;
	
	if (Resultado == 7)
	{
		printf("Muy bien Aprobaste el Test 5/5 'Acertaste todas las preguntas :)' \n");
	}
	else
	{
		printf("Fallaste una que otra pero no esta tan mal, todos tenemos errores :( \n");
	}
	printf("\n");
	
	printf("Hasta aqui termina el test 'Fue un gusto conocerte' \n");
	
	return 0;
}

