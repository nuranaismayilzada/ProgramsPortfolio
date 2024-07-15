# 1. Göndərilmiş listə cüt ədələrin cəmini return edən funksiya yazın.

# def SumOfEvenNumbers(numbersList):
#     Sum=0
#     for i in numbersList:
#         if i%2==0:
#             Sum+=i
#     return f"Sum:{Sum}"

# print(SumOfEvenNumbers([2,4,6,10,3,12]))


#-------------------------------------------------------------------------------------------

# 2. Göndərilmiş listin indekslərinin cəmini return edən funksiya yazın.

# def SumOfIndices(numbersList):
#     Sum=0
#     for i in range (len(numbersList)):
#         Sum+=i
#     return Sum;
        
# print(SumOfIndices([2,4,6,10,3,12]))

#-------------------------------------------------------------------------------------------

# 3. Göndərilmiş listə indeksi cüt olan elementlərin cəminin tək olan
#  elementlərin ədədi ortasını tapan funksiya yazın

# def SumNumbersIndicesOdd(numbersList):
#     Sum=0
#     for i in range (len(numbersList)):
#             if(i%2==0):
#                 Sum+=numbersList[i]
#     return Sum

# a=SumNumbersIndicesOdd([2,4,6,10,3,12])
# print(a)

# def SumNumbersIndicesSingle(numbersList):
#     Sum=0
#     for i in range (len(numbersList)):
#             if(i%2!=0):
#                 Sum+=numbersList[i]
#     return Sum

# b=SumNumbersIndicesSingle([2,4,6,10,3,13])
# print(b)

# def Avarage(num1,num2):
#     return (num1+num2)//2

# print(Avarage(a,b))

#-------------------------------------------------------------------------------------------

# 4. Göndərilmiş ədədin faktoriyalını  return edən funksiya yazın(3!=1x2x3)

# def FindFactorial(number):
#     factoriyal=1
#     while(number>0):
#         factoriyal*=number
#         number-=1
#     return factoriyal

# print(FindFactorial(6))

#-------------------------------------------------------------------------------------------

# 5. Gonderilmis ededin polindrom olmasini yoxlayan funksiya yazin. (misal:1235321 bu eded polindromdur.)


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

#-------------------------------------------------------------------------------------------

# 6. Gonderilmis listdeki tipi float olan deyerlerin cemini,tipe int olan ededlerin
#  ise hasilini return eden funksiya yazin

# def CheckFunction(numbers):
#     multiply=1
#     sum=0
#     for i in numbers:
#         if(type(i)==int):
#             multiply*=i
#         elif(type(i)==float):
#             sum+=i
#     return f"Multipyly:{multiply} Sum:{sum}"
            
       
# print(CheckFunction([2,4,3,2,2.8,4,3.2]))

#-------------------------------------------------------------------------------------------

# 7. Gonderilmis eded uzunlugunda list yaradib listin icini random -5,5 arasinda 
# ededle doldurub sonda listi return eden funksiya yazin
# import random

# def RandomFunction(number):
#     my_list = []
#     for i in range(number):
#         my_list.append(random.randint(-5, 5))
#     return my_list

# print(RandomFunction(5))

#-------------------------------------------------------------------------------------------

# 8.Funksiya 2 arqument (deyer) , istifadecinin genderi ve dogum ilini bu deyerlere gore istifadeciye
# pensiya dusub dusmediyini return eden funksiya yazin.

# def TestFunction(gender,il):
#     retaireAge=2024-il
#     if(gender=="qadin" and retaireAge>=60):
#         return "Pensiyaya dusur"
#     elif(gender=="qadin" and retaireAge<=60):
#         return "Pensiyaya dusmur"
#     elif(gender=="kisi" and retaireAge>=65):
#         return "Pensiyaya dusur"
#     elif(gender=="kisi" and retaireAge<=65):
#         return "Pensiyaya dusmur"
    

# print(TestFunction("qadin",1956))   

#-------------------------------------------------------------------------------------------

# 9.Istifadeci istediyi qeder deyer gondere biler.Gonderilmis bu deyerlerden cut olanlarin tek
# olanlara nisbetini return eden funksiya yazin. (Qeyd: *args-istifade edeceksiniz.)

# def cut_tek_nisbeti(*args):
#     cut_sayi = 0
#     tek_sayi = 0
    
#     for arg in args:
#         if arg % 2 == 0:
#             cut_sayi += 1
#         else:
#             tek_sayi += 1
    
#     if tek_sayi == 0:
#         return "Tek deyer yoxdur, nisbət hesablana bilmir."
    
#     if cut_sayi == 0:
#         return "Cut deyer yoxdur, nisbət hesablana bilmir."

#     return cut_sayi / tek_sayi

# print(cut_tek_nisbeti(1, 2, 3, 4, 5, 6)) 
# print(cut_tek_nisbeti(2, 4, 6))         
# print(cut_tek_nisbeti(1, 3, 5))          

#-------------------------------------------------------------------------------------------

# 10. Ele bir funksiya yazinki, funksiyaya gonderilen listdeki deyerlerden,unique olanlari qaytarsin.
# Yeni tekrarlanan element olmasin 
# Meselen sampleList: [1,2,3,3,3,3,4,5,7,9,9]
# uniqueList:[1,2,3,4,5,7,9]

# def unique_elements(sampleList):
#     unique_list = []
    
#     for i in range(len(sampleList)):
#         is_unique = True
#         for j in range(i):
#             if sampleList[i] == sampleList[j]:
#                 is_unique = False
#                 break
#         if is_unique:
#             unique_list.append(sampleList[i])
    
#     return unique_list

# sampleList = [1, 2, 3, 3, 3, 3, 4, 5, 7, 9, 9]
# uniqueList = unique_elements(sampleList)
# print(uniqueList)  

#-------------------------------------------------------------------------------------------

# 11. Ele bir funksiya yazin ki ona gonderilen setirde(string) nece boyuk herif oldugunu qaytarsin,
# eger boyuk herf yoxdursa -1 qaytarsin.Eger -1 qaytaribsa istifadeciye mesaj vermek lazimdirki kicik herif yoxdur

# def count_uppercase_letters(s):
#     count = 0
#     for char in s:
#         if char.isupper():
#             count += 1
    
#     if count == 0:
#         print("Kicik herif yoxdur")
#         return -1
#     else:
#         return count

# input_string = input("Soz daxil edin:")
# result = count_uppercase_letters(input_string)
# if result != -1:
#     print(f"Setirdə {result} boyuk herif var.")
    
#-------------------------------------------------------------------------------------------

# 11. Ele bir funksiya yazin ki ona gonderilen setirde(string) nece boyuk herif oldugunu qaytarsin,
# eger boyuk herf yoxdursa -1 qaytarsin.Eger -1 qaytaribsa istifadeciye mesaj vermek lazimdirki kicik herif yoxdur    

# def count_uppercase_letters(s):
#     count = 0
#     for char in s:
#         if 'A' <= char <= 'Z':
#             count += 1
    
#     if count == 0:
#         print("Kicik herif yoxdur")
#         return -1
#     else:
#         return count

# input_string = input("Soz daxil edin:")
# result = count_uppercase_letters(input_string)
# if result != -1:
#     print(f"Setirdə {result} boyuk herif var.")


#-------------------------------------------------------------------------------------------