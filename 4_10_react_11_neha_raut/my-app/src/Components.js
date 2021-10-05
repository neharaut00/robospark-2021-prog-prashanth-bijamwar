import React from 'react'
import './css/style.css'
import './css/mainbox.css'
import './css/form.css'

export default function Component()
{
    return(
        <>
            <section id="mainbox">
                <div id="heading">
                    <h1>LOGIN</h1>
                </div>
                <div id="form">
                    <input type="text" placeholder="Username"></input>
                    <input type="password" placeholder="Password"></input>
                    <a href="#">Forgot your password?</a>
                    <button>LOGIN</button>
                </div>
                
            
        </section>
    </>
    )
}