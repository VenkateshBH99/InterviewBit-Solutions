class Solution:
    # @param A : string
    # @return an integer
    def seats(self, A):
        seats = []
        for i in range(len(A)):
            if A[i] == 'x':
                seats.append(i)

        if len(seats) == 0:
            return 0
        med = int(statistics.median(seats))

        n = len(seats)
        if n % 2 == 0:
            final = list(range(med - n // 2 + 1, med + n // 2 + 1))
        else:
            final = list(range(med - n // 2, med + n // 2 + 1))

        moves = 0
        for i in range(len(seats)):
            moves += abs(final[i] - seats[i])

        return moves % 10000003
