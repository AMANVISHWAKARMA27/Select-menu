import React from 'react'
import Navbar from './Navbar'
import Dropdown from './Dropdown'
import Quotebox from './Quotebox'

const App = () => {

  return (<>
    <Navbar />
    <Quotebox />
    <Dropdown />

    <div className='flex-col mt-5 bg-cyan-600'>
      <div className='h-[20px] bg-cyan-400'></div>
      <div className='flex flex-wrap justify-evenly flex-row'>
        <div className='m-3'>
          <h4 className='text-white pl-1'>QUICK LINKS</h4>
          <div className='pt-2 pl-1 text-[13px] text-blue-100 font-extralight '>
            <p>EDUCATION</p>
            <p>TECHSTACK</p>
            <p>ACHIEVEMENTS</p>
            <p>GALLERY</p>
          </div>
        </div>
        <div className='m-3'>
          <h4 className='text-white pl-1'>SOCIAL MEDIA</h4>
          <div className='pt-2 pl-1 text-[13px] flex flex-col text-blue-100 font-extralight'>
            <a href='#.com'><i class="fa-brands fa-linkedin mr-2 text-[15px] text-yellow-50"></i>LINKEDIN</a>
            <a href='#.com'><i class="fa-brands fa-x-twitter mr-2 text-[15px] text-yellow-50"></i>TWITTER</a>
            <a href='#.com'><i class="fa-brands fa-instagram mr-2 text-[15px] text-yellow-50"></i>INSTAGRAM</a>
            <a href='#.com'><i class="fa-brands fa-discord mr-2 text-[15px] text-yellow-50"></i>DISCORD</a>
          </div>
        </div>
        <div className='m-3'>
          <h4 className='text-white pl-1'>CONTACT ME</h4>
          <div className='pt-2 pl-1 text-[13px] flex flex-col text-blue-100 font-extralight'>
            <p><i class="fa-brands fa-whatsapp mr-2 text-[15px] text-yellow-50"></i>WHATSAPP: 8957175307</p>
            <p><i class="fa-solid fa-phone mr-2 text-[15px] text-yellow-50"></i>CONTACT: 8957175307</p>
            <p><i class="fa-solid fa-envelope mr-2 text-[15px] text-yellow-50"></i>EMAIL: lit2023032@iiit.ac.in</p>
          </div>
        </div>

      </div>
      <div className='flex flex-col bg-cyan-800 p-2'>
        <footer className='text-white text-center text-[12px]'>{'\u00A9'} Copyright Reserved</footer>
      </div>
    </div>
  </>
  )

}

export default App;