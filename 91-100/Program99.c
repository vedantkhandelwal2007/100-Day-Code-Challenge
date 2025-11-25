// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

// /*
// Sample Test Cases:
// Input 1:
// 15/04/2025
// Output 1:
// 15-Apr-2025

// */

// Q99: Change the date format from dd/mm/yyyy to dd-Mon-yyyy
/*
Sample Test Case:
Input:
15/04/2025
Output:
15-Apr-2025
*/

#include <stdio.h>

int main() {
    char day[3], month[3], year[5];

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%2s/%2s/%4s", day, month, year);

    if (month[0] == '0' && month[1] == '1') printf("%s-Jan-%s", day, year);
    else if (month[0] == '0' && month[1] == '2') printf("%s-Feb-%s", day, year);
    else if (month[0] == '0' && month[1] == '3') printf("%s-Mar-%s", day, year);
    else if (month[0] == '0' && month[1] == '4') printf("%s-Apr-%s", day, year);
    else if (month[0] == '0' && month[1] == '5') printf("%s-May-%s", day, year);
    else if (month[0] == '0' && month[1] == '6') printf("%s-Jun-%s", day, year);
    else if (month[0] == '0' && month[1] == '7') printf("%s-Jul-%s", day, year);
    else if (month[0] == '0' && month[1] == '8') printf("%s-Aug-%s", day, year);
    else if (month[0] == '0' && month[1] == '9') printf("%s-Sep-%s", day, year);
    else if (month[0] == '1' && month[1] == '0') printf("%s-Oct-%s", day, year);
    else if (month[0] == '1' && month[1] == '1') printf("%s-Nov-%s", day, year);
    else if (month[0] == '1' && month[1] == '2') printf("%s-Dec-%s", day, year);

    return 0;
}
