# """
# Task1. 
# User istenilen reqemli eded daxil edir. Hemin ededin polindrom olub olmadigini qaytaran funksiya yazin
# """

# def İsPolindrom(number):
#     reverse=0
#     copynumber=number
#     while number>0:
#         digit=number%10
#         reverse=reverse*10+digit
#         number=number//10
#     if(copynumber==reverse):
#         return "Polindromdur."
#     else:
#         return "Polindrom deyil"
    
# print(İsPolindrom(1221));

#---------------------------------------------------------------------------------------------------------
# """
# Task2
# Gondərilən ədədin ən böyük rəqəmini return edən funksiya yazın
# 7892
# cavab 9
# """

# def FindingTheLargestNumber(number):
#     maxNumber=number%10
#     number=number//10
#     while number>0:
#         lastNumber=number%10
#         if(lastNumber>maxNumber):
#             maxNumber=lastNumber
#         number=number//10
#     return maxNumber

# print(FindingTheLargestNumber(28345))

#---------------------------------------------------------------------------------------------------------
# """
# Task3
# Göndərilən ədədin ən kicik rəqəmini return edən funksiya yazın
# 7892
# cavab 2
# """

# def FindingTheSmallestNumber(number):
#     minNumber=number%10
#     number=number//10
#     while number>0:
#         lastNumber=number%10
#         if(lastNumber<minNumber):
#             minNumber=lastNumber
#         number=number//10
#     return minNumber

# print(FindingTheSmallestNumber(2083145))

#---------------------------------------------------------------------------------------------------------

# """
# Task4
# Gonderilen listin max ve minimum elementlerinin ededi ortasini tapan funksiya yazin
# (max ve min  methodlarindan istifade etmek olmaz)
# """


# def FindMaxElement(LiSt):
#     maxElement=LiSt[0]
#     for i in LiSt:
#         if(i>maxElement):
#             maxElement=i
#     return maxElement

# numOne=FindMaxElement([2,44,99,3,102,445])

# def FindMinElement(LiSt):
#     minElement=LiSt[0]
#     for i in LiSt:
#         if(i<minElement):
#             minElement=i
#     return minElement
    
# numTwo=FindMinElement([1,44,99,3,102,445])

# def FindAvarage(num1,num2):
#     return (num1+num2)//2

# print(FindAvarage(numOne,numTwo))