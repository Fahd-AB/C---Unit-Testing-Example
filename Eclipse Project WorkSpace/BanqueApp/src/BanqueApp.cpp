//============================================================================
// Name        : BanqueApp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include "TestArgent.h"

using namespace std;
CPPUNIT_TEST_SUITE_REGISTRATION( TestArgent );

int main() {

   cout << "Bienvenue au programme de test de la banque !! "<<endl;
   cout << "Op�rations :"<<endl;
   cout << ""<<endl;
   cout << "1) Test de la v�rification de valeur initiale de compte '10TND'. "<<endl;
   cout << "2) Comparaison de deux sommes d'argent. "<<endl;
   cout << "3) Test Addition de deux sommes d'argent. "<<endl;
   cout << ""<<endl;
   cout << "Les op�ration seront ex�cut�es dans l'ordre si dessus : "<<endl;
   cout << ""<<endl;


	   // Extraire la derniere suite de test dans le registre
	   	  CPPUNIT_NS::Test *suite = CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest();

	   	  // Ajout de test au liste des tests � effectuer
	   	  CPPUNIT_NS::TextUi::TestRunner runner;
	   	  runner.addTest( suite );

	   	  // Changer le d�faut affichage du sortie en un affichage personalis�
	   	runner.setOutputter( new CPPUNIT_NS::CompilerOutputter( &runner.result(),
	   	                                                          CPPUNIT_NS::stdCOut() ) );
	   	  // Lancer le test
	   	  bool wasSucessful = runner.run();

	   	  // wassuccessful retourne 1 si un des test est erron�
	   	  return wasSucessful ? 0 : 1;




}
