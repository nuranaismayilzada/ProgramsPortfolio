import json

users_dict = {
    "Lala": {"password": "lala1234", "balance": 700, "history_id": []},
    "MehemmedAli": {"password": "Ali123", "balance": 1900, "history_id": []}
}

car_galery_dict = {
    "666FLK8": {"model": "Cadillac", "year": 1998, "count": 5, "price": 12000},
    "65HD7GD3": {"model": "Hyundai", "year": 2023, "count": 2, "price": 1700},
    "65HD7GD4": {"model": "BMW", "year": 2023, "count": 4, "price": 2100}
}

def WriteToFile():
    global car_galery_dict
    with open('convert.txt', 'w') as convert_file:
        convert_file.write(json.dumps(car_galery_dict))

def ReadFromFile():
    global car_galery_dict
    try:
        car_galery_dict = json.load(open('convert.txt', 'r'))
    except FileNotFoundError:
        WriteToFile()

try:
    ReadFromFile()
except:
    WriteToFile()

def AdminPanel():
    def Show_All_Cars():
        for fin in car_galery_dict:
            car = car_galery_dict[fin]
            print(f"___________________{fin}____________________")
            print("Model:", car["model"])
            print("Year:", car["year"])
            print("Count:", car["count"])
            print("Price:", car["price"])
            print("\n____________________________________________________________________\n")

    def Search_Car(fin):
        if fin in car_galery_dict:
            car = car_galery_dict[fin]
            print(f"___________________{fin}____________________")
            print("Model:", car["model"])
            print("Year:", car["year"])
            print("Count:", car["count"])
            print("Price:", car["price"])
        else:
            print("Not found")

    def Add_Car():
        fin = input("Enter fin: ")
        if fin in car_galery_dict:
            print("This ID is already used!")
        else:
            car_dict = {}
            car_dict["model"] = input("Enter model: ")
            car_dict["year"] = int(input("Enter year: "))
            car_dict["count"] = int(input("Enter count: "))
            car_dict["price"] = float(input("Enter price: "))
            car_galery_dict[fin] = car_dict
            WriteToFile()
            print("Car added...")

    def Update_Car():
        fin = input("Enter fin: ")
        if fin in car_galery_dict:
            model = input("Enter model: ")
            year = input("Enter year: ")
            count = input("Enter count: ")
            price = input("Enter price: ")
            if model != "":
                car_galery_dict[fin]["model"] = model
            if count != "":
                car_galery_dict[fin]["count"] = int(count)
            if price != "":
                car_galery_dict[fin]["price"] = float(price)
            if year != "":
                car_galery_dict[fin]["year"] = int(year)
            WriteToFile()
            print("Updated...")
        else:
            print("Car not found!!!")

    def Delete_Car():
        fin = input("Enter fin: ")
        if fin in car_galery_dict:
            del car_galery_dict[fin]
            WriteToFile()
            print("Deleted....")
        else:
            print("Car not found!!!")

    choice = input("""
        1. Show Cars
        2. Search Car
        3. Add Car
        4. Update Car
        5. Delete Car
        6. Exit         
        Choose: """)
    
    if choice == "1":
        Show_All_Cars()
    elif choice == "2":
        fin = input("Enter fin: ")
        Search_Car(fin)
    elif choice == "3":
        Add_Car()
    elif choice == "4":
        Update_Car()
    elif choice == "5":
        Delete_Car()
    elif choice == "6":
        return
    else:
        print("Wrong input")
    
    AdminPanel()

def UserPanel(username):
    def Show_All_Cars():
        for fin in car_galery_dict:
            car = car_galery_dict[fin]
            if car["count"] > 0: 
                print(f"___________________{fin}____________________")
                print("Model:", car["model"])
                print("Year:", car["year"])
                print("Count:", car["count"])
                print("Price:", car["price"])
                print("\n____________________________________________________________________\n")

    def Search_Car(fin):
        if fin in car_galery_dict:
            car = car_galery_dict[fin]
            if car["count"] > 0: 
                print(f"___________________{fin}____________________")
                print("Model:", car["model"])
                print("Year:", car["year"])
                print("Count:", car["count"])
                print("Price:", car["price"])
            else:
                print("This car is out of stock.")
        else:
            print("Car not found")

    def Buy_Car():
        fin = input("Enter fin : ")
        if fin in car_galery_dict:
            car = car_galery_dict[fin]
            if car["count"] > 0:
                quantity = int(input(f"How many {car['model']} do you want to buy? "))
                if quantity <= car["count"]:
                    total_price = quantity * car["price"]
                    if users_dict[username]["balance"] >= total_price:
                        users_dict[username]["balance"] -= total_price
                        car_galery_dict[fin]["count"] -= quantity
                        WriteToFile()
                        print(f"You have successfully bought {quantity} {car['model']}(s) for ${total_price}.")
                        print(f"Remaining balance: ${users_dict[username]['balance']}")
                    else:
                        print("Insufficient balance to complete the purchase.")
                else:
                    print("Not enough cars in stock to fulfill your order.")
            else:
                print("This car is out of stock.")
        else:
            print("Car not found")

    def Increase_Balance():
        amount = float(input("Enter the amount you want to add to your balance: "))
        if amount > 0:
            users_dict[username]["balance"] += amount
            print(f"Your new balance is: ${users_dict[username]['balance']}")
        else:
            print("Invalid amount entered.")

    choice = input("""
        1. Show All Cars
        2. Search Car
        3. Buy Car
        4. Increase Balance
        5. Exit
        Choose: """)
    
    if choice == "1":
        Show_All_Cars()
    elif choice == "2":
        fin = input("Enter FIN: ")
        Search_Car(fin)
    elif choice == "3":
        Buy_Car()
    elif choice == "4":
        Increase_Balance()
    elif choice == "5":
        return
    else:
        print("Wrong input")
    
    UserPanel(username) 

def Login():
    username = input("Username: ")
    password = input("Password: ")
    if username == "admin" and password == "admin":
        AdminPanel()
    elif username in users_dict and password == users_dict[username]["password"]:
        UserPanel(username)
    else:
        print("Wrong username or password")

Login()
