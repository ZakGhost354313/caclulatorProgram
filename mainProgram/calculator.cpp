/*
i need to learn more about code
*/
//libraries
#include <iostream>
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
#include <includes/calculator_include.cpp>

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

//main
int main1() {
    //main strings
    std::string input;
    std::string confirm;
    std::string ERROR;
    std::string egg1;
    std::string egg2;
    egg1 = "Well, if you wanted honesty\nThat's all you had to say\nI never want to let you down\nOr have you go, it's better off this way\nFor all the dirty looks\nThe photographs your boyfriend took\nRemember when you broke your foot\nFrom jumping out the second floor?\n\nI'm not okay\nI'm not okay\nI'm not okay\n\nYou wear me out\nWhat will it take to show you\nThat it's not the life it seems? (I'm not okay)\nI've told you time and time again\nYou sing the words but don't know what it means (I'm not okay)\nTo be a joke and look\nAnother line without a hook\nI held you close as we both shook\nFor the last time, take a good hard look\n\nI'm not okay\nI'm not okay\nI'm not okay\n\nYou wear me out\nForget about the dirty looks\nThe photographs your boyfriend took\nYou said you read me like a book\nBut the pages all are torn and frayed\nI'm okay, I'm okay, I'm okay now (I'm okay, now)\nBut you really need to listen to me\nBecause I'm telling you the truth\nI mean this, I'm okay! (Trust me)\n\nI'm not okay\nI'm not okay\nWell, I'm not okay, I'm not o-fucking-kay\nI'm not okay\nI'm not okay";
    egg2 = "\nBreak out, of this place?\nWhy would anyone wanna break out?\nThe outside world recoils in fear\nThinking if they slip up, they'll get locked up in here\nYou're killing yourself just to make ends meet\nWhile I'm workin' on my tan and kicking up my feet\nYou can't beat livin' in prison, there's always something to do\nAnd you know who's paying, everyone but you!\nEvery day I wake up to a nice hot shower\nDon't pay the water bill so I'm scrubbing for hours\nShoot some hoops and lift weights in the yard\nMaybe blow off some steam, shiv a rookie guard\nAnd there's nothing more exquisite\nThan when I get my 14 minute conjugal visits\nC'mon and meet the gang!\nThere's Jimmy the Pickle, and Shithole Hank\nHe makes the best hooch wine in his toilet tank\nThere's Bam-Bam, and Tiny, and Sparkles McGee\nAnd every single one of us scumbags agree\nI don't wanna be free (I don't wanna be free)\nLeave me in luxury (leave me in luxury)\nWhy try a prison break\nWhen hard time is totally great\ngot a trash pedigree (I got a trash pedigree)\nBut in here I'm bourgeoisie (hey Ma, look at me)\nI never think about the world beyond\nThen I'd recall how I killed my mom\nNo! I don't wanna be\nFree! Not the life for me\nNo! I don't wanna be free\nOf these amenities\nIf I tried to live this good out there\nI'd have to be a thousandaire\nThis is where I wanna grow old\nSo I'm just praying I don't make parole\n'Cause I don't wanna be free!";
    ERROR = "3RR0R";
    //calculator code(with eggs)
    std::cout << "INPUT: ";
    std::cin >> input;
        //easter egg 1
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
    //Easter Egg 2
    if (input == "i_dont_wanna_be_free") {
        std::cout << "\nEASTER EGG INITIATED\n";
        std::cout << "please type 'CONFIRMED' to confirm\n";
        std::cin >> confirm;
        if (confirm == "CONFIRM") {
            std::cout << egg2;
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
    //main program/other program
    
    
    //equations
    if (input == "0+0") {
        std::cout << "\nAnswer : 0\n";
    }
    if (input == "0+1") {
        std::cout << "\nAnwser : 1\n";
    }
    if (input == "0+2") {
        std::cout << "\nAnswer : 2\n";
    }
    if (input == "0+3") {
        std::cout << "Answer : 3";
    }
    if (input == "0+4") {
        std::cout << "Answer : 4";
    }
    if (input == "0+5") {
        std::cout << "Answer : :5";
    }
    if (input == "0+6") {
        std::cout << "Answer : 6";
    }
    if (input == "0+7") {
        std::cout << "Answer : 7";
    }
    if (input == "0+8") {
        std::cout << "Answer : 8";
    }
    if (input == "0+9") {
        std::cout << "Answer : 9";
    }
    if (input == "1+0") {
        std::cout << "Answer : 1";
    }
    if (input == "1+1") {
        std::cout << "Answer : 2";
    }
    if (input == "1+2") {
        std::cout << "Answer : 3";
    }
    if (input == "1+3") {
        std::cout << "Answer : 4";
    }
    if (input == "1+4") {
        std::cout << "Answer : 5";
    }
    if (input == "1+5") {
        std::cout << "Answer : 6";
    }
    if (input == "1+6") {
        std::cout << "Answer : 7";
    }
    if (input == "1+7") {
        std::cout << "Answer : 8";
    }
    if (input == "1+8") {
        std::cout << "Answer : 9";
    }
    if (input == "1+9") {
        std::cout << "Answer : " << ERROR;
    }
    if (input == "2+0") {
        std::cout << "Answer : 2";
    }
    if (input == "2+1") {
        std::cout << "Answer : 3";
    }
    if (input == "2+2") {
        std::cout << "Answer : 4";
    }
    if (input == "2+3") {
        std::cout << "Answer : 5";
    }
    if (input == "2+4") {
        std::cout << "Answer : 6";
    }
    if (input == "2+5") {
        std::cout << "Answer : 7";
    }
    if (input == "2+6") {
        std::cout << "Answer : 8";
    }
    if (input == "2+7") {
        std::cout << "Answer : 9";
    }
    if (input == "2+8") {
        std::cout << "Answer : " << ERROR;
    }
    if (input == "2+9") {
        std::cout << "Answer : " << ERROR;
    }
    //i just realized that i am an idiot
    std::string answer;
    using namespace std;
    if (input == "3+0") {
        answer = 3+0
        cout << "Answer : " << answer << endl;
    }
    //not done
    std::cout << "\n\n\nEND\n\n\n";
}
