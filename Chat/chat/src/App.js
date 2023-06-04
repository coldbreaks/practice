import React from "react";
import Home from "./components/Home";
import Sidebar from "./components/Sidebar";
import { BrowserRouter as Router, Route, Routes, Navigate } from 'react-router-dom';

function App() {
  return (
    <div>
      <Sidebar />

      <Routes>
        <Route path = "/" element = {<Home />} />
      </Routes>
    </div>
  );
}

export default App;
