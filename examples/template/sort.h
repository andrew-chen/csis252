// Author: Dan Brekke
// Class: CSIS 252

// description: Templated sort function will sort an array descendingly.
//              This is an implementation of the well known selection sort.
// preconditions: n contains the number of values that will be sorted
// postconditions: array is sorted descendingly
// function input: array (array of itemType) - the array to be sorted
//                 n (int) - the number of values in the array
// function output: array (array of itemType) - the sorted array

template <typename itemType>
void sort(itemType array[], int n)
{
   itemType temp; // temporarily holds a value for swapping
   for (int i=0; i<n-1; i++)  
   {
      int big=i;
      for (int j=i+1; j<n; j++) 
         if (array[j] > array[big])
            big=j;
      temp = array[i];
      array[i] = array[big];
      array[big] = temp;
   }
}

