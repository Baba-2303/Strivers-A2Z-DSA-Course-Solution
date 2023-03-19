#reverse an array using different techniques

# array1 = [1,3,5,7,9]
# array2 = []
# for i in array1:
#     array2.insert(0,i)
# print (array2)

array1 = [1,3,5,7,9]
for i in range(len(array1)):
    if(i<len(array1)-1-i):
        temp = array1[i]
        array1[i] = array1[len(array1)-1-i]
        array1[len(array1)-1-i] = temp
print(array1)