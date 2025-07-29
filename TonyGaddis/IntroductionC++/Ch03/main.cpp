#include <iostream>

/*
    3. Display Count of Lines
        Write a program that displays the count of lines with and without comments for a
        program of 1050 lines in total. Assume that 36 percent of the lines contain comments.
*/

int main()
{
    const int TOTAL_LINES{ 1050 };
    int totalLinesWithComments{}, totalLinesNoComments{};

    totalLinesWithComments = TOTAL_LINES * 0.36;
    totalLinesNoComments = TOTAL_LINES - (TOTAL_LINES * 0.36);

    std::cout << "Total number of lines: " << TOTAL_LINES << '\n';
    std::cout << "Lines with comments: " << totalLinesWithComments << '\n';
    std::cout << "Lines without comments: " << totalLinesNoComments << '\n';

    return 0;
}
