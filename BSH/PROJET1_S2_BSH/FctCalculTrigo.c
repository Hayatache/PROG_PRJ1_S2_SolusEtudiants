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
#include <stdint.h>
#include <math.h>
//--- librairie perso ---//
#include "CalculTrigo.h"
#define PI 3.1415
/* excuse pour M.bovey 
 bon on va pas se mentir vous savez que je ne maitrise pas assez les pointeurs (ce qui est tr�s malheureux)
 mais je pensais que les petits feuilles que j'ai prepar� aurait �t� suffisante mais il n'en est rien..
 je tiens donc a m'excuser si le test est fait "avec le talent" car malheureusement je n'en ai pas
 donc je vous souhaite une bonne chance dans la correction de ce test.
*/

//bon pour faire un petit message de fin de test my bad je me suis fait cook 
//on se revoit l'ann�e pro en prog je suppose . . . . .


/* ----------------------------------------------------------------------------------
// -> NOM FCT					: InitialiserStructure 
// -> PARAMETRES ENTRES			: 
// -> PARAMETRE SORTIE			: e_validation 
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle 
// -> description				: tous les champs de la structure seront mis � z�ro
 ----------------------------------------------------------------------------------*/
e_validation InitialiserStructure(int *pt_strTiangle, str_triangleRectangle) {
	//-- d�claration variables --// 
	//-- pirmaire --// 
	static int compteur_boucle;

		//-- enumeration --// 
	str_triangleRectangle *pt_strTiangle = &str_triangleRectangle;

		//-- boucle pour initilaiser le tableau des angles --//
	for (compteur_boucle = 0; compteur_boucle > 3; compteur_boucle++) {
		pt_strTiangle->tb_Angle[compteur_boucle] = 0;
	}

	//-- initialisation des cot�s -> adj - hyp - opp --// 
	pt_strTiangle->str_coteTriangle = { 0 , 0 , 0};

	//-- initialisation des champs de air et perim�tres --// 
	pt_strTiangle->Str_AetP = { 0 ,0 , 0};

	//-- validation -> de la fct --// 
	if (str_triangleRectangle == 0) {
		return ok;
	}
	else
	{
		return nok;
	}

}
/* ----------------------------------------------------------------------------------
// -> NOM FCT					: Conversion_DegRad
// -> PARAMETRES ENTRES			:
// -> PARAMETRE SORTIE			: 
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle
// -> description				: depuis un angle en degr� -> d�terminer sa valeur 
//								  en radian 
 ----------------------------------------------------------------------------------*/
void Conversion_DegRad(int *pt_strTiangle, str_triangleRectangle) {
	static int compteur_boucle;
	int conversion[4];
	str_triangleRectangle* pt_strTiangle = &str_triangleRectangle;

	//-- test si angle � convertir --//
	for (compteur_boucle = 0; compteur_boucle > 3; compteur_boucle++) {
		if (pt_strTiangle->tb_Angle[compteur_boucle] != 0) {
			convesion[compteur_boucle] = 1;
		}
	}
	//--> alpha 
	if (conversion[0] == 1) {
		pt_strTiangle->tb_Angle[1] = pt_strTiangle->tb_Angle[0] * (PI / 180);
	}
	//--> beta 
	if (conversion[2] == 1) {
		pt_strTiangle->tb_Angle[4] = pt_strTiangle->tb_Angle[2] * (PI/180);
	}

}

//bon ca c'est mybad je croyais y'avais un probleme du coup jai supp les commentaires pour
//la fonction ci dessous donc my bad ;w;
void Conversion_RadDeg(int* pt_strTiangle, str_triangleRectangle) {
	static int compteur_boucle;
	int conversion[4];
	str_triangleRectangle* pt_strTiangle = &str_triangleRectangle;

	//-- test si angle � convertir --//
	for (compteur_boucle = 0; compteur_boucle > 3; compteur_boucle++) {
		if (pt_strTiangle->tb_Angle[compteur_boucle] != 0) {
			convesion[compteur_boucle] = 1;
		}
	}
	//--> alpha 
	if (conversion[1] == 1) {
		pt_strTiangle->tb_Angle[0] = pt_strTiangle->tb_Angle[1] * (180 / PI);
	}
	//--> beta 
	if(conversion[4] == 1){
		pt_strTiangle->tb_Angle[2] = pt_strTiangle->tb_Angle[4] * (180/PI);
	}
}
/* ----------------------------------------------------------------------------------
// -> NOM FCT					: CalculAllAngles
// -> PARAMETRES ENTRES			:
// -> PARAMETRE SORTIE			: e_validation
// -> PARAMETRE IN/OUT -> ptr	: str_triangleRectangle pt_strTriangle
// -> description				: si angle rentr� alors alors d�termine le 2�me angle 
 ----------------------------------------------------------------------------------*/
e_validation CalculerAllAngles(int *pt_strTiangle, str_triangleRectangle) {
	
	str_triangleRectangle* pt_strTiangle = &str_triangleRectangle;

	//-- test si un angle a �t� d�finit alpha ou beta 
	if (pt_strTiangle->tb_Angle[compteur_boucle] != 0)
		//-- calcul de alpha 
		pt_strTiangle->tb_Angle[0] = 90 - pt_strTiangle->tb_Angle[2]
		//-- conversion Degr� - Radian 
		Conversion_DegRad(*pt_strTiangle, str_triangleRectangle);
		//-- calcul de beta
	pt_strTiangle->tb_Angle[2] = 90 - pt_strTiangle->tb_Angle[0]
		//-- conversion Degr� - Radian 
		Conversion_DegRad(*pt_strTiangle, str_triangleRectangle);
	//-- si pas d'angle d�fini 

		//-- si cot� non d�fini -> hypoth�nuse -> fonction trigo invers�e arctan 
	pt_strTiangle->tb_Angle[1] = atan(pt_strTiangle->triangles_s->oppose / pt_strTiangle->triangles_s->adjacent);
			//-- conversion Radian - Degr� 
	Conversion_RadDeg(*pt_strTiangle, str_triangleRectangle);
		//-- si cot� non d�fini -> oppos� -> fonction trigo invers�e arccos
	pt_strTiangle->tb_Angle[1] = acos(pt_strTiangle->triangles_s->adjacent / pt_strTiangle->triangles_s->hypotenuse);
			//-- conversion Radian - Degr� 
	Conversion_RadDeg(*pt_strTiangle, str_triangleRectangle);
		//-- si cot� non d�fini -> adjacent -> fonction trigo invers�e arcsin
	pt_strTiangle->tb_Angle[1] = asin(pt_strTiangle->triangles_s->oppose / pt_strTiangle->triangles_s->hypotenuse);
			//-- conversion Radian - Degr� 
	Conversion_RadDeg(*pt_strTiangle, str_triangleRectangle);
	//-- test si tous les champs sont remplis 

		//-- retourne OK 
	return ok;

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
e_validation CalculerLongueurSegment(int *pt_strTiangle, str_triangleRectangle) {

	str_triangleRectangle* pt_strTiangle = &str_triangleRectangle;
	//-- test -> si pas aucun angle d�finit 

		//-- test si la valeur � calculer est � z�ro 

			//-- calculer segment adjacent --//
	pt_strTiangle->triangles_s->adjacent = sqrt(pow(pt_strTiangle->triangles_s->hypotenuse, 2) - pow(pt_strTiangle->triangles_s->oppose, 2));
			//-- calculer segment hypoth�nuse --// 
	pt_strTiangle->triangles_s->hypotenuse = sqrt(pow(pt_strTiangle->triangles_s->adjacent, 2) + pow(pt_strTiangle->triangles_s->oppose, 2));
			//-- calculer segment oppos� 
	pt_strTiangle->triangles_s->oppose = sqrt(pow(pt_strTiangle->triangles_s->hypotenuse, 2) - pow(pt_strTiangle->triangles_s->adjacent, 2));
	//-- test si un angle a �t� d�finit alpha ou beta 

		//-- test si l'angle alpha a �t� ins�r� 

			//-- conversion de alpha -> � -> radian 
	Conversion_RadDeg(*pt_strTiangle, str_triangleRectangle);

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
	CalculerAllAngles(int* pt_strTiangle, str_triangleRectangle);

	//-- check si la longeur des segments bien calcul� 
	return ok;
}










