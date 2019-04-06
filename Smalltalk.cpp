/*
 * Smalltalk.cpp
 *
 *  Created on: Apr 5, 2019
 *      Author: Hope
 */
using namespace std;

//derived class will set Nationality, iPerson. iPerson is just a counter used to distinguish between objects of the same type
	Smalltalk::Smalltalk(std::string myNationality,int iPerson=1):nationality(myNationality), iPerson(iPerson), current_phrase(0), pWatch(0){

	}

	//if pWatch !=0 then be sure to delete what it points to
	Smalltalk:: ~Smalltalk(void) {
		if (pWatch !=0){
			delete pWatch;
		}
	}

	//cycles through phrases added in populatePhrases. Returns them 1 by 1 starting with the first and ending
	//with the last and then it starts over
	//takes the form Nationality iPerson: phrase
	//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
	//AMERICAN 10:Why yes, I would like to supersize that
	std::string Smalltalk::saySomething(){
		string words = "";
		for (int i = 0; i < mySmallTalk.size(); i++){
			words = words + nationality + " " + to_string(iPerson)+ ":" + mySmallTalk[i] + "\n";
		}
		return words;
	}

	//returns the time (if pWatch != 0) in the form of THE_CURRENT_TIME_IS: and then the time
	//or I_DO_NOT_HAVE_A_WATCH string (if pWatch == 0)
	std::string Smalltalk::getTime(){
		if (pWatch != 0){
			return THE_CURRENT_TIME_IS + ": " + pWatch-> getTime();
		}
		return I_DO_NOT_HAVE_A_WATCH;
	}

	//if this object has a watch it is taken away, otherwise a NULL pointer is returned
	//this means return the pointer to the watch so another smalltalker
	//can use the watch.  Set this->pWatch =NULL.  This transaction simulates giving up a watch
	//this is one of the few times when a shallow copy is appropriate
	Watch* Smalltalk::takeWatch(){
		Watch *temp;

		if (pWatch ==0){
			return pWatch;
		}
		tmep = pWatch;
		this-> pWatch = NULL;
		return temp;
	}

	//if already have a watch then return false and dont change pWatch pointer
	//otherwise accept watch (return true) and set this->pWatch=pWatch
	//this is one of the few times when a shallow copy is appropriate
	bool giveWatch(Watch *pWatch){
		if (pWatch == 0){
			return false;
		}
		this ->pWatch = pWatch;
		return true;
	}





