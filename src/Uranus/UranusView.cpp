// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface 
// (the "Fluent UI") and is provided only as referential material to supplement the 
// Microsoft Foundation Classes Reference and related electronic documentation 
// included with the MFC C++ library software.  
// License terms to copy, use or distribute the Fluent UI are available separately.  
// To learn more about our Fluent UI licensing program, please visit 
// http://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// UranusView.cpp : implementation of the CUranusView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Uranus.h"
#endif

#include "UranusDoc.h"
#include "UranusView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUranusView

IMPLEMENT_DYNCREATE(CUranusView, CView)

BEGIN_MESSAGE_MAP(CUranusView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CUranusView construction/destruction

CUranusView::CUranusView()
{
	// TODO: add construction code here

}

CUranusView::~CUranusView()
{
}

BOOL CUranusView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CUranusView drawing

void CUranusView::OnDraw(CDC* /*pDC*/)
{
	CUranusDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}

void CUranusView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CUranusView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CUranusView diagnostics

#ifdef _DEBUG
void CUranusView::AssertValid() const
{
	CView::AssertValid();
}

void CUranusView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUranusDoc* CUranusView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUranusDoc)));
	return (CUranusDoc*)m_pDocument;
}
#endif //_DEBUG


// CUranusView message handlers
