#include <vector>
#include "stuff3.h"

// you should modify the code for this one
// you can also change the parameters. 
// If you do that. make sure you change that for the call from Decision1()
pair<bool, Stuff3> DecisionRecur1(vector<Stuff3>& vec)
{
   Stuff3 s;
   pair<bool, Stuff3> p = make_pair(false, s);

   
   return p;
}

pair<bool, Stuff3> Decision1(vector<Stuff3>& vec)
{
   // you can change this line if you decide to change the parameters for DecisionRecur1
   return DecisionRecur1(vec);
}

// you should modify the code for this one
// you can also change the parameters. 
// If you do that. make sure you change that for the call from Decision2()
pair<bool, Stuff3> DecisionRecur2(vector<Stuff3>& vec)
{
   Stuff3 s;
   pair<bool, Stuff3> p = make_pair(true, s);
   return p;
}

pair<bool, Stuff3> Decision2(vector<Stuff3>& vec)
{
   // you can change this line if you decide to change the parameters for DecisionRecur2
   return DecisionRecur2(vec);
}
