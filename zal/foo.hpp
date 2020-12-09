#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
  std::vector< char > wektor(people.size());
  int i=0;
  
  for (std::list< Human >::iterator it = people.end(); it != people.begin();)
  { 
    --it;
    it -> birthday();
    if(it->isMonster()== true)
    {
      wektor[i]= 'n';  
    }
    else
    {
        wektor[i]= 'y';
    }
    i++;
  }
    
  return wektor; 
}
