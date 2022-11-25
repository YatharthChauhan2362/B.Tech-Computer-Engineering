//Loops and collections
let names = ["A", "B", "C", "D"]

for name in names{
    print("Name: \(name)")
}

// for i in 1...10{
//     if i % 3 == 0{
//         print(i)
//     }
// }

let three = stride(from: 3, to: 10, by: 3)
for n in three{
    print(n)
}

//indices 
let name2 = ["X", "Y", "Z", "W"]
for nameindex in name2.indices
{
    if(nameindex < 3)
    {
        print(name2[nameindex])
    }
}

//enumerated()
let name3 = ["P", "Q", "R", "S"]
for (index, name) in name3.enumerated()
{
    print("\(index): \(name)")
}

