#include <vector>
#include "stuff3.h"

// you should modify the code for this one
// you can also change the parameters. 
// If you do that. make sure you change that for the call from Decision1()
pair<bool, Stuff3> DecisionRecur1(vector<Stuff3>& vec, int start, int end)
{
   Stuff3 s;
   pair<bool, Stuff3> p = make_pair(false, s);

   // Base case: If the vector has only one element, return it
   if (start == end) {
      p = {true, vec[end]};
      return p;
   }

   // Divide and Conquer: Determine if there is a majority in the subarray
   int middle = start + (end - start) /2;
   pair<bool, Stuff3> left = DecisionRecur1(vec, start, middle);
   pair<bool, Stuff3> right = DecisionRecur1(vec, middle + 1, end);

   // Combine results
   if (left.first && right.first) {
      if (left.second == right.second) {
         p = {true, left.second};
         return p;
      }
      else {
         p = {false, Stuff3()};
         return p;
      }
   }
   else if (left.first) {
      return left;
   }
   return p;
}

pair<bool, Stuff3> Decision1(vector<Stuff3>& vec)
{
   // you can change this line if you decide to change the parameters for DecisionRecur1
   return DecisionRecur1(vec, 0, vec.size() - 1);
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
