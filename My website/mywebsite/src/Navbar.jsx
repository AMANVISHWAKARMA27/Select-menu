import React from 'react'
import './App.css'
import hamburger from './hamburger.jpg'

const Navbar = () => {

    return (
        //---------------------Navbar--------------------------//
        <>
            <div className='bg-cyan-500  flex flex-row text-center p-4 justify-between items-center'>
                <h1 className='max-[380px]:text-[21px] max-[380px]:-m-2 max-[639px]:text-[30px] text-xl 
      sm:text-3xl lg:text-4xl xl:text-5xl 2xl:text-6xl'>AMAN VISHWAKARMA</h1>
                <div className='hidden md:flex md:flex-row md:w-[350px] md:text-[16px] lg:w-[470px]
       lg:text-xl xl:w-[520px] xl:text-[23px] 2xl:w-[620px] 2xl:text-[28px] max-[1534px]:w-[700px]
        max-[1534px]:text-5xl justify-between items-center text-indigo-900  font-medium'>
                    <a href='#.com'>Education</a>
                    <a href='#.com'>TechStack</a>
                    <a href='#.com'>Achievements</a>
                    <a href='#.com'>Gallery</a>
                </div>
                <img src={hamburger} alt="hamburger" className='max-[380px]:h-[20px] max-[380px]:w-[20px]
       h-[30px] w-[30px] rounded md:hidden'/>
            </div>

        {/* -----------------------DROPDOWN---------------------- */}
            <div className='w-[100%] flex flex-col bg-slate-800 p-1 md:hidden hidden'>
                <p className='text-[13px] bg-slate-800 text-white p-1 rounded font-extralight'>Navigate to</p>
                <ul className=' mt-2 bg-slate-900 text-white rounded '>
                    <li className='bg-slate-950 pl-4 rounded mb-1 text-[13px]'><a href='#.com'>Education</a></li>
                    <li className='bg-slate-950 pl-4 rounded mb-1 text-[13px]'><a href='#.com'>TechStack</a></li>
                    <li className='bg-slate-950 pl-4 rounded mb-1 text-[13px]'><a href='#.com'>Achievements</a></li>
                    <li className='bg-slate-950 pl-4 rounded  text-[13px]'><a href='#.com'>Gallery</a></li>
                </ul>
            </div>
        </>
    )
}

export default Navbar;