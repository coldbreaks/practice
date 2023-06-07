import React from "react";
import Home from "./components/Home";
import Sidebar from "./components/Sidebar";
import Friends from "./components/Friends";
import { BrowserRouter as Router, Route, Routes, Navigate } from 'react-router-dom';

function App() {
  return (
    <div>
      <Sidebar />

      <div style={{position:'absolute', left:'15%', width:'85%' }}>
        <Routes>
          <Route path = "/" element = {<Home />} />
          <Route path = "/friends" element = {<Friends />} />
        </Routes>
      </div>
    </div>
  );
}

export default App;
