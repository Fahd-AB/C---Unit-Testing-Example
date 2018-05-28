/*
 * Argent.h
 *
 *  Created on: 2015/12/01
 *      Author: Fahd
 */

#ifndef ARGENT_H_
#define ARGENT_H_
#include <string>
#include <stdexcept>
#include <cppunit/portability/Stream.h>
#include <cppunit/extensions/HelperMacros.h>
class Argent
{
public:
	Argent( double valeur, std::string devise )
    : m_valeur( valeur )  //contient la valeur de la somme d'argent exemple 100.00
    , m_devise( devise )  //contient la devise de la somme d'argent exemple TND pour le dinar tunisien
  {
  }

  double getValeur() const
  {
    return m_valeur;
  }

  std::string getDevise() const
  {
    return m_devise;
  }



  // redifinition de l'opérateur == pour la comparaisent de deux sommes d'argent cad égaux
  // en valeur et en devise
  bool operator ==( const Argent &nouveau ) const
  {
    return m_valeur == nouveau.m_valeur  &&  m_devise == nouveau.m_devise;
  }




  // redifinition de l'opérateur != pour la différence entre deux sommes d'argent cad ils ne soient
    // pas identiques en valeur et en devise
  bool operator !=( const Argent &nouveau ) const
  {
    return !(*this == nouveau);
  }


  // redifinition de l'opérateur += pour la somme de deux sommes d'argent cad la somme de valeurs
  // seulement si les deux sommes d'argents sonr de meme devise

  Argent &operator +=( const Argent &nouveau )
  {
    if ( m_devise == nouveau.m_devise )


    m_valeur += nouveau.m_valeur;

    else
    	CPPUNIT_ASSERT_EQUAL(m_devise,nouveau.getDevise());

    return *this;
  }




private:
  double m_valeur;
  std::string m_devise;
};


#endif /* ARGENT_H_ */
