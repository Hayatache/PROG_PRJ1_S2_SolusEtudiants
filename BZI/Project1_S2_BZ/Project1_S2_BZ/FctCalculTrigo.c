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
#include <stdio.h>

//--- librairie perso ---//
#include"CalculTrigo.h"

/* ----------------------------------------------------------------------------------
// -> NOM FCT					: InitialiserStructure 
// -> PARAMETRES ENTRES			: 
// -> PARAMETRE SORTIE			: e_validation 
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle 
// -> description				: tous les champs de la structure seront mis � z�ro
 ----------------------------------------------------------------------------------*/
e_validation checkFct(struct str_triangleRectangle, int* pt_strTriangle) {
	//-- d�claration variables --// 
	int i;
	//-- pirmaire --// 

	//-- enumeration --// 
	e_choixAngle;
	e_choixCote;
	e_choixCoteAngle;

	//-- boucle pour initilaiser le tableau des angles --//
	for (int i = 0; i < 5; i++) {
	
	}

	//-- initialisation des cot�s -> adj - hyp - opp --// 
	struct str_coteTriangle1;

	//-- initialisation des champs de air et perim�tres --// 
	int* pt_strTriangle = 0;
	//-- validation -> de la fct --// 
	e_validation;
}
	//-- valeur � retourner --// 

/* ----------------------------------------------------------------------------------
// -> NOM FCT					: Conversion_DegRad
// -> PARAMETRES ENTRES			:
// -> PARAMETRE SORTIE			: 
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle
// -> description				: depuis un angle en degr� -> d�terminer sa valeur 
//								  en radian 
 ----------------------------------------------------------------------------------*/

	//-- test si angle � convertir --//
void Conversion_DegRad (struct str_triangleRectangle, int* pt_strTriangle) {

	struct str_triangleRectangle str_triangleRectangle1;

	//--> alpha 
	str_triangleRectangle1.tb_Angle[0] *= 3.14 / 180;
	str_triangleRectangle1.tb_Angle[1] *= 3.14 / 180;
	//--> beta 
	str_triangleRectangle1.tb_Angle[2] *= 3.14 / 180;
	str_triangleRectangle1.tb_Angle[3] *= 3.14 / 180;
	if (str_triangleRectangle1.tb_Angle == 0) {
		str_triangleRectangle1.tb_Angle[0,1,2,3] = 0;
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
void Conversion_RadDeg(struct str_triangleRectangle, int* pt_strTriangle) {

	struct str_triangleRectangle str_triangleRectangle1;
	//-- test si angle � convertir --//
	if (str_triangleRectangle1.tb_Angle > 1) {

	
	//--> alpha 
		str_triangleRectangle1.tb_Angle[0, 1] *= 180 / 3.14;

	//--> beta 
		str_triangleRectangle1.tb_Angle[2, 3] *= 180 / 3.14;
		if (str_triangleRectangle1.tb_Angle[0,1,2,3] == 0) {
			str_triangleRectangle1.tb_Angle[0, 1, 2, 3] = 0;
		}
	}
}
/* ----------------------------------------------------------------------------------
// -> NOM FCT					: CalculAllAngles
// -> PARAMETRES ENTRES			:
// -> PARAMETRE SORTIE			: e_validation
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle
// -> description				: si angle rentr� alors alors d�termine le 2�me angle 
 ----------------------------------------------------------------------------------*/

	//-- test si un angle a �t� d�finit alpha ou beta 
e_validation checkFct(struct str_triangleRectangle, int* pt_strTriangle){
		//-- calcul de alpha 
		
			//-- conversion Degr� - Radian 

		//-- calcul de beta

			//-- conversion Degr� - Radian 

	//-- si pas d'angle d�fini 

		//-- si cot� non d�fini -> hypoth�nuse -> fonction trigo invers�e arctan 
		
			//-- conversion Radian - Degr� 
		
		//-- si cot� non d�fini -> oppos� -> fonction trigo invers�e arccos
			
			//-- conversion Radian - Degr� 
		
		//-- si cot� non d�fini -> adjacent -> fonction trigo invers�e arcsin
		
			//-- conversion Radian - Degr� 

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
e_validation checkFct(struct str_triangleRectangle, int* pt_strTriangle) {
	struct str_triangleRectangle str_triangleRectangle1;
	//-- test -> si pas aucun angle d�finit 
	if(str_triangleRectangle1.tb_Angle[1,2,3,4]== 0){}
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
}










