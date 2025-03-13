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

#include "CalculTrigo.h"
#include "math.h"
#include "corecrt_math_defines.h"
//-- definission pour utiliser la lib math sous VS --// 
#define _USE_MATH_DEFINES

//--- librairie standart ---//


//--- librairie perso ---//


/* ----------------------------------------------------------------------------------
// -> NOM FCT					: InitialiserStructure 
// -> PARAMETRES ENTRES			: 
// -> PARAMETRE SORTIE			: e_validation 
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle 
// -> description				: tous les champs de la structure seront mis � z�ro
 ----------------------------------------------------------------------------------*/
void Initialiserstructure() {
	//-- d�claration variables --// 
	//-- pirmaire --// 

	//-- enumeration --// 


	//-- boucle pour initilaiser le tableau des angles --//
	int tb_Angle[4] = { 1,2,3,4 };

	//-- initialisation des cot�s -> adj - hyp - opp --// 
	char adjacent = 0;
	char hypotenuse = 0;
	char oppose = 0;
	//-- initialisation des champs de air et perim�tres --// 
	int air = 0;
	int perimetre = 0;
	//-- validation -> de la fct --// 
	e_validation testFct = ok;

	//-- valeur � retourner --// 
}
/* ----------------------------------------------------------------------------------
// -> NOM FCT					: Conversion_DegRad
// -> PARAMETRES ENTRES			:
// -> PARAMETRE SORTIE			: 
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle
// -> description				: depuis un angle en degr� -> d�terminer sa valeur 
//								  en radian 
 ----------------------------------------------------------------------------------*/
void Conversion_DegRad(){
	//-- test si angle � convertir --//
	//--> alpha 
	if (alpha > 0){
	alpha = alpha*(M_PI/180);
	}
	//--> beta 
	if (beta > 0) {
		beta = beta * (M_PI / 180);
	}
}
/* ----------------------------------------------------------------------------------
// -> NOM FCT					: Conversion_RadDeg
// -> PARAMETRES ENTRES			:
// -> PARAMETRE SORTIE			:
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle
// -> description				: depuis un angle en radian -> d�terminer sa valeur
//								  en degr�
 ----------------------------------------------------------------------------------*/
void Conversion_RadDeg(){
	//-- test si angle � convertir --//
	//--> alpha 
	if (alpha > 0) {
		alpha = alpha * (180 / M_PI);
	}
	//--> beta 
	if (beta > 0) {
		beta = beta * (180 / M_PI);
	}
}
/* ----------------------------------------------------------------------------------
// -> NOM FCT					: CalculAllAngles
// -> PARAMETRES ENTRES			:
// -> PARAMETRE SORTIE			: e_validation
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle
// -> description				: si angle rentr� alors alors d�termine le 2�me angle 
 ----------------------------------------------------------------------------------*/
void CalculerAllAngles(){
	//-- test si un angle a �t� d�finit alpha ou beta 

		//-- calcul de alpha 
	if (e_choixAngle == alpha) {
		//-- conversion Degr� - Radian 
		alpha = Conversion_DegRad();
	}
		//-- calcul de beta
	else {
		//-- conversion Degr� - Radian
		beta = Conversion_DegRad();
	} 
	//-- si pas d'angle d�fini 

		//-- si cot� non d�fini -> hypoth�nuse -> fonction trigo invers�e arctan 
		
			//-- conversion Radian - Degr� 
	Conversion_RadDeg();
	
		//-- si cot� non d�fini -> oppos� -> fonction trigo invers�e arccos
			
			//-- conversion Radian - Degr� 
	Conversion_RadDeg();
	
		//-- si cot� non d�fini -> adjacent -> fonction trigo invers�e arcsin
		
			//-- conversion Radian - Degr� 
	Conversion_RadDeg();
	//-- test si tous les champs sont remplis 
		
		//-- retourne OK 
	


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
void CalculerLongueurSegment() {
	//-- test -> si pas aucun angle d�finit 

		//-- test si la valeur � calculer est � z�ro 

			//-- calculer segment adjacent --//
	adjacent = ((hypotenuse * hypotenuse) - (oppose * oppose));
			//-- calculer segment hypoth�nuse --// 
	hypotenuse = ((oppose * oppose) + (oppose * oppose));
			//-- calculer segment oppos� 
	oppose = ((hypotenuse * hypotenuse) - (adjacent * adjacent));
	//-- test si un angle a �t� d�finit alpha ou beta 
	alpha = Conversion_DegRad();
		//-- test si l'angle alpha a �t� ins�r� 
	if (alpha > 0){
				//-- conversion de alpha -> � -> radian 
		alpha = Conversion_DegRad();

				//-- test si sgement hypoth�nuse entr� 
		if (hypotenuse > 0){
					//Calcul -> cos(alpha) = adj / hyp => ... 
		cos alpha = adjacent / hypotenuse;

					//Calcul -> sin(alpha) = opp / hyp => ...
		sin alpha = oppose / hypotenuse;
		}
				//-- test si sgement adjacent entr� 
		if (adjacent > 0) {
					//Calcul -> cos(alpha) = adj/hyp => ...
		cos alpha = adjacent / hypotenuse;

					//Calcul -> tan(alpha) = opp/adj => ...
		tan alpha = oppose / adjacent;
		}
				//-- test si sgement oppos� entr�  
		if (oppose > 0) {
					//Calcul -> sin(alpha) = opp/hyp => ...
		sin alpha = oppose / hypotenuse;

					//Calcul -> tan(alpha) = opp/adj => ... 
		tan alpha = oppose / adjacent;
		}
		//-- calcul de tous les angles -> appel de fct --// 
		CalculerAllAngles();

		//-- check si la longeur des segments bien calcul� 
		
	}
}








