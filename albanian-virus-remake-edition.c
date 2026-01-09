#include <windows.h>


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{     
    int selection = MessageBox(
        NULL,
        "Hi, I am an Albanian virus but because of poor technology in my country unfortunately I am not able to harm your computer. Please be so kind to delete one of your important files yourself and then forward me to other users. Many thanks for your cooperation! Best regards, Albanian virus. \n\nDo you agree to my request?",
        "VIRUS ALERT !!!!!!!!!",
        MB_ICONERROR | MB_YESNO 
    );
    
    
    if (selection == 6)
    {
        MessageBox(NULL, "Thanks for agreeing to the albanian cause.", "Thanks", MB_OK);
    }

    if (selection == 7)
    {
        MessageBox(NULL, "You are a wimp.", "WIMP !!!!!!", MB_OK);
    }
    return 0;
}