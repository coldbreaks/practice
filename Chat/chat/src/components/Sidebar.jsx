import React from 'react';
import styles from '../styles/Sidebar.module.css';
import { Link } from 'react-router-dom';

const Sidebar = () => {

    return (
  
      <div className={styles.container}>
        <h1>Welcome, Guy!</h1>
        <Link to='/' className={styles.linkRectangle}>Home</Link>
        <Link to='/friends' className={styles.linkRectangle}>Friends</Link>
      </div>
    );
  };
  
  export default Sidebar;