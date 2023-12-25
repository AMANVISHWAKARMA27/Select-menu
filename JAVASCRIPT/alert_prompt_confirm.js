alert("Enter the value of a");
let a = prompt("Enter a here");
a = Number.parseInt(a);
alert("You entered a of type "+ (typeof a));
let write = confirm("Do you want to write it to the page?");
document.write(a);