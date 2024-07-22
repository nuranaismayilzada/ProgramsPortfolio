clothes_dict={1:{"name":"t-shirt","price":19.99,"count":20},
            2:{"name":"jean","price":59.99,"count":15},
            3:{"name":"shoes","price":79.99,"count":10}
            }


def Create_Clothes(ID,name,price,count):
    global clothes_dict
    clothes_dict[ID] = {"name": name, "price": price, "count": count}

    
def Search(ID):
    global clothes_dict
    for i in clothes_dict:
        if(ID==i):
            return True
    return False
        
def Create():    
    ID = int(input("Enter id:"))
    if Search(ID):
        name = input("Enter new clothes name:")
        price = float(input("Enter new price:"))
        count = int(input("Enter new count:"))
        Update(ID, name, price, count)
    else:
        name = input("Enter clothes name:")
        price = float(input("Enter price:"))
        count = int(input("Enter count:"))
        Create_Clothes(ID, name, price, count)  
        
        
def Show_All():
    global clothes_dict
    for i in clothes_dict:
        print(f"______________________{i}______________________")
        Show(i)
    print("____________________________________________________________________________________________")
       
def Show(ID):
     print() 
     print(f"Name: ",clothes_dict[ID]["name"])
     print(f"Price: ",clothes_dict[ID]["price"],"azn")
     print(f"Count: ",clothes_dict[ID]["count"])
     print()
    
def Update(ID,name,price,count):
    global clothes_dict
    if(Search(ID)):
        clothes_dict[ID]['name'] = name
        clothes_dict[ID]['price'] = price
        clothes_dict[ID]['count'] = count
        print("Paltar Update olundu.")
    else:
        print("Paltar tapilmadi.")
        

def Delete(ID):
    global clothes_dict
    if Search(ID):
        del clothes_dict[ID]
        print(f"Clothes with ID {ID} deleted successfully.")
    else:
        print("Clothes not found.")



while True:
    choice=input("""
    1-Add Clothes
    2-Show All Clothes
    3-Update Clothes
    4-Delete Clothes
    5-Search
    6-Create clothes             
    7-Exit
    Choose:
""")
    
    if(choice=="1"):
        ID=int(input("Enter id:"))
        name=input("Enter clothes name:")
        price=float(input("Enter price:"))
        count=int(input("Enter count:"))
        Create_Clothes(ID,name,price,count)
    elif(choice=="2"):
        Show_All()
    elif(choice=="3"):
        ID=int(input("Enter id:"))
        name=input("Enter clothes name:")
        price=float(input("Enter price:"))
        count=int(input("Enter count:"))
        Update(ID,name,price,count)
    elif(choice=="4"):
        ID=int(input("Enter id:"))
        Delete(ID)
    elif(choice=="5"):
        ID=int(input("Enter id:"))
        if(Search(ID)):
            Show(ID)
        else:
            print("Not found!")
    elif(choice=="6"):
        Create()
    elif(choice=="7"):
        break
    else:
        print("Wrong choise !!!!")
    
    



