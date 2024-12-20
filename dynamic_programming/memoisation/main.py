from function import fibonacci, fibonacciMemoisation
import time 

number = int(input("input a number : "))

start_time = time.perf_counter()
print("value : ", fibonacciMemoisation(number))
end_time  =  time.perf_counter()
print(f"Time of execution : {end_time - start_time:.6f} sec")


start_time = time.perf_counter()
print("value : ", fibonacci(number))
end_time  =  time.perf_counter()
print(f"Time of execution : {end_time - start_time:.6f} sec")

