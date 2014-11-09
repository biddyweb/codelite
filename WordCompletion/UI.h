//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: UI.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef UI_BASE_CLASSES_H
#define UI_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/propgrid/manager.h>
#include <wx/propgrid/property.h>
#include <wx/propgrid/advprops.h>
#include <wx/button.h>
#include "WordCompletionSettings.h"

class WordCompletionSettingsBaseDlg : public wxDialog
{
protected:
    wxPropertyGridManager* m_pgMgr;
    wxPGProperty* m_pgPropTypes;
    wxPGProperty* m_pgPropComparisonMethod;
    wxStdDialogButtonSizer* m_stdBtnSizer4;
    wxButton* m_button6;
    wxButton* m_button8;

protected:
    virtual void OnValueChanged(wxPropertyGridEvent& event) { event.Skip(); }

public:
    wxPropertyGridManager* GetPgMgr() { return m_pgMgr; }
    WordCompletionSettingsBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Word Completion Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~WordCompletionSettingsBaseDlg();
};

#endif