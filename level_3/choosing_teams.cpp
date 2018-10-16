#include <iostream>
#include <cmath>

using namespace std;

/*
    N students 1 : 2000 for each has y = k per student
    can only be <=5 partitions k 1:5
    T contains 3 N
    each N only in 1 T
    
    * Max num of T if y num for each student and num of least k

*/
int main()
{
    int pForEachN[2001] = {};
    int numOfAllStudents = 0;
    int numOfMinimumParticipation = 0;
    int numOfProccessedStudents = 0;
    scanf("%d", &numOfAllStudents);
    scanf("%d", &numOfMinimumParticipation);
    for (int i = 0; i < numOfAllStudents; ++i)
    {
        scanf("%d", &pForEachN[i]);

        if (pForEachN[i] + numOfMinimumParticipation <= 5)
            ++numOfProccessedStudents;
    }

    printf("%d", (int)floor(numOfProccessedStudents / 3));

    return 0;
}
