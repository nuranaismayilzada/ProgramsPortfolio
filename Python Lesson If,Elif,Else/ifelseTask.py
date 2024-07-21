#-------------------------------------------------------------------------------------------

# 1. İstifadəçi iki ədəd daxil edir. ( X və Y ) Əgər X Y-ə qalıqsız bölünürsə
# ekrana Yes çıxır, əks halda No.


# x=int(input("eded daxil edin:"))
# y=int(input("eded daxil edin:"))

# if (x%y==0):
#     print("Yes")
# else:
#     print("No")

#-------------------------------------------------------------------------------------------


# 2. İstifadəçi ədəd daxil edir. Onun 3-ə, 5-ə, 7-ə bölünüb bölünməməsini
# (qalıqsız) yoxlayın. (Ayrı-ayrı)

# number=int(input("eded daxil edin:"))

# if (number%3==0):
#     print("Eded 3-e qaliqsiz bolunur.")
# else:
#     print("Eded 3-e qaliqsiz bolunmur.")
# if (number%5==0):
#     print("Eded 5-e qaliqsiz bolunur.")
# else:
#     print("Eded 5-e qaliqsiz bolunmur.")
# if (number%7==0):
#     print("Eded 7-e qaliqsiz bolunur.")
# else:
#     print("Eded 7-e qaliqsiz bolunmur.")

#-------------------------------------------------------------------------------------------

# 3. Ədədin modulunu hesablayan program yazın

# number=int(input("eded daxil edin:"))
# if(number>0):
#     print("ededin modulu:",number)
# elif(number<0):
#     print("ededin modulu:",number*(-1))
# else:
#     print("eded 0-a beraberdir.")

#-------------------------------------------------------------------------------------------

# 4. Maximum 4 rəqəmli ədəd daxil edilir. Ədədin neçə rəqəmdən ibarət
# olduğunu hesablayan program yazın.

# number=int(input("Eded daxil edin:"))
# if(number>0 and number<10):
#     print("Eded bir reqemlidir.")
# elif(number>9 and number<100):
#     print("Eded iki reqemlidir.")
# elif(number>99 and number<1000):
#     print("Eded uc reqemlidir.")
# elif(number>999 and number<10000):
#     print("Eded dord reqemlidir.")
# else:
#     print("Eded 5 reqemli ve daha boyuk reqemlidir.")

#-------------------------------------------------------------------------------------------

# 5. 5 rəqəmli ədəd daxil edilir. Onun ploindrom olub olmamasını təyin edən
# program yazın.

# number=int(input("5 reqemli eded daxil edin:"))
# firstNumber=int(number/10000)
# secondNumber=int((number/1000)%10)
# thirdNumber=int((number/100)%10)
# fourthNumber=int((number/10)%10)
# lastNumber=int(number%10)
# isPolindrom=((((lastNumber*10+fourthNumber)*10+thirdNumber)*10+secondNumber)*10+firstNumber)
# if(number==isPolindrom):
#     print("Eded polindromdur.")
# else:
#     print("Eded polindrom deyil.")

#-------------------------------------------------------------------------------------------






