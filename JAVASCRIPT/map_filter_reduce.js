// //Map: It makes new array of each element of an array.
// let arr =[45,23,21];
// let a = arr.map((value,index,array)=>{
//     console.log(value, index, array)
//     return value+1;
// })
// // console.log(a);//printing an array consisting the elements after adding 1.

// //Filter: We can print the array of elements by using filter. It prints only those elements from some other array that atisfy a particular defined condition.
// let arr2 = [45, 23, 21, 0, 3, 5];
// let a2 = arr2.filter((a)=>{
//     return a<10;
// })
// // console.log(a2);

// //Array reduce method
// let arr3 = [1,2,3,4,5,2,1];
// let newarr3 = arr3.reduce((h1,h2)=>{
//     return h1+h2;
// })
// console.log(newarr3);
//-----------------------------------//

//Map 
// const arr = [1,2,3,4,5];

// const output = arr.map((x)=>{
//     return x*2;
// });

// console.log(output);

// const binary = arr.map((x)=>{
//     return x.toString(2);
// })

// console.log(binary);

//filter function

// const arr = [1,2,3,4,5];

// const output = arr.filter ((x) => {
//     return x>3;
// });

// console.log(output);

// reduce function

const arr = [1,2,3,4,5];
const output = arr.reduce((acc, curr) =>{
    acc = acc + curr;
    return acc;
})

console.log(output);