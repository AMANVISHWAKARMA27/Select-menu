import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import Card from './Card.jsx'
import Data from './Sdata.jsx';

const ncard = (val) => {
  return (
    <Card
      imgsrc={val.link}
      title={val.title}
    />
  )
}

ReactDOM.render(
  <>
    <div className='divOne'>
      <h1>List of Various Netflix Series</h1>
    </div>
    <div className='cardContainer'>

     { Data.map(ncard)};

    </div>
  </>, document.getElementById('root')
)