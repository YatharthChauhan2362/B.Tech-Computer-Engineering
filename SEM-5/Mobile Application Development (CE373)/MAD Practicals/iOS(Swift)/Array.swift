//Array
var myarr = [Int]() //() alloc init //Empty array

myarr = [12, 12, 12, 12]
print(myarr)

//Array
let age = 22
let name = "Yatharth"

let s1 = name + " is " + String(age) //Int to String
print(s1)

let s2 = "\(name) is \(String(age))"
print(s2)

//initialize an array
let stars: [String] = ["Hey", "Hello"]
print(stars) 
print(stars[1]) 
print(stars[0]) 

//Dictionary // Key and value

let ages = ["Yogesh": 22, "Dabhi": 22]
print(ages["Yogesh"]!)

if let arrayages = ages["Dabhi"]
{
print("Dabhi is \(arrayages) years old")
}

   





