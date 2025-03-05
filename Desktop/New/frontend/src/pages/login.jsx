import React, { useState } from 'react';
import "../style/login.css";

const LoginPage = () => {
  const [isSignUpMode, setIsSignUpMode] = useState(false);
  const [countryCode, setCountryCode] = useState('+91'); // Default to India (+91)
  const [loginFormDetails, setLoginFormDetails] = useState({
    user_name: '',
    password: '',
  });
  const [errorMessage, setErrorMessage] = useState('');
  const [isLoading, setIsLoading] = useState(false);

  const toggleSignUpMode = () => setIsSignUpMode(true);
  const toggleSignInMode = () => setIsSignUpMode(false);

  const handleChange = (e) => {
    const { name, value } = e.target;
    setLoginFormDetails({
      ...loginFormDetails,
      [name]: value,
    });
  };

  return (
    <div className={`home-container ${isSignUpMode ? 'home-sign-up-mode' : ''}`}>
      <div className="home-forms-container">
        <div className="home-signin-signup">
          <form className="home-sign-in-form home-login-form home-form">
            <h2 className="home-title">Login</h2>
            <div className="home-input-field">
              <input type="text" name="user_name" value={loginFormDetails.user_name} onChange={handleChange} placeholder="Enter your username" required />
            </div>
            <div className="home-input-field">
              <input type="password" name="password" value={loginFormDetails.password} onChange={handleChange} placeholder="Enter your password" required />
            </div>
            <input type="submit" value={isLoading ? 'Logging in...' : 'Login'} className="home-btn solid" />
          </form>

          {errorMessage && <div className="error-message" style={{ color: 'red' }}>{errorMessage}</div>}

          <form className="home-sign-up-form home-form">
            <h2 className="home-title">Sign up</h2>
            <div className="home-input-field">
              <input type="text" placeholder="Enter your name" required />
            </div>
            <div className="home-input-field">
              <input type="email" placeholder="Enter your email" required />
            </div>
            <div className="home-input-field">
              <select className="home-country-code" value={countryCode} onChange={(e) => setCountryCode(e.target.value)}>
                <option value="+91">+91 🇮🇳</option>
                <option value="+1">🇺🇸 +1</option>
                <option value="+44">🇬🇧 +44</option>
                <option value="+61">🇦🇺 +61</option>
                <option value="+81">🇯🇵 +81</option>
              </select>
              <input type="number" placeholder="Enter your phone number" required />
            </div>
            <div className="home-input-field">
              <input type="text" placeholder="Enter your organization" required />
            </div>
            <input type="submit" className="home-btn" value="Book Demo" />
          </form>
        </div>
      </div>

      <div className="home-panels-container">
        <div className="home-panel home-left-panel">
          <div className="content">
            <h3>Don't have an account yet?</h3>
            <p>Join us and manage your work hassle-free.</p>
            <button className="home-btn transparent" onClick={toggleSignUpMode}>
              Sign up
            </button>
          </div>
          <img src="./signup.avif" className="home-image" alt="Login Illustration" />
        </div>
        <div className="home-panel home-right-panel">
          <div className="content">
            <h3>Welcome Back!</h3>
            <p>Let's continue this journey together!</p>
            <button className="home-btn transparent" onClick={toggleSignInMode}>
              Sign in
            </button>
          </div>
          <img src="./login_img.svg" className="home-image" alt="Demo Illustration" />
        </div>
      </div>
    </div>
  );
};

export default LoginPage;
