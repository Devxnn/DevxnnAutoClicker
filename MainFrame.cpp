#include "MainFrame.h"
#include <wx/wx.h>


namespace WidgetIDs
{
	enum WidgetIDs
	{
		Button1Start = 4999,
		Button1End,
		MenuPanel,
		MainPanel,




	};
}
// Create a TaskMenu that allows you to switch the windows from Main | Macros | etc

MainFrame::MainFrame(const wxString& Title) : wxFrame(nullptr, wxID_ANY, Title)
{
	wxPanel* MAIN_PANEL = new wxPanel(this, WidgetIDs::MainPanel, wxPoint(0,50), wxSize(500,550));
	wxPanel* MENU_PANEL = new wxPanel(this, WidgetIDs::MenuPanel, wxPoint(0, 0), wxSize(500,50));
	MENU_PANEL->SetBackgroundColour(wxColour(255, 255, 255));
	MAIN_PANEL->SetBackgroundColour(wxColour(255, 255, 255));
	MAIN_PANEL->Show();
	//WinSize = (x500,y600)



	wxButton* bStartAutoClick = new wxButton(MAIN_PANEL, WidgetIDs::Button1Start, "Start", wxPoint(200, 350), wxSize(100, 50));
	wxButton* bEndAutoClick = new wxButton(MAIN_PANEL, WidgetIDs::Button1End, "End", wxPoint(200, 350), wxSize(100, 50));
	bEndAutoClick->Hide();

}
