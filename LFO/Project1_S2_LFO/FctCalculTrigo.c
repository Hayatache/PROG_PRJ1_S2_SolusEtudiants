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


//--- librairie perso ---//
#include "CalculTrigo.h"
#include <math.h>

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
	uint8_t i = 0;

	//-- enumeration --// 
	e_validation checkFct = nok;

	//-- boucle pour initilaiser le tableau des angles --//
	for (i = 0; i < TAILLE_TB_ANGLE; i++)
	{
		pt_strTriangle->tb_Angle[i] = 0;
	}
	//-- initialisation des cot�s -> adj - hyp - opp --// 
	pt_strTriangle->triangle_s.adjacent = 0;
	pt_strTriangle->triangle_s.hypotenuse = 0;
	pt_strTriangle->triangle_s.oppose = 0;

	//-- initialisation des champs de air et perim�tres --// 
	pt_strTriangle->air = 0;
	pt_strTriangle->perimetre = 0;

	//-- validation -> de la fct --// 
	checkFct = ok;

	//-- valeur � retourner --// 
	return checkFct;
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
	if (pt_strTriangle->tb_Angle[0] != (float)0.0) 
		pt_strTriangle->tb_Angle[1] = (pt_strTriangle->tb_Angle[0] * M_PI) / 180;

	//--> beta 
	if (pt_strTriangle->tb_Angle[2] != (float)0.0) 
		pt_strTriangle->tb_Angle[3] = (pt_strTriangle->tb_Angle[2] * M_PI) / 180;

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
	if (pt_strTriangle->tb_Angle[1] != (float)0.0)
		pt_strTriangle->tb_Angle[0] = (pt_strTriangle->tb_Angle[1] * 180) / M_PI;

	//--> beta 
	if (pt_strTriangle->tb_Angle[3] != (float)0.0)
		pt_strTriangle->tb_Angle[2] = (pt_strTriangle->tb_Angle[3] * 180) / M_PI;

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
	uint8_t i;
	e_validation checkFct = nok;

	//-- test si un angle a �t� d�finit alpha ou beta 
	if ((pt_strTriangle->tb_Angle[0]) || (pt_strTriangle->tb_Angle[2])) {
		//-- calcul de alpha 
		if (pt_strTriangle->tb_Angle[2])
			pt_strTriangle->tb_Angle[0] = 180 - (pt_strTriangle->tb_Angle[2] + 90);
			Conversion_DegRad(pt_strTriangle);	//-- conversion Degr� - Radian 

		//-- calcul de beta
		if (pt_strTriangle->tb_Angle[0])
			pt_strTriangle->tb_Angle[2] = 180 - (pt_strTriangle->tb_Angle[0] + 90);
			Conversion_DegRad(pt_strTriangle);	//-- conversion Degr� - Radian 
	}
	else {
		//-- si pas d'angle d�fini 

			//-- si cot� non d�fini -> hypoth�nuse -> fonction trigo invers�e arctan 
		if (pt_strTriangle->triangle_s.hypotenuse == 0) {
			pt_strTriangle->tb_Angle[0] = (float)atan(((double)(pt_strTriangle->triangle_s.adjacent) / (pt_strTriangle->triangle_s.oppose)));
			pt_strTriangle->tb_Angle[2] = 180 - (pt_strTriangle->tb_Angle[0] + 90);
			//-- conversion Radian - Degr� 
			Conversion_DegRad(pt_strTriangle);
		}
			//-- si cot� non d�fini -> oppos� -> fonction trigo invers�e arccos
		if (pt_strTriangle->triangle_s.oppose == 0) {
			pt_strTriangle->tb_Angle[0] = (float)acos(((double)(pt_strTriangle->triangle_s.oppose) / (pt_strTriangle->triangle_s.hypotenuse)));
			pt_strTriangle->tb_Angle[2] = 180 - (pt_strTriangle->tb_Angle[0] + 90);
			//-- conversion Radian - Degr� 
			Conversion_DegRad(pt_strTriangle);
		}
			//-- si cot� non d�fini -> adjacent -> fonction trigo invers�e arcsin
		if (pt_strTriangle->triangle_s.adjacent == 0) {
			pt_strTriangle->tb_Angle[0] = (float)asin(((double)(pt_strTriangle->triangle_s.adjacent) / (pt_strTriangle->triangle_s.hypotenuse)));
			pt_strTriangle->tb_Angle[2] = 180 - (pt_strTriangle->tb_Angle[0] + 90);
			//-- conversion Radian - Degr� 
			Conversion_DegRad(pt_strTriangle);
		}

	}
		
	//-- test si tous les champs sont remplis 
	for (i = 0; i < TAILLE_TB_ANGLE; i++)
	{
		if (pt_strTriangle->tb_Angle[i] == 0.0) {
			checkFct = nok;
			i = TAILLE_TB_ANGLE;	//forcer � sortire de la boucle pour retourner une erreur
		}
		else
			checkFct = ok;
			
	}
		//-- retourne OK 
	return checkFct;
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
	e_validation checkFct = nok;

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

	return checkFct;
}








