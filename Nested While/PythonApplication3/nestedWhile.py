# 1. Klaviaturadan 10 tam ədəd daxil edilir, mənfi ədədlərin
# faizini, müsbət ədədlərin faizini və 0-ların faizini tapın.


#while ile

# menfiEdedlerinSayi=0
# musbetEdedlerinSayi=0
# sifirlarinSayi=0
# count=1
# numberCount=10

# while count<=numberCount:
#     number=int(input(f"Eded {count}:"))
#     if (number>0):
#         musbetEdedlerinSayi+=1
#     elif (number<0):
#         menfiEdedlerinSayi+=1
#     elif(number==0):
#         sifirlarinSayi+=1
#     else:
#         print("Duzgun daxil edilmeyib !")
        
#     count+=1
    
# musbetEdedlerinFaizi=(musbetEdedlerinSayi*100)//numberCount
# menfiEdedlerinFaizi=(menfiEdedlerinSayi*100)//numberCount
# sifirlarinFaizi=(sifirlarinSayi*100)//numberCount

# print("Musbet ededlerin sayinin faizi:",musbetEdedlerinFaizi, "Menfi ededlerin sayinin faizi:",menfiEdedlerinFaizi,
#       "Sifirlarin sayinin faizi:",sifirlarinFaizi)



#for ile

# menfiEdedlerinSayi=0
# musbetEdedlerinSayi=0
# sifirlarinSayi=0
# count=1
# numberCount=10
# for i in range(10):
#     number=int(input(f"Eded {count}:"))
#     if (number>0):
#         musbetEdedlerinSayi+=1
#     elif (number<0):
#         menfiEdedlerinSayi+=1
#     elif(number==0):
#         sifirlarinSayi+=1
#     else:
#         print("Duzgun daxil edilmeyib !")
        
#     count+=1
    
# musbetEdedlerinFaizi=(musbetEdedlerinSayi*100)//numberCount
# menfiEdedlerinFaizi=(menfiEdedlerinSayi*100)//numberCount
# sifirlarinFaizi=(sifirlarinSayi*100)//numberCount

# print("Musbet ededlerin sayinin faizi:",musbetEdedlerinFaizi, "Menfi ededlerin sayinin faizi:",menfiEdedlerinFaizi,
#       "Sifirlarin sayinin faizi:",sifirlarinFaizi)

#-------------------------------------------------------------------------------------------------------


# 2. Klaviaturadan 10 tam ədəd daxil edilir. Cütlərin və
# təklərin neçə faiz olduğunu hesablayan proqram yazın



#while ile 

# cutlerinSayi=0
# teklerinSayi=0
# count=1
# numbercount=10

# while count<=numbercount:
#     number=int(input(f"eded {count}:"))
#     if (number%2==0):
#         cutlerinSayi+=1
#     elif (number%2!=0):
#         teklerinSayi+=1
#     else:
#         print("duzgun daxil edilmeyib !")
#     count+=1
    
# cutlerinSayininFaizi=(cutlerinSayi*100)//numbercount
# teklerinSayininFaizi=(teklerinSayi*100)//numbercount

# print("Cut ededlerin sayinin faizi:",cutlerinSayininFaizi, "Tek ededlerin  sayinin faizi:",teklerinSayininFaizi)




#for ile


# cutlerinSayi=0
# teklerinSayi=0
# count=1
# numbercount=10

# for i in range(10):
#     number=int(input(f"eded {count}:"))
#     if (number%2==0):
#         cutlerinSayi+=1
#     elif (number%2!=0):
#         teklerinSayi+=1
#     else:
#         print("duzgun daxil edilmeyib !")
#     count+=1
    
# cutlerinSayininFaizi=(cutlerinSayi*100)//numbercount
# teklerinSayininFaizi=(teklerinSayi*100)//numbercount

# print("Cut ededlerin sayinin faizi:",cutlerinSayininFaizi, "Tek ededlerin  sayinin faizi:",teklerinSayininFaizi)



#-------------------------------------------------------------------------------------------------------



# Bonus tapsiriq (while ile): Daxil edilmiş ədəddə iki ard arda rəqəmin olub olmamasını
# yoxlayan proqram yazın.
# misal: 17885


# number=int(input("Eded daxil edin:"))
# currentDigit=number%10  
# number=number//10
# check=False
# while number>0:
#     digit=number%10 
#     if(currentDigit==digit):
#         check=True
#         break;
#     currentDigit=digit
#     number=number//10   

# if(check==True):
#     print("Daxil edilmis ededde iki ard-arda reqem var")
# else:
#     print("Daxil edilmis ededde iki ard-arda reqem yoxdur")
