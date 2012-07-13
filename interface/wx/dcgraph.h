/////////////////////////////////////////////////////////////////////////////
// Name:        dcgraph.h
// Purpose:     interface of wxGCDC
// Author:      wxWidgets team
// RCS-ID:      $Id: dcgraph.h 68974 2011-09-03 01:39:39Z RD $
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

/**
    @class wxGCDC

    wxGCDC is a device context that draws on a wxGraphicsContext.

    @library{wxcore}
    @category{dc}

    @see wxDC, wxGraphicsContext
*/

class wxGCDC: public wxDC
{
public:
    /**
       Constructs a wxGCDC from a wxWindowDC.
    */
    wxGCDC( const wxWindowDC& dc );

    /**
       Constructs a wxGCDC from a wxMemoryDC.
    */
    wxGCDC( const wxMemoryDC& dc );

    /**
       Constructs a wxGCDC from a wxPrinterDC.
    */
    wxGCDC( const wxPrinterDC& dc );

    /**
       Construct a wxGCDC from an existing grtaphics context.
    */
    wxGCDC(wxGraphicsContext* context);

    
    wxGCDC();
    virtual ~wxGCDC();


    /**
       Retrieves associated wxGraphicsContext
    */
    wxGraphicsContext* GetGraphicsContext() const;

    /**
       Set the grpahics context to be used for this wxGCDC.
    */
    void SetGraphicsContext( wxGraphicsContext* ctx );

};

