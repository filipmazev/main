import React from 'react';
import { FaBars } from 'react-icons/fa';
import { 
Nav, 
NavbarContainer, 
NavLogo, 
MobileIcon, 
NavMenu, 
NavItem, 
NavLinks,
NavBtn,
NavBtnLink
} from './NavbarElements';

const Navbar = ( {toggle} ) => {
  return (
    <>
        <Nav> 
            <NavbarContainer>
                
                <NavLogo to="/"> Mazev</NavLogo>
                
                <MobileIcon onClick={toggle}> 
                    <FaBars />
                </MobileIcon>
                
                <NavMenu>
                    <NavItem>
                        <NavLinks to="coding">Coding</NavLinks>
                    </NavItem>

                    <NavItem>
                        <NavLinks to="photography">Photography</NavLinks>
                    </NavItem>

                    <NavItem>
                        <NavLinks to="design">Design</NavLinks>
                    </NavItem>

                    <NavItem>
                        <NavLinks to="about">About</NavLinks>
                    </NavItem>
                </NavMenu>

                <NavBtn>
                    <NavBtnLink to="contact">Contact</NavBtnLink>
                </NavBtn>

            </NavbarContainer>
        </Nav>
    </>
  );
}

export default Navbar;