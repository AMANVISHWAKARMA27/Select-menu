import React from 'react';

const App = () => {
  var time = new Date();
  var hours = time.getHours();
  var minutes = time.getMinutes();
  var seconds = time.getSeconds();
  var greeting;
  var cssStyle = {
    color: 'yellow'
  }

  if (hours >= 0 && hours < 12) {
    greeting = 'Good Morning';
    cssStyle.color = 'yellow'
  } else if (hours >= 12 && hours < 16) {
    greeting = 'Good Afternoon';
    cssStyle.color = 'lightBlue';
  } else if (hours >= 16 && hours < 19) {
    greeting = 'Good Evening';
    cssStyle.color = 'orange';
  } else {
    greeting = 'Good Night';
    cssStyle.color = 'darkblue';
  }

  if (hours < 12) {
    var denotion = 'AM';
  } else {
    denotion = 'PM';
  }
  if (hours > 12) {
    hours = hours - 12;
  }
  if (hours < 10) {
    hours = `0${hours}`
  }
  if (minutes < 10) {
    minutes = `0${minutes}`;
  }
  if (seconds < 10) {
    seconds = `0${seconds}`;
  }
  return (<><h2>{`The time is ${hours}:${minutes}:${seconds} ${denotion}`}</h2>
    <div id='head'><h1>Hello Sir, <span style={cssStyle}>{greeting}</span></h1></div></>)
}
export default App;