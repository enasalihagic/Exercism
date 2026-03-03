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