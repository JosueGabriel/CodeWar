/*
    Multiples of 3 or 5

    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

    Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.

    Note: If the number is a multiple of both 3 and 5, only count it once. Also, if a number is negative, return 0(for languages that do have them)

    Courtesy of projecteuler.net
*/

auto solution(int number, int sum = 0) -> int {
    return (--number, number <= 0) ? sum : (number % 3 == 0 || number % 5 == 0 ? solution(number, sum += number): solution( number, sum += 0));
}