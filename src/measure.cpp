#include "measure.h"



Measure::Measure(TimeSignature T, KeySignature K)
{
  Time_Sig = T;
  Key_Sig = K;
  int beatsLeft = T.beats;
  isFull = false;
  startNote = NULL;
  endNote = NULL;
}
int Measure::add(Note* loc, Note* insert)
{
  if (loc == NULL)
    loc = insert;
  else
    add(loc->next, insert);

  return beatsLeft - (Time_Sig.beatValue / insert->duration);
}
  
	    
int Measure::add(Note* n)
{
  if(!isFull)
    {
      return add(startNote, n);
    }
  else
    return -1;
 }
