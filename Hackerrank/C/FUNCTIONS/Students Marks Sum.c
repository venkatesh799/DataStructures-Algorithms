/*

problem  : https://www.hackerrank.com/challenges/students-marks-sum/problem

*/


int marks_summation(int* marks, int number_of_students, char gender) {
  int i=0,ans=0;
  if(gender == 'b')
  {
      for(i=0;i<number_of_students;i++)
      {
          ans=ans+marks[i];
          i++;
      }
  }
  else
  {
      for(i=1;i<number_of_students;i++)
      {
          ans=ans+marks[i];
          i++;
      }
  }
  return ans;
}
