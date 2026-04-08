/*Instructions
Find the difference between the square of the sum and the sum of the squares of the first N natural numbers.

The square of the sum of the first ten natural numbers is (1 + 2 + ... + 10)² = 55² = 3025.

The sum of the squares of the first ten natural numbers is 1² + 2² + ... + 10² = 385.

Hence the difference between the square of the sum of the first ten natural numbers and the sum of the squares of the first ten natural numbers is 3025 - 385 = 2640.

You are not expected to discover an efficient solution to this yourself from first principles; research is allowed, indeed, encouraged. Finding the best algorithm for the problem is a key skill in software engineering.
*/
namespace difference_of_squares {

    // 1. Prvo SABERI, pa onda na KVADRAT (Square of Sum)
    long long square_of_sum(int n) {
        int sum = (1LL*n * (n + 1)) / 2;
        return sum * sum;
    }

    // 2. Svaki na KVADRAT, pa ih SABERI (Sum of Squares)
    long long sum_of_squares(int n) {
        return (1LL*n * (n + 1) * (2 * n + 1)) / 6;
    }

    // 3. Oduzmi ih pravilnim redosledom
    long long difference(int n) {
        return square_of_sum(n) - sum_of_squares(n);
    }
}
