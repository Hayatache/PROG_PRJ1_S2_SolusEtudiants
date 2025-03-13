//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 2 - Calculs Trigo
// Nom du fichier 		: CalculsTrigo.h
// Date de cr�ation 	: 14.02.2024
// Date de modification : 14.02.2024
//
// Auteur 				: Diego Savary
//
// Description          : 
//
// Remarques			: voir donnee de l'�preuve            
//----------------------------------------------------------------------------------//
#ifndef CALCUL_TRIGO_H
#define CALCUL_TRIGO_H
#include <stdint.h> 
//-- d�claration -> d�finition globales --// 
#define NB_CHOIX_MAX 2

//-- d�claration -> �num�ration globales --// 
typedef enum { cote, angle } e_choixCoteAngle;
typedef enum { adj = 1, hyp, opp } e_choixCote;
typedef enum { alpha = 1, beta } e_choixAngle;
typedef enum { ok, nok} e_validation;


//-- d�claration -> structure globales --// 
//--> structure 1
struct str_coteTriangle
{
	uint8_t adjacent, hypotenuse, oppose;
};
//--> structure 2
struct str_triangleRectangle
{
	double tb_Angle[4] = { 1, 3, 2, 4 };
	struct str_coteTriangle triangle_s;

	struct Str_AetP
	{
		short air;
		char perimetre;

	}; 
	
};

//-- d�claration de prototype --// 
	//-> tous les champs de la structure seront mis � z�ro
	//-> conversion angle degr� -> en radian 
int Conversion_DegRad(pt_strTriangle, str_triangleRectangle);
	//-> conversion angle radian -> en degr� 
int Conversion_RadDeg(pt_strTriangle, str_triangleRectangle);
	//-> calculer les diff�rents segments du triangle
int CalculerLongeurSegment(pt_strTriangle, str_triangleRectangle);
	//-> calculer les diff�rents angles 
int CalculerAllAngles(pt_strTriangle, str_triangleRectangle);


#endif // !CALCUL_TRIGO_H