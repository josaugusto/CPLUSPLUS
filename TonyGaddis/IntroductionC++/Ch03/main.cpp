#include <iostream>

/*
    3. Display Count of Lines
        Write a program that displays the count of lines with and without comments for a
        program of 1050 lines in total. Assume that 36 percent of the lines contain comments.
*/

int main()
{
    const int totalLines{ 1050 };
    int totalLinesWithComments{}, totalLinesNoComments{};

    totalLinesWithComments = totalLines * 0.36;
    totalLinesNoComments = totalLines - (totalLines * 0.36);

    std::cout << "Total number of lines: " << totalLines << '\n';
    std::cout << "Lines with comments: " << totalLinesWithComments << '\n';
    std::cout << "Lines without comments: " << totalLinesNoComments << '\n';
    

    return 0;
}