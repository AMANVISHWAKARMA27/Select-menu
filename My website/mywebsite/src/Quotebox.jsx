import React from 'react'
import './App.css'
import Myself from './Aman.jpg'

const Quotebox = () => {

    return (
        //------------------------QUOTEBOX----------------------//
        <>
            < div className='w-[100%] flex-col sm:flex sm:flex-row' >
                <div className='flex sm:w-[50%] flex-col items-center justify-evenly m-3 p-3 
    shadow-[0px_0px_10px_rgba(0,0,0,0.7)]'>
                    <div className='h-[1px] w-[30%] mb-2 border border-amber-500'></div>
                    <blockquote >"Loading..."</blockquote>
                    <span className='text-right w-[100%] text-slate-500 font-extralight italic 
      text-[12px]'>~Loading...</span>
                </div>
                <div className='flex h-[200px] sm:w-[50%] items-center justify-between m-3 p-3
     shadow-[0px_0px_10px_rgba(0,0,0,0.7)]'>
                    <div className='flex max-w-[50%] justify-center text-center'><blockquote>Hello! Welcome to  my website.
                        My name is Aman Vishwakarma.  I'm a first year Btech student at IIIT Lucknow</blockquote></div>
                    <div className=' h-[150px] w-[1px] m-3 border border-amber-500'></div>
                    <div className='flex rounded bg-cover shadow-[0px_0px_10px_rgb(0,0,0,0.5)]'>
                        <img src={Myself} alt='me' className='h-[170px] rounded' />
                    </div>
                </div>
            </div >
        </>
    )
}

export default Quotebox;