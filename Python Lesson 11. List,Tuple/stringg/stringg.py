# 1-  "Samsung S5,Samsung S6,Samsung S7,Samsung S8" elementlerne sahib bir list yaradin.

phones = "Samsung S5,Samsung S6,Samsung S7,Samsung S8"
phones_list = []
phone = ""

for p in phones:
    if p == ",":
        phones_list.append(phone)
        phone = ""
    else:
        phone += p

phones_list.append(phone) 
print(phones_list)

print("-----------------------------------------------------------------------------------")


#---------------------------------------------------------------------------------------------------------------------------------------------------
 
# 2-  Listin nece elementi var ?

count=0
 
for phone in phones_list:
    count+=1

 
print(count)

print("-----------------------------------------------------------------------------------")

 
#---------------------------------------------------------------------------------------------------------------------------------------------------
 
# 3-  Listenin ilk ve son elementi nedir ?
 
print("Listin ilk elementi:",phones_list[0])
print("Listin son elementi:",phones_list[-1])
 
print("-----------------------------------------------------------------------------------")


#---------------------------------------------------------------------------------------------------------------------------------------------------
 
# 4-  "Samsung S5" elementini "Samsung S9" ile deyishin.
 
phones_list[0]="Samsung S9"
print(phones_list)

print("-----------------------------------------------------------------------------------")

 
#---------------------------------------------------------------------------------------------------------------------------------------------------
 
# 5-  "Samsung S6" listin bir elementidir ?

isCheck=False
for phone in phones_list:
    if (phone=="Samsung S6"):
        isCheck=True


if(isCheck==True):
    print("Beli elementidir.")
else:
    print("Xeyr elementi deyil.")
    
print("-----------------------------------------------------------------------------------")

#---------------------------------------------------------------------------------------------------------------------------------------------------
 
# 6-  Listin -3 indeksindeki deyeri nedir ?
 
print(phones_list[2])    

print("-----------------------------------------------------------------------------------")

 
#---------------------------------------------------------------------------------------------------------------------------------------------------
 
# 7-  Listin ilk 2 dene elementini alın.
 
phones_list2=[]
phones_list2.append(phones_list[0])
phones_list2.append(phones_list[1])
print(phones_list2)

print("-----------------------------------------------------------------------------------")


#ve ya 

for i in range(2):
    print(phones_list[i])
    
print("-----------------------------------------------------------------------------------")

 
#---------------------------------------------------------------------------------------------------------------------------------------------------
 
# 8-  Listin son 2 elementinin yerine "Samsung S9" ve "Samsung S10" deyerleri ile evez edin.

print(phones_list)

phones_list[count-2]="Samsung S9"
phones_list[count-1]="Samsung S10"

print(phones_list)

print("-----------------------------------------------------------------------------------")

 
#--------------------------------------------------------------------------------------------------------------------------------------------------- 
 
# 9-  Listin üzerine "IPhone X" ve "IPhone XR" deyerlerini elave edin.
 
phones_list.append("Iphone X")
phones_list.append("Iphone XR")
print(phones_list)
 
#---------------------------------------------------------------------------------------------------------------------------------------------------
 
# 10- Listenin son elementini silin.
count=0
 
for phone in phones_list:
    count+=1
 
phones_list3=[]
for i in range(count):
    if(i!=count-1):
        phones_list3.append(phones_list[i])
print(phones_list3)

print("----------------------------------------------------")


#---------------------------------------------------------------------------------------------------------------------------------------------------
 
# 11- Listin elementlerni tersden yazdırın.

count=0
 
for phone in phones_list:
    count+=1

for i in range(count-1,-1,-1):
    print(phones_list[i])
    
print("----------------------------------------------------")

#---------------------------------------------------------------------------------------------------------------------------------------------------
# 12- Listin elementlerni ekrana yazdırın.
 
for phone in phones_list:
    print(phone)
    
print("----------------------------------------------------")


#---------------------------------------------------------------------------------------------------------------------------------------------------

