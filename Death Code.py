print("""Welcome to Death Code
        Here are the rules of using Death Code""")
print("""The human whose name is written in this code shall die.
         This code will not take effect unless the writer has the person's face in their mind when writing his/her name. Therefore, people sharing the same name will not be affected.
""")
print("If the cause of death is written within the next 40 seconds of writing the person's name, it will happen.")
print("If the cause of death is not specified, the person will simply die of a heart attack.")

print("After writing the cause of death, details of the death should be written in the next 6 minutes and 40 seconds.")
n=input("""name {  """)
c=input(""" cause of death >  """)
        
d=input("""details of the death >  """)  

if c=="":
    print(n,"will die from heart attack") 
    
elif d=="":
    print(n,"will die from",c)
elif d!="":
    print(n,"will die from",c,d)
elif n=="":
    print(" Death Code is aborted")

else:
    print("will die from heart attack")
