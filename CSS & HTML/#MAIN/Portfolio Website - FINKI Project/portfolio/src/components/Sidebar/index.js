import React from 'react';
import { 
SidebarContainer, 
Icon, 
CloseIcon,
SidebarWrapper,
SidebarMenu,
SidebarLink,
SideBtnWrap,
SidebarRoute
} from './SidebarElements';

const Sidebar = ({isOpen, toggle}) => {
  return (
    <SidebarContainer isOpen={isOpen} onClick={toggle}>
        <Icon onClick={toggle}>
            <CloseIcon />
        </Icon>

        <SidebarWrapper>
            <SidebarMenu>
                <SidebarLink to ="coding" onClick={toggle}>Coding</SidebarLink>
                <SidebarLink to ="photography" onClick={toggle}>Photography</SidebarLink>
                <SidebarLink to ="design" onClick={toggle}>Design</SidebarLink>
                <SidebarLink to ="about" onClick={toggle}>About</SidebarLink>
            </SidebarMenu>

            <SideBtnWrap>
                <SidebarRoute to="contact">Contact</SidebarRoute>
            </SideBtnWrap>
        </SidebarWrapper>
    </SidebarContainer>
  )
}

export default Sidebar