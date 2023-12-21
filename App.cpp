#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);





bool App::OnInit()
{
	MainFrame* MAINFRAME = new MainFrame("Devxnn AutoClicker");
	MAINFRAME->Show();
	MAINFRAME->SetClientSize(500, 600);
	MAINFRAME->Center();
	


	return true;

}