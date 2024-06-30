 # 1- ' Hello World ' xarakter siyahisinda baş ve sondaki boşluk xarakterlerini silin.

# text=' Hello World '
# copytext=""
# for i in range(len(text)):
#     if(i==0 or i==len(text)-1):
#         continue
#     else:
#         copytext+=text[i]
        
# print(copytext)

#---------------------------------------------------------------------------------------------------
  

# 2- 'course' xarakter siyahisinda bütün xarakterlerini kiçik herf edin.

# course = 'Our course is best in the World, STEP IT ACADEMY Azerbaijan'
# copycourse=''

# for i in range(len(course)):
#     if(96<(ord(course[i]))<123):
#         copycourse+=course[i]
#     elif (64<(ord(course[i]))<91):
#         copycourse+=(chr(ord(course[i])+32))
#     else:
#         copycourse+=course[i]
        
# print(copycourse)


#---------------------------------------------------------------------------------------------------

# 3- 'website' içinde nece dene "a" xarakteri var ?

# website = "http:/www.google.com"

# counter=0
# for i in range(len(website)):
#     if(website[i]=="a"):
#         counter+=1

# print(counter)

#---------------------------------------------------------------------------------------------------


# 4- 'Contents' ifadesini setirda 60 xarakter içine yerleşdirib sağ ve soluna * elave edin.
# text="Contents"
# copytext=""

# for i in range(60):
#     if(i==60//2):
#         copytext+=text
#     else:
#         copytext+="*"
        
    
# print(copytext)

#---------------------------------------------------------------------------------------------------

# 5- 'course' xarakter siyahisinda bütün boşluq xarakterlerini '-' ile evez edin.

# course = 'Our course is best in the World, STEP IT ACADEMY Azerbaijan'
# copytext=""

# for i in range(len(course)):
#     if(course[i]==" "):
#         copytext+="-"
#     else:
#         copytext+=course[i]

# print(copytext)

#---------------------------------------------------------------------------------------------------

# 6-'Hello World' xarakter siyahisinda 'World' ifadesini 'There' olarak  evez edin.

# text='Hello World'
# copyText=""
# i=0
# while i<len(text):
#     if text[i:i+5]=="World":
#         copyText+="There"
#         i+=5
#     else:
#         copyText+=text[i]
#         i+=1
        
# print(copyText)

#---------------------------------------------------------------------------------------------------
