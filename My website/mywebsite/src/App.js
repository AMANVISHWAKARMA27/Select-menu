import React from 'react'
import Navbar from './Navbar'
import Down from './down.png'
import Quotebox from './Quotebox'

const App = () => {

  return (<>
    <Navbar />
    <Quotebox />

    <div className='flex flex-col'>
      <div className='flex bg-slate-700 h-12 shadow-[0px_0px_3px_rgb(0,0,0,0.5)] 
      justify-between items-center p-3'>
        <p className='text-sky-300 font-light'>EDUCATION</p>
        <img className='h-[12px]' src={Down} alt='down' />
      </div>
      <div className='w-[100%] border-black bg-slate-300 flex justify-center 
      items-center'>
        <div className='flex'>
          <p>uebbskjhsbcbjhbjshgvuxye1i3uty8
            iq7wyeiuqwgrqu7wcfvi87rqbo8c7t32
            cruiqt8O7BYO87YR73TC8B7Rq6w0x87s
            jhbfvviwhgbidejvbawifuiwuegfijdb
            nciwjdbsduhicburyiwuabhyeiuryoiu
            hyqiuhycibuyoiwuyoubdnwjebjkebbe
            hrbuwhwjbdf</p>
        </div>
      </div>
    </div>
  </>
  )

}

export default App;