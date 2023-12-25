// const p = new Promise((resolve, reject) => {
//     resolve("Promise resolved value!");
// });

// //Always returns a promise in any case.
// async function getData() {
//     return p;
// }
// const dataPromise = getData();
// dataPromise.then((res) => console.log(res));

//---------------------------------------------//
//USing async and await
//await can only be used an async function.
// const p = new Promise((resolve, reject) => {
//   setTimeout(() => {
//     resolve("Promise Resolved Value!");
//   }, 5000);
// });
// const p2 = new Promise((resolve, reject) => {
//   setTimeout(() => {
//     resolve("Promise Resolved Value!");
//   }, 10000);
// });

// async function handlePromise() {
//   console.log("Hello World!");
//   //Here in asyncfunction, JS engine will wait for the promise to resolve.
//   const val = await p;
//   console.log("Hello");
//   console.log(val);

//   const val2 = await p2;
//   console.log("Hello 2");
//   console.log(val2);
// }

// handlePromise();

// function getData() {
//     //JS engine will not wait for the rpomise to be resolved.
//     p.then(res => console.log(res));
//     console.log("Hello");
// }
// getData();

//------------------------------------------------//
