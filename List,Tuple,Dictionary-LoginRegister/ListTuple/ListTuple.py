# Task1
# """
# users_dict={"nurane":"nurane123","Stepguest":"Guest112","narmin":"nurane123"}

# user username ve password daxil edir. Eger databazada bele bir user varsa ve 
# passwordda duzdurse "Welcome" sozu cap olunsun eks halda sehv nededir desin

# """



# users_dict={"nurane":"nurane123",
#             "Stepguest":"Guest112",
#             "narmin":"nurane123",
#             "salam":"salam123"
#             }


# isCheckUsername=False
# isCheckPassword=False


# username=input("Username daxil edin:")
# for user in users_dict:
#     if(user==username):
#         isCheckUsername=True
#         break
#     #user =  keyleri cixarir
#     #users_dict[user]= value cixarir
        

# if isCheckUsername:
#     password=input("Password daxil edin:")
#     for pas in users_dict:
#         if(pas==username and password==users_dict[pas]):
#             isCheckPassword=True
#             break
#     if isCheckPassword:
#         print("Welcome")
#     else:
#         print("Password yalnisdir")
# else:
#     print("Bele bir istifadeci tapilmadi")
        

#---------------------------------------------------------------------------------------------------


# Task2
# """
# Registrasiya
# user username ve password daxil edir. Eger databazada bele bir user varsa tezeden daxil etmelidir. 
# Cunki bele bir user artiq var.Yox eger yoxdursa databazaya elave edilsin
# """



# users_dict={"nurane":"nurane123",
#             "Stepguest":"Guest112",
#             "narmin":"nurane123",
#             "salam":"salam123"
#             }

# username=input("Username daxil edin:")

# isCheckUsername=False
# isCheckPassword=False

# for user in users_dict:
#     if(user==username):
#         isCheckUsername=True
#         break
        
# if isCheckUsername:
#     password=input("Password daxil edin:")
#     for pas in users_dict:
#         if(pas==username and password==users_dict[pas]):
#             isCheckPassword=True
#             break
#     if isCheckPassword:
#         print("Welcome")
#     else:
#         print("Password yalnisdir")
# else:
#     print("Bele bir istifadeci tapilmadi.")
#     newpassword=input("Yeni password yazin:")
#     users_dict[username]=newpassword
    
# print(users_dict)




#ve ya asagidaki kimi yazmaq olar



# users_dict={"nurane":"nurane123",
#             "Stepguest":"Guest112",
#             "narmin":"nurane123",
#             "salam":"salam123"
#             }

# username=input("Username daxil edin:")

# isCheckUsername=False
# isCheckPassword=False

# for user in users_dict:
#     if(user==username):
#         isCheckUsername=True
#         break
        
# if isCheckUsername==True:
#     username=input("Bele bir istifadeci adi artiq movcuddur.Yenisini daxil edin:")
#     newpassword=input("Password daxil edin:")
#     users_dict[username]=newpassword
# else:
#     newpassword=input("Password daxil edin:")
#     users_dict[username]=newpassword
    
# print(users_dict)
    
    
        
    
    
    


   