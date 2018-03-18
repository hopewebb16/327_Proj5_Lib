#pragma once
#include "Smalltalk.h"

class Smalltalk_Brit :
	public Smalltalk
{
public:
	//create with appropriate phrases
	Smalltalk_Brit(int i=1);
	virtual ~Smalltalk_Brit(void);
	virtual void populatePhrases(); 
};

