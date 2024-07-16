#include <bits/stdc++.h>
//here  in this ques basically we have to written the pair of numbers from arr[] whose sum quivalent to  to s
vector<vector<int>> pairSum(vector<int> &arr, int s) {
  // making a 2d vector first
  vector<vector<int>>result; //A 2d vector to store the final result of pairs(making sum)
  // now a loop to iterate in the array
  for(int i=0;i<arr.size();i++)
  // here we are running the first loop  for the first element 
  
  {
     for(int j=i+1;j<arr.size();j++){
     //  and the second loop for the elemnt just after that{
        if(arr[i]+arr[j]==s)
        // now comparing in the loop if the submission of (ist and 2nd==s)
        { // if yes then push back it in the array 
           vector<int>mod;
           mod.push_back(min(arr[i],arr[j]));// first push_back min
           mod.push_back(max(arr[i],arr[j]));// then push_back max
           // since non decreasing()
           result.push_back(mod);
        }
     }
  }
  // now sort the result vector
  sort(result.begin(),result.end());
  return result;
      
}

//Sample Input 1:
//5 5[S]
//1 2 3 4 5[arr vector]
// firstly i[0]=1 & j[0+1]=2
// now 1+2==5 no [1+3]==5 no 1+4==5 yes
// so push_back temp={1}(min) and temp={1,4}(max)then 
// now i[1]= 2 and j[2]=3 2+3=5 so mod(2,3)..no need to check further since bigger than 5 only coming
// push_back them in result vector for storing list
// now need to sort this result vector since we have to return in the non-decreasing order of the first value
// and then finally returnthe array


