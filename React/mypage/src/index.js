import React from 'react';
import ReactDOM from 'react-dom';

var time = new Date();
var hours = time.getHours();
var minutes = time.getMinutes();
var seconds = time.getSeconds();
var day = time.getDate();
var month = time.getMonth()+1;
var year = time.getFullYear();
var timestamp;

if ( hours < 12){
    timestamp = 'AM';
} else {
    timestamp = 'PM'
}
if ( minutes <10 ){
    minutes = `0${minutes}`;
}
if ( seconds <10 ){
    seconds = `0${seconds}`;
}
if ( hours > 12 )
{
    hours = hours - 12;
}
if ( hours <10 ){
    hours = `0${hours}`;
}


ReactDOM.render(
   <>
   <h1>Hello, my name is Aman.</h1>
   <p>{`Todays Date is ${day}-${month}-${year}.`}</p>
   <p>{`Current time is ${hours}:${minutes}:${seconds} ${timestamp}.`}</p>   
   </>
    ,document.getElementById('root')
)