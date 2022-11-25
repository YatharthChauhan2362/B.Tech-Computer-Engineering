
//Print Variable
var cv1 = "Godzilla"
var cv2 = 1000.00

print("Value of \(cv1) is more than \(v2) millions")

// Variable Declare
var va = 1212
var vb:Float
vb = 12.12
print(vb)

//Optional Declare
var aa:Int?
var ss:String?

print(aa)
print(ss)

if ss != nil{

print ("string is not nill")
}
else{
print("String is nil")
}
print(aa)
print(ss)




//Force Unwrapping
var mainstr1:String? //nil

mainstr1 = "Yupp!!"
print(mainstr1)

//? Optional ! Unwrapp force
if mainstr1 != nil{
    print(mainstr1!)
}
else {
    print("It is nil")
}