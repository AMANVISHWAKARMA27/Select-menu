import React from "react";

const Card = (Props) => {
  return (
    <div className='card'>
      <img src={Props.imgsrc} alt='img1' />
      <p>{Props.title}</p>
      <button type='submit'><a href='#.com'>Watch Now</a></button>
    </div>
  )
}

export default Card;