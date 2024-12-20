stockage = {
    1 : 1,
    2 : 1
        }

def fibonacci(n):
    if n==1 or n==2:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)

def fibonacciMemoisation(n):
    global stockage
    if not n in stockage.keys():
        stockage[n] = fibonacciMemoisation(n-1) + fibonacciMemoisation(n-2)
    
    return stockage[n]


if __name__ == "__main__":
    print(fibonacciMemoisation(40))

    print(fibonacci(40))