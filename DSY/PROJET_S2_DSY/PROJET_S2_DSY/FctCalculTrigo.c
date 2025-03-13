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
#include "CalculTrigo.h"

//--- librairie standart ---//


//--- librairie perso ---//


/* ----------------------------------------------------------------------------------
// -> NOM FCT					: InitialiserStructure 
// -> PARAMETRES ENTRES			: 
// -> PARAMETRE SORTIE			: e_validation 
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle 
// -> description				: tous les champs de la structure seront mis � z�ro
 ----------------------------------------------------------------------------------*/
int initialiserStructure(pt_strTriangle, str_triangleRectangle)
{
	//-- d�claration variables --// 

	//-- pirmaire --// 


	//-- enumeration --// 


	//-- boucle pour initilaiser le tableau des angles --//


	//-- initialisation des cot�s -> adj - hyp - opp --// 


	//-- initialisation des champs de air et perim�tres --// 


	//-- validation -> de la fct --// 


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
int Conversion_DegRad(pt_strTriangle, str_triangleRectangle)
{
	struct str_triangleRectangle* ptr_strTR;

	if (ptr_strTR->tb_Angle[0] != 0)
	{
		ptr_strTR->tb_Angle[1] =  ptr_strTR->tb_Angle[0] / 180;
	}
	if (ptr_strTR->tb_Angle[2] != 0)
	{
		ptr_strTR->tb_Angle[3] = ptr_strTR->tb_Angle[2] / 180;
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

	//-- test si angle � convertir --//
	// 
int Conversion_RadDeg(pt_strTriangle, str_triangleRectangle)
{
	struct str_triangleRectangle* ptr_strTR;

	if (ptr_strTR->tb_Angle[0] != 0)
	{
		ptr_strTR->tb_Angle[0] = 180 / ptr_strTR->tb_Angle[1];
	}
	else if (ptr_strTR->tb_Angle[2] != 0)
	{
		ptr_strTR->tb_Angle[2] = 180 / ptr_strTR->tb_Angle[3];
	}
	
}


/* ----------------------------------------------------------------------------------
// -> NOM FCT					: CalculAllAngles
// -> PARAMETRES ENTRES			:
// -> PARAMETRE SORTIE			: e_validation
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle
// -> description				: si angle rentr� alors alors d�termine le 2�me angle 
 ----------------------------------------------------------------------------------*/
int CalculerAllAngles(pt_strTriangle, str_triangleRectangle)
{
	struct str_coteTriangle* ptr_str;
	struct str_triangleRectangle* ptr_strTR;
	//-- test si un angle a �t� d�finit alpha ou beta
	if ((ptr_strTR->tb_Angle[0] != 0) && (ptr_strTR->tb_Angle[0] == 0))
	{
		//-- calcul de Beta 
		ptr_strTR->tb_Angle[2] = 180 - ptr_strTR->tb_Angle[0] - 90;

			//-- conversion Degr� - Radian 
		Conversion_DegRad(ptr_strTR->tb_Angle[0]);
	}
	else if ((ptr_strTR->tb_Angle[2] != 0) && (ptr_strTR->tb_Angle[0] == 0))
	{
		//-- calcul de alpha
		ptr_strTR->tb_Angle[0] = 180 - ptr_strTR->tb_Angle[2] - 90;
			//-- conversion Degr� - Radian 
		Conversion_DegRad(ptr_strTR->tb_Angle[3]);
	}

	if ((ptr_strTR->tb_Angle[0] == 0) && (ptr_strTR->tb_Angle[2] == 0))
	{
		if (ptr_str->hypotenuse == 0)
		{
			ptr_strTR->tb_Angle[0] = 1/(ptr_str->adjacent / ptr_str->oppose);
			Conversion_RadDeg(ptr_strTR->tb_Angle[0]);
		}

		if (ptr_str->adjacent == 0)
		{
			ptr_strTR->tb_Angle[0] = 1 / (ptr_str->oppose / ptr_str->hypotenuse);
			Conversion_RadDeg(ptr_strTR->tb_Angle[0]);
		}

		if (ptr_str->oppose == 0)
		{
			ptr_strTR->tb_Angle[0] = 1 / (ptr_str->hypotenuse / ptr_str->adjacent);
			Conversion_RadDeg(ptr_strTR->tb_Angle[0]);
		}


	}


		

	//-- si pas d'angle d�fini 

		//-- si cot� non d�fini -> hypoth�nuse -> fonction trigo invers�e arctan 

			//-- conversion Radian - Degr� 

		//-- si cot� non d�fini -> oppos� -> fonction trigo invers�e arccos

			//-- conversion Radian - Degr� 

		//-- si cot� non d�fini -> adjacent -> fonction trigo invers�e arcsin

			//-- conversion Radian - Degr� 

	//-- test si tous les champs sont remplis 
	if ()
	{
		//-- retourne OK 
		return ok;
	}

		

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
int CalculerLongeurSegment(pt_strTriangle, str_triangleRectangle)
{
	struct str_coteTriangle* ptr_str;
	struct str_triangleRectangle* ptr_strTR;
	//-- test -> si pas aucun angle d�finit 

		//-- test si la valeur � calculer est � z�ro 
	if ((ptr_str->hypotenuse) == 0)
	{
		ptr_str->hypotenuse = root(powf(ptr_str->adjacent) + powf(ptr_str->oppose));
	}
	if ((ptr_str->adjacent) == 0)
	{
		ptr_str->adjacent = root(powf(ptr_str->hypotenuse) - powf(ptr_str->oppose));
	}
	if ((ptr_str->oppose) == 0)
	{
		ptr_str->oppose = root(powf(ptr_str->hypotenuse) - powf(ptr_str->adjacent));
	}

	//-- test si un angle a �t� d�finit alpha ou beta 
	if ((ptr_strTR->tb_Angle == 1) || 2)
	{

		if ((ptr_str->hypotenuse) != 0)
		{
			ptr_strTR->tb_Angle[0] = ptr_str->adjacent / ptr_str->hypotenuse;
			ptr_strTR->tb_Angle[0] = ptr_str->oppose / ptr_str->hypotenuse;
		}

		if ((ptr_str->adjacent) != 0)
		{
			ptr_strTR->tb_Angle[0] = ptr_str->adjacent / ptr_str->hypotenuse;
			ptr_strTR->tb_Angle[0] = ptr_str->oppose / ptr_str->adjacent;
		}

		if ((ptr_str->oppose) != 0)
		{
			ptr_strTR->tb_Angle[0] = ptr_str->oppose / ptr_str->hypotenuse;
			ptr_strTR->tb_Angle[0] = ptr_str->oppose / ptr_str->adjacent;
		}
	}
		//-- test si l'angle alpha a �t� ins�r� 



	//-- calcul de tous les angles -> appel de fct --// 


	//-- check si la longeur des segments bien calcul� 

}
	










