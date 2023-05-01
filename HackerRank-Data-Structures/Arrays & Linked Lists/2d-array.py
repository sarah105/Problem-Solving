def hourglassSum(arr):
    maxSum = -999999999999
    for row in range (0,4):
        for col in range (0,4):
            sum =  0
            for i in range (0, 3):
                sum += arr[row][col+i] + arr[row+2][col+i]
            sum += arr[row+1][col+1]
            if sum > maxSum:
                maxSum = sum
    return maxSum
