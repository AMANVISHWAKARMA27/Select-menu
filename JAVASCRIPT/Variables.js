let a = 67;//Both the methods are correct.
var b = 30;//var was used in older versions but let is used in new versons of js
console.log(a);
console.log(b);
a = "Harry";//typecasting during runtime is possible
console.log(a);

//var was used before ES6 and after that let was introduced. Const value can not be changed between the code.
//let and var are used to declare variables.
//Variables declared by var can be updated as well as redeclared at any instance of time.
//variables declared by const can neither be updated nor redeclared at any any instance.
//Variables declared by let cannot be redeclared but can be updated at any instance.

var c = 45;
let e = "Harry";
const d = 41;

{
    let e = "Aman";
    console.log(e);
}
console.log(e);
