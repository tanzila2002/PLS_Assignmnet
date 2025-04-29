import ctypes

size = 5
ArrayType = ctypes.c_int * size  
heap_arr = ArrayType()  

for i in range(size):
    heap_arr[i] = i + 1 

for i in heap_arr:
    print(i, end=' ')  
