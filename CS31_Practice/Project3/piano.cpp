#include <iostream>
#include <string>
using namespace std;


// isTuneWellFormed
bool isTuneWellFormed(string tune)
{
    if(tune.size() == 0){
        return true;
    }

    if((tune.at(tune.size() - 1)) != '/'){
        return false;
    }

    /*
    *POSSIBLE INPUTS
    * After a slash, we first need a letter
    * 
    * Ab3GB/b/
    * P/
    * A3b/G
    */

    for (int i = 0; i < tune.size(); i++){
        while (tune.at(i) != '/'){
            char note = tune.at(i);
            if (note != 'A' && note != 'B' && note != 'C' && note != 'D' && note != 'E' && note != 'F' && note != 'G'){
                return false;
            } else {
                i++;
            }
            if (tune.at(i) == 'b' || tune.at(i) == '#'){
                i++;
            }
            if(isdigit(tune.at(i))){
                i++;
            }
        }
    }

    return true;
}


//*************************************
//  translateNote
//*************************************

// Given an octave number, a note letter, and an accidental sign, return
// the character that the indicated note is translated to if it is playable.
// Return a space character if it is not playable.
//
// First parameter:   the octave number (the integer 4 is the number of the
//                    octave that starts with middle C, for example).
// Second parameter:  an upper case note letter, 'A' through 'G'
// Third parameter:   '#', 'b', or ' ' (blank means no accidental sign)
//
// Examples:  translateNote(4, 'A', ' ') returns 'p'
//            translateNote(2, 'G', '#') returns '%'
//            translateNote(4, 'H', ' ') returns ' '

char translateNote(int octave, char noteLetter, char accidentalSign)
{
      // This check is here solely to report a common CS 31 student error.
    if (octave > 9)
    {
        cerr << "********** translateNote was called with first argument = "
             << octave << endl;
    }

      // Convert Cb, C, C#/Db, D, D#/Eb, ..., B, B#
      //      to -1, 0,   1,   2,   3, ...,  11, 12

    int note;
    switch (noteLetter)
    {
      case 'C':  note =  0; break;
      case 'D':  note =  2; break;
      case 'E':  note =  4; break;
      case 'F':  note =  5; break;
      case 'G':  note =  7; break;
      case 'A':  note =  9; break;
      case 'B':  note = 11; break;
      default:   return ' ';
    }
    switch (accidentalSign)
    {
      case '#':  note++; break;
      case 'b':  note--; break;
      case ' ':  break;
      default:   return ' ';
    }

      // Convert ..., A#1, B1, C2, C#2, D2, ...
      //      to ..., -2,  -1, 0,   1,  2, ...

    int sequenceNumber = 12 * (octave - 2) + note;

    const string keymap = "1!2@34$5%6^78*9(0qQwWeErtTyYuiIoOpPasSdDfgGhHjJklLzZxcCvVbBnm";
    if (sequenceNumber < 0  ||  sequenceNumber >= keymap.size())
        return ' ';
    return keymap.at(sequenceNumber);
}

// translateTune
int translateTune(string tune, string& instructions, int& badTick){
    int tick = 0;
    string result = "";
/*
If the parameter tune is a playable tune, the function sets instructions to the translated form of the tune and returns 0.
If tune is not a well-formed tune, the function returns 1.
If tune is a well-formed tune but is not a playable tune, badTick is set to the number of the tick that contains the leftmost-occurring unplayable note in the tune (where the first tick of the whole tune is number 1, the second is number 2, etc.), and the function returns 2.
*/
    if (isTuneWellFormed(tune) == false){
        return 1;
    }
    /* 
        * Sample input
        * ACb7/EC7/B#1/C2
    */

    int i = 0;

    //need to figure out the ticks... 
    while(i < tune.size()){
        bool bracket = false;
        bool first = false;

        if (tune.at(i) == '/')
        {
            result += ' ';
            tick++;
            i++;
            continue;
        }
        while(tune.at(i) != '/'){
            int octave = 4;
            char noteLetter = ' ';
            char accidentalSign = ' ';

            noteLetter = tune.at(i);
            if (tune.at(i+1) == '#' or tune.at(i+1) == 'b'){
                i++;
                accidentalSign = tune.at(i);
            }
            if (isdigit(tune.at(i+1))){
                i++;
                octave = tune.at(i) - '0';
            }
            char tNote = translateNote(octave, noteLetter, accidentalSign);
            //if statement
            if (tNote == ' '){
                badTick = tick + 1;
                return 2;
            }
            if ((bracket == false) && (tune.at(i+1) == 'A' || tune.at(i+1) == 'B' || tune.at(i+1) == 'C' || tune.at(i+1) == 'D' || tune.at(i+1) == 'E' || tune.at(i+1) == 'F' || tune.at(i+1) == 'G')){
                bracket = true;
                result += "[";
            }
            result += tNote;
            i++;
        }
        if (bracket){
            result += "]";
        }
        tick++;
        i++;
        
    }
    instructions = result;
    cout << instructions;
    return 0;
}

int main(){
    string instrs = "";
    int badt = -99;

    cout << translateTune("//", instrs, badt);
    return 0;
}


//G3B3DD5//G/A/A3B/C5/B3D5//G//G//CE5//C5/D5/E5/F#5/B3G5//G//G/


//check are there valid notes?
    /*
    for(int i = 0; i < tune.size(); i++){
        if(tune.at(i) == '/' && i != 0){
            if(i < (tune.size()-1) ){
                char note = tune.at(i+1);
                if(note != 'A' && note != 'B' && note != 'C' && note != 'D' && note != 'E' && note != 'F' && note != 'G' && note != '/'){
                    return false;
                }
            }
        }
        char n = tune.at(i);
        if(n == 'A' || n == 'B' || n == 'C' || n == 'D' || n == 'E' || n == 'F' || n == 'G'){
            if(i < tune.size()-2){
                if(isdigit(tune.at(i+1))){
                    if(tune.at(i+2) == '#' || tune.at(i+2) == 'b'){
                        return false;
                    }
                }
            }
        } 
    }
    return true;
    */