// let marks_class_12 = [91, 82, 63, 84, false, "Not Present"];
// console.log(marks_class_12)
// console.log(marks_class_12[0])
// console.log(marks_class_12[1])
// console.log(marks_class_12[2])
// console.log(marks_class_12[3])
// console.log(marks_class_12[4])
// console.log(marks_class_12[5])
// console.log(marks_class_12[6])
// console.log(marks_class_12.length)
// console.log(typeof marks_class_12)

// //Methods of array
// let num = [1, 2, 3, 34, 4];
// let b = num.toString();//b is now string
// console.log(b);

// let c = num.join("_");// it will replace the commas in the array with the string given.
// console.log(c, typeof(c));

// let d = num.pop()//pop returns the popped element
// console.log(num,d);

// let del = [1, 2, 3, 4, 5, 6, 7];
// delete num[0];//Will remove an element from the start
// console.log(num, 1);

// let a1 = [1,2,3];
// let a2 = [11,12,13,14];
// let a3 = a1.concat(a2);// Will concatinate the two mentioned array.
// console.log(a3);

// arr = [2,3,4,5,6,7];
// let newArray = arr.map((val,index)=>{
//     return {key: index+2, value:val*val};
// })

// console.log(newArray);
// console.log(typeof(newArray));

// //filter method

// function isPositive(value) {
//     return value > 0;
// }

// function func() {
//     let filtered =[112,52,0,-1,944].filter(isPositive);
//     console.log(filtered);
// }

// func();

//foreach() Method

const items = [1,29,47];
const copy = [];

items.forEach( item => {
    copy.push(item*item);
})

console.log(copy);