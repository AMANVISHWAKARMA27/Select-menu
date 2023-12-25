// let promise = new Promise(function (resolve, reject) {
//   const x = "geeksforgeeks";
//   const y = "geeksforgeeks";

//   if (x === y) {
//     resolve();
//   } else {
//     reject();
//   }
// });
// //.then aand .catch are promise consumers
// promise
//   .then(function () {
//     console.log("Success, you are a Geek");
//   })
//   .catch(function () {
//     console.log("Some error has occured");
//   });


//-----------------------------------------------------------------//

// let answer = new Promise( function(resolve, reject) {
//     reject('Promise rejected!');
//     resolve('Promise accepted!')
// });
// //The leading one will be printed in case both the cases are present.
// answer
// .then( (successMessage) => {
//     console.log(successMessage);
// }, (errorMessage) => {
//     console.log(errorMessage);
// });

//----------------------------------------------------------------//

// let question = new Promise(function(resolve, reject){
//     reject("My name is not Aman.");
//     resolve("My name is Aman.");
// })
// question
// .then ( (successMessage) =>{
//     console.log(successMessage);
// })
// .catch ( (errorMessage) => {
//     console.log(errorMessage);
// });

//----------------------------------------------------------------=//

