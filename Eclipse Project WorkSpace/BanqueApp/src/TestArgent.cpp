/*
 * TestArgent.cpp
 *
 *  Created on: 2015/12/01
 *      Author: Fahd
 */

#include "Argent.h"
#include "TestArgent.h"
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/portability/Stream.h>




void
TestArgent::setUp()
{

}


void
TestArgent::tearDown()
{
}


void
TestArgent::testConstructor()
{    double V;
     std::string D;

     const std::string deviseTND( "TND" );
     const double valeur = 10.00;
	std::cout <<"\n 1) Test de la vérification de valeur initiale de compte '10TND' \n" ;
	std::cout <<"   Donner la valeur du somme d'argent : " ;
	std::cin >>V;
	std::cout <<"   Donner la devise du somme d'argent : TND, EUR... " ;
	std::cin >>D;




  Argent sommeinit( valeur, deviseTND ); //valeur par défaut 10TND
  Argent sommeintroduite( V, D ); //valeur introduite par l'utilisateur

  // test
  CPPUNIT_ASSERT_EQUAL( sommeinit.getValeur(),sommeintroduite.getValeur() ); //test sur égalité en valeur
  CPPUNIT_ASSERT_EQUAL( sommeinit.getDevise(),sommeintroduite.getDevise() ); //test sur égalité en devise
}


void
TestArgent::testEqual()
{  double V1;        // valeur de la 1ere somme introduite
   std::string D1;   // devise de la 1ere somme introduite
   double V2;        // valeur de la 2eme somme introduite
   std::string D2;   // devise de la 2eme somme introduite
   std::string R;    //contient la réponse de l'utilisateur
   std::string R1="E"; //sert à tester la réponse de l'utilisateur
   std::string R2="D"; //sert à tester la réponse de l'utilisateur

	std::cout <<"\n 2) Comparaison de deux sommes d'argent \n" ;
	    std::cout <<"   Donner la valeur du 1ere somme d'argent : " ;
		std::cin >>V1;
		std::cout <<"   Donner la devise du 1ere somme d'argent : TND, EUR... " ;
		std::cin >>D1;
		Argent SommePrimaire( V1, D1 );
		std::cout <<"   Valeur introduite : "<<SommePrimaire.getValeur() <<SommePrimaire.getDevise();
		std::cout <<" \n";
		        std::cout <<"   Donner la valeur du 2eme somme d'argent : " ;
				std::cin >>V2;
				std::cout <<"   Donner la devise du 2eme somme d'argent : TND, EUR... " ;
				std::cin >>D2;
				Argent SommeDeuxieme( V2, D2 );
				std::cout <<"   Valeur introduite : "<<SommeDeuxieme.getValeur() <<SommeDeuxieme.getDevise();
		std::cout <<" \n";
		std::cout <<SommePrimaire.getValeur() <<SommePrimaire.getDevise()<<" ET "<<SommeDeuxieme.getValeur() <<SommeDeuxieme.getDevise();
		std::cout <<" \n";
		std::cout <<" Pour Tester les deux sommes vous taper 'E' pour tester s'ils sont égaux et 'D' pour différents";
		std::cout <<" \n";
		std::cin >>R;
		if(R=="D"){
			 CPPUNIT_ASSERT( SommePrimaire != SommeDeuxieme );
		}
		if(R=="E"){
					 CPPUNIT_ASSERT( SommePrimaire == SommeDeuxieme );
				}
		else{  //si l'utilisateur tape une valeur autre que E ou D

			if(SommePrimaire == SommeDeuxieme){
			CPPUNIT_ASSERT_EQUAL(R1,R);}
			if(SommePrimaire != SommeDeuxieme){
			CPPUNIT_ASSERT_EQUAL(R2,R);}
		}


}


void
TestArgent::testAdd()
{
	double V1;
	   std::string D1;
	   double V2;
	   std::string D2;
	std::cout <<"\n 3) Addition de deux sommes d'argent \n" ;
	        std::cout <<"   Donner la valeur du 1ere somme d'argent : " ;
			std::cin >>V1;
			std::cout <<"   Donner la devise du 1ere somme d'argent : TND, EUR... " ;
			std::cin >>D1;
			Argent SommePremiere( V1, D1 );
			std::cout <<"   Combien voulez-vous ajouter a cette somme : "<< SommePremiere.getValeur()<<SommePremiere.getDevise()<<" ?!";
			std::cout <<"\n";
							std::cout <<"   Donner la valeur du 2eme somme d'argent : " ;
							std::cin >>V2;
							std::cout <<"   Donner la devise du 2eme somme d'argent : TND, EUR... " ;
							std::cin >>D2;
							Argent SommeDeuxieme( V2, D2 );
							SommePremiere+=SommeDeuxieme;



							std::cout <<"\n ____________________________________________________________ \n";
}








