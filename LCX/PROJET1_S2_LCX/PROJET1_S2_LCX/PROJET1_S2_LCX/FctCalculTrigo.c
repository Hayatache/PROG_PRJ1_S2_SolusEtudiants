//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 2 - Calculs Trigo
// Nom du fichier 		: FctCalculTrigo.c
// Date de cr�ation 	: 14.02.2024
// Date de modification : 14.02.2024
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
// Remarques			: voir donnee de l'�preuve            
//----------------------------------------------------------------------------------//

//-- definission pour utiliser la lib math sous VS --// 
#define _USE_MATH_DEFINES

//--- librairie standart ---//
#include <stdint.h>					//-- standard library of integer 
#include <stdio.h>					// for the Input-Ouput system 
#include <stdlib.h>					// to use the OS commands 
#include <string.h>					// to use string commands
#include <math.h>


//--- librairie perso ---//
#include "CalculTrigo.h"

/* ----------------------------------------------------------------------------------
// -> NOM FCT					: InitialiserStructure 
// -> PARAMETRES ENTRES			: 
// -> PARAMETRE SORTIE			: e_validation 
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle 
// -> description				: tous les champs de la structure seront mis � z�ro
 ----------------------------------------------------------------------------------*/
e_validation InitialiserStructure(str_triangleRectangle* pt_strTriangle)
{
	//-- d�claration variables --// 
	//-- pirmaire --// 
	int i;
	

	//-- enumeration --// 


	//-- boucle pour initilaiser le tableau des angles --//
	for (i = 0; i++; i < 4)
	{
		(*pt_strTriangle + i) = 0;
	}

	//-- initialisation des cot�s -> adj - hyp - opp --// 


	//-- initialisation des champs de air et perim�tres --// 


	//-- validation -> de la fct --// 


	//-- valeur � retourner --// 
	return; //e_validation();
}
/* ----------------------------------------------------------------------------------
// -> NOM FCT					: Conversion_DegRad
// -> PARAMETRES ENTRES			:
// -> PARAMETRE SORTIE			: 
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle
// -> description				: depuis un angle en degr� -> d�terminer sa valeur 
//								  en radian 
 ----------------------------------------------------------------------------------*/
void Conversion_DegRad(str_triangleRectangle* pt_strTriangle)
{

	//-- test si angle � convertir --//
	
	//--> alpha 
	*pt_strTriangle = (PI * (*pt_strTriangle + 4))/ DEMICERCLE;
		
	//--> beta 
	(* pt_strTriangle + 8) = (PI * (*pt_strTriangle + 12)) / DEMICERCLE;

}
/* ----------------------------------------------------------------------------------
// -> NOM FCT					: Conversion_RadDeg
// -> PARAMETRES ENTRES			:
// -> PARAMETRE SORTIE			:
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle
// -> description				: depuis un angle en radian -> d�terminer sa valeur
//								  en degr�
 ----------------------------------------------------------------------------------*/
void Conversion_RadDeg(str_triangleRectangle* pt_strTriangle)
{

	//-- test si angle � convertir --//
	
	//--> alpha 
	(*pt_strTriangle + 4) = (DEMICERCLE * *pt_strTriangle) / PI;

	//--> beta 
	(*pt_strTriangle + 12) = (DEMICERCLE * (*pt_strTriangle + 8)) / PI;
}
/* ----------------------------------------------------------------------------------
// -> NOM FCT					: CalculAllAngles
// -> PARAMETRES ENTRES			:
// -> PARAMETRE SORTIE			: e_validation
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle
// -> description				: si angle rentr� alors alors d�termine le 2�me angle 
 ----------------------------------------------------------------------------------*/
e_validation CalculerAllAngles(str_triangleRectangle* pt_strTriangle)
{

	//-- test si un angle a �t� d�finit alpha ou beta 

		//-- calcul de alpha 
	
	
			//-- conversion Degr� - Radian 
			Conversion_DegRad(&triangle);
		//-- calcul de beta

			//-- conversion Degr� - Radian 

	//-- si pas d'angle d�fini 

		//-- si cot� non d�fini -> hypoth�nuse -> fonction trigo invers�e arctan 
		
			//-- conversion Radian - Degr�
			Conversion_RadDeg(&triangle);
		
		//-- si cot� non d�fini -> oppos� -> fonction trigo invers�e arccos
			
			//-- conversion Radian - Degr� 
		
		//-- si cot� non d�fini -> adjacent -> fonction trigo invers�e arcsin
		
			//-- conversion Radian - Degr� 

	//-- test si tous les champs sont remplis 
		
		//-- retourne OK 
	

	return; //e_validation();
}
/* ----------------------------------------------------------------------------------
// -> NOM FCT					: CalculerLongeursSgements
// -> PARAMETRES ENTRES			:
// -> PARAMETRE SORTIE			: e_validation
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle
// -> description				: calculer les diff�rents segments du triangle 
//								  [adjacent - hypoth�nuse - oppos�] 
//								  selon les param�tres ins�rer par l'utilisateur
 ----------------------------------------------------------------------------------*/
e_validation CalculerLongueurSegment(str_triangleRectangle* pt_strTriangle)
{

	//-- test -> si pas aucun angle d�finit 

		//-- test si la valeur � calculer est � z�ro 

			//-- calculer segment adjacent --//

			//-- calculer segment hypoth�nuse --// 

			//-- calculer segment oppos� 

	//-- test si un angle a �t� d�finit alpha ou beta 

		//-- test si l'angle alpha a �t� ins�r� 

			//-- conversion de alpha -> � -> radian 


			//-- test si sgement hypoth�nuse entr� 

				//Calcul -> cos(alpha) = adj / hyp => ... 


				//Calcul -> sin(alpha) = opp / hyp => ...

			//-- test si sgement adjacent entr� 

				//Calcul -> cos(alpha) = adj/hyp => ...


				//Calcul -> tan(alpha) = opp/adj => ...

			//-- test si sgement oppos� entr�  

				//Calcul -> sin(alpha) = opp/hyp => ...

				
				//Calcul -> tan(alpha) = opp/adj => ... 


	//-- calcul de tous les angles -> appel de fct --// 


	//-- check si la longeur des segments bien calcul� 


	//-- retourne OK 

	return; //e_validation();
}







