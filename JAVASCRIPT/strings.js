let name = "Aman";
console.log(name.length);
let friend = 'Ansh';
console.log(friend.length);

//Template Lateral
let boy1 = "Pramod";
let boy2 = "Nikhil";

//Nikhil is a friend of Pramod.
let sentence = `${boy2} is a friend of ${boy1}.`;
console.log(sentence);

//escape sequence characters
let a = 'Aman\'s books';
console.log(a);

//built-in functions

let names = "Aman";
console.log(names.toUpperCase());
console.log(names.toLowerCase());
console.log(names.slice(1,3));
console.log(names.replace("Aman","Rishi"));
console.log(names.concat("is a friend of",friend,"OK"));
console.log(names.trim());

