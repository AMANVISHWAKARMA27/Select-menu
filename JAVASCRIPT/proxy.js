// let details = {
//     name: "Raj",
//     course: "DSA",
// }
// const prox = new Proxy(details, {})

// console.log(prox.name);
// console.log(prox.course);

//------------------------------------------------------------------//

// let details = {
//     name:"Aman",
//     course:"IT",
// };

// const prox = new Proxy( details, {
//     get: () =>{
//         return "Good Boy."
//     }
// });

// console.log(prox.name);
// console.log(prox.course);

//-------------------------------------------------------------------//

let details = {
    name : "Aman",
    course: "maths",
};

const prox = new Proxy(details, {
    get: (tar, prop) => {
        if ( prop == "course") {
            return undefined;
        }
        return tar[prop];
    }
});

console.log(prox.name);
console.log(prox.course);
