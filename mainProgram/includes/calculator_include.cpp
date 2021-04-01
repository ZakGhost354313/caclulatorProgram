#include <iostream>
#include <ios>
#include <streambuf>
#include <istream>
#include <ostream>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <queue>
#include <algorithm>
#include <random>
#include <cfloat>
#include <ctime>
#include <functional>

namespace other {
  extern istream cin;
  extern ostream cout;
  extern ostream cerr;
  extern ostream clog;
 
  extern wistream wcin;
  extern wostream wcout;
  extern wostream wcerr;
  extern wostream wclog;
}

namespace std {
	extern iostream cout;
	extern iostream cin;
	extern 
}


namespace ghost {
	void easterEgg(int eggNumber, const char input,) {
		//main strings
    	std::string input;
    	std::string confirm;
    	std::string ERROR;
    	std::string egg1;
    	std::string egg2;
    	egg1 = "Well, if you wanted honesty\nThat's all you had to say\nI never want to let you down\nOr have you go, it's better off this way\nFor all the dirty looks\nThe photographs your boyfriend took\nRemember when you broke your foot\nFrom jumping out the second floor?\n\nI'm not okay\nI'm not okay\nI'm not okay\n\nYou wear me out\nWhat will it take to show you\nThat it's not the life it seems? (I'm not okay)\nI've told you time and time again\nYou sing the words but don't know what it means (I'm not okay)\nTo be a joke and look\nAnother line without a hook\nI held you close as we both shook\nFor the last time, take a good hard look\n\nI'm not okay\nI'm not okay\nI'm not okay\n\nYou wear me out\nForget about the dirty looks\nThe photographs your boyfriend took\nYou said you read me like a book\nBut the pages all are torn and frayed\nI'm okay, I'm okay, I'm okay now (I'm okay, now)\nBut you really need to listen to me\nBecause I'm telling you the truth\nI mean this, I'm okay! (Trust me)\n\nI'm not okay\nI'm not okay\nWell, I'm not okay, I'm not o-fucking-kay\nI'm not okay\nI'm not okay";
    	egg2 = "\nBreak out, of this place?\nWhy would anyone wanna break out?\nThe outside world recoils in fear\nThinking if they slip up, they'll get locked up in here\nYou're killing yourself just to make ends meet\nWhile I'm workin' on my tan and kicking up my feet\nYou can't beat livin' in prison, there's always something to do\nAnd you know who's paying, everyone but you!\nEvery day I wake up to a nice hot shower\nDon't pay the water bill so I'm scrubbing for hours\nShoot some hoops and lift weights in the yard\nMaybe blow off some steam, shiv a rookie guard\nAnd there's nothing more exquisite\nThan when I get my 14 minute conjugal visits\nC'mon and meet the gang!\nThere's Jimmy the Pickle, and Shithole Hank\nHe makes the best hooch wine in his toilet tank\nThere's Bam-Bam, and Tiny, and Sparkles McGee\nAnd every single one of us scumbags agree\nI don't wanna be free (I don't wanna be free)\nLeave me in luxury (leave me in luxury)\nWhy try a prison break\nWhen hard time is totally great\ngot a trash pedigree (I got a trash pedigree)\nBut in here I'm bourgeoisie (hey Ma, look at me)\nI never think about the world beyond\nThen I'd recall how I killed my mom\nNo! I don't wanna be\nFree! Not the life for me\nNo! I don't wanna be free\nOf these amenities\nIf I tried to live this good out there\nI'd have to be a thousandaire\nThis is where I wanna grow old\nSo I'm just praying I don't make parole\n'Cause I don't wanna be free!";
		ERROR = "3RR0R";
		//main statment
    	if (input == "im_not_okay") {
        	std::cout << "\nEASTER EGG INITIATED\n";
        	std::cout << "please type 'CONFIRMED' to confirm\n";
        	std::cin >> confirm;
        	if (confirm == "CONFIRM") {
            	std::cout << egg1;
        	}
        	if (confirm != "CONFIRM") {
            	std::cout << "incorrect confirmation, easter egg cancelled.\n";
            	std::cout << "please leave this calculator now\n";
            	std::string a;
            	std::cin >> a;
            	if (a == "EXIT") {
                	std::cout << "EXITING...";
            	}
            	else if (a == "exit" || a == "Exit"){
                	std::cout << "EXITING...";
            	}
        	}
    	}
	}
}
