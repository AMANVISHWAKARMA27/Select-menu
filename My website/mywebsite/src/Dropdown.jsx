import React from 'react';
import Down from './down.png'
const Dropdown = () => {

    return (
        <>
            <div className='flex flex-col mb-1'>
                <div className='flex bg-slate-700 h-12 shadow-[0px_0px_6px_rgb(0,0,0,0.8)] 
        justify-between items-center p-3'>
                    <p className='text-sky-300 font-light'>EDUCATION</p>
                    <img className='h-[12px]' src={Down} alt='down' />
                </div>
                <div className='w-[100%] border-black bg-slate-300 hidden flex-col justify-center 
            items-center'>
                    <div className='flex flex-col'>
                        <h2 className='bg-slate-500 text-center text-white font-serif cursor-pointer'>
                            <a href='#.com'>St. Xavier's Convent School</a></h2>
                        <p className='text-center italic text-blue-800'>I did my High-Schooling from
                            an ICSE affiliated school.I achieved 93.2% and rank 1 in my class.</p>
                    </div>
                    <div className='flex flex-col'>
                        <h2 className='bg-slate-500 text-center text-white font-serif cursor-pointer'>
                            <a href='#.com'>Siddhant World School</a></h2>
                        <p className='text-center italic text-blue-800'>I did my Intermediate from a CBSE
                            affiliated school.I achieved 94.8% and rank 1 in my class.</p>
                    </div>
                    <div className='flex flex-col'>
                        <h2 className='bg-slate-500 text-center text-white font-serif cursor-pointer'>
                            <a href='#.com'>Indian Institute of Infomation Technology, Lucknow</a></h2>
                        <p className='text-center italic text-blue-800'>Presently, I'm Persuing Bachelor
                            of Technology (BTech.) degree at IIIT Lucknow in Information Technology course.</p>
                    </div>
                </div>
            </div>

            <div className='flex flex-col mb-1'>
                <div className='flex bg-slate-700 h-12 shadow-[0px_0px_6px_rgb(0,0,0,0.8)] 
        justify-between items-center p-3'>
                    <p className='text-sky-300 font-light'>TECHSTACK</p>
                    <img className='h-[12px]' src={Down} alt='down' />
                </div>
                <div className='w-[100%] border-black bg-slate-300 hidden flex-col justify-center 
            items-center'>
                    <div className='flex flex-col'>
                        <h2 className='text-white font-serif bg-slate-500 text-center '>Web Development</h2>
                        <p className='text-blue-800 text-center italic'>HTML, CSS, JAVASCRIPT, REACT.JS, TAILWIND CSS</p>
                    </div>
                    <div className='flex flex-col'>
                        <h2 className='text-white font-serif bg-slate-500 text-center '>Competitive Programming</h2>
                        <p className='text-blue-800 text-center italic'>C++ and DSA, 1 star coder on Codechef </p>
                    </div>
                    {/* <h2 className='text-white font-serif bg-slate-500 text-center '>Machine Learning</h2>
                <h2 className='text-white font-serif bg-slate-500 text-center '>Application Development (Android)</h2> */}
                </div>
            </div>

            <div className='flex flex-col mb-1'>
                <div className='flex bg-slate-700 h-12 shadow-[0px_0px_6px_rgb(0,0,0,0.8)] 
        justify-between items-center p-3'>
                    <p className='text-sky-300 font-light'>ACHIEVEMENTS</p>
                    <img className='h-[12px]' src={Down} alt='down' />
                </div>
                {/* <div className='w-[100%] border-black bg-slate-300 hidden flex-col justify-center 
            items-center'>
                    <div className='flex flex-col'>
                        <h2 className='bg-slate-500 text-center text-white font-serif cursor-pointer'>
                            <a href='#.com'>St. Xavier's Convent School</a></h2>
                        <p className='text-center italic text-blue-800'>I did my High-Schooling from
                            an ICSE affiliated school.I achieved 93.2% and rank 1 in my class.</p>
                    </div>
                    <div className='flex flex-col'>
                        <h2 className='bg-slate-500 text-center text-white font-serif cursor-pointer'>
                            <a href='#.com'>Siddhant World School</a></h2>
                        <p className='text-center italic text-blue-800'>I did my Intermediate from a CBSE
                            affiliated school.I achieved 94.8% and rank 1 in my class.</p>
                    </div>
                    <div className='flex flex-col'>
                        <h2 className='bg-slate-500 text-center text-white font-serif cursor-pointer'>
                            <a href='#.com'>Indian Institute of Infomation Technology, Lucknow</a></h2>
                        <p className='text-center italic text-blue-800'>Presently, I'm Persuing Bachelor
                            of Technology (BTech.) degree at IIIT Lucknow in Information Technology course.</p>
                    </div>
                </div> */}
            </div>

            <div className='flex flex-col mb-1'>
                <div className='flex bg-slate-700 h-12 shadow-[0px_0px_6px_rgb(0,0,0,0.8)] 
        justify-between items-center p-3'>
                    <p className='text-sky-300 font-light'>CONNECT WITH ME</p>
                    <img className='h-[12px]' src={Down} alt='down' />
                </div>
                <div className='w-[100%] hidden border-black bg-slate-300 flex-col justify-center 
                 items-center'>
                    <div className='flex-col pt-2 pb-2'>
                        <div>
                            <p className='italic text-blue-800 pl-2'><i class="fa-brands fa-linkedin mr-1 text-[20px] text-black"></i>LinkedIn</p>
                        </div>
                        <div>
                            <p className='italic text-blue-800 pl-2'><i class="fa-brands fa-square-x-twitter mr-1 text-[20px] text-black"></i>Twitter</p>
                        </div>
                        <div>
                            <p className='italic text-blue-800 pl-2'><i class="fa-brands fa-instagram mr-1 text-[20px] text-black"></i>Instagram</p>
                        </div>
                        <div>
                            <p className='italic text-blue-800 pl-2'><i class="fa-brands fa-whatsapp mr-1 text-[20px] text-black"></i>Whatsapp</p>
                        </div>
                        <div>
                            <p className='italic text-blue-800 pl-2'><i class="fa-brands fa-discord mr-1 text-[20px] text-black"></i>Discord</p>
                        </div>
                        <div>
                            <p className='italic text-blue-800 pl-2'><i class="fa-solid fa-phone mr-1 text-[20px] text-black"></i>Contact: 8957175307</p>
                        </div>
                        <div>
                            <p className='italic text-blue-800 pl-2'><i class="fa-regular fa-envelope mr-1 text-[20px] text-black"></i>Email: lit2023032@iiitl.ac.in</p>
                        </div>
                    </div>
                </div>
            </div>
        </>
    )
}

export default Dropdown;