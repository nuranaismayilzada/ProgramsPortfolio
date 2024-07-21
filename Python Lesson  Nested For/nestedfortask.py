# for i in range(10):
#     for k in range(10):
#         print(f"{i}{k}",end=" ")
#     print()




#---------------------------------------------------------------------------------------------

#Task1 

# size = 30
# for i in range(size):
#     for k in range(size):
#         if(i==0 or k==0 or i==size-1 or k==size-1):
#             print(f"*",end=" ")
#         else:
#             print(end="  ")
#     print()


#---------------------------------------------------------------------------------------------



#Task2


# size = 21
# for i in range(size):
#     for k in range(size):
#         if(i==0 or k==0 or i==size-1 or k==size-1 or k==size//2 or i==size//2):
#             print(f"*",end=" ")
#         else:
#             print(end="  ")
#     print()



#---------------------------------------------------------------------------------------------
    
#Task4

# size = 21
# inner_size = 6

# for i in range(size):
#     for k in range(size):
#         if (
#             i == 0 or k == 0 or i == size - 1 or k == size - 1 or  
#             (i < inner_size and (k == 0 or k == inner_size - 1 or k == size - inner_size or k == size - 1)) or 
#             (i == 0 and (k < inner_size or k >= size - inner_size)) or  
#             (i == inner_size - 1 and (k < inner_size or k >= size - inner_size)) or 
#             (i >= size - inner_size and (k == 0 or k == inner_size - 1 or k == size - inner_size or k == size - 1)) or  # Alttaki iki küçük karelerin kenarları
#             (i == size - 1 and (k < inner_size or k >= size - inner_size)) or 
#             (i == size - inner_size and (k < inner_size or k >= size - inner_size)) 
#         ):
#             print("*", end=" ")
#         else:
#             print(" ", end=" ")
#     print()


#---------------------------------------------------------------------------------------------


#Task5

# size = 21
# for i in range(size):
#     for k in range(size):
#         if(i==0 or k==0 or i==size-1 or k==size-1 or i==k or i+k==size-1):
#             print(f"*",end=" ")
#         else:
#             print(end="  ")
#     print()


#---------------------------------------------------------------------------------------------

