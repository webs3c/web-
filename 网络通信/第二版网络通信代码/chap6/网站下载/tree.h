#if !defined(__TREE_H__)
#define __TREE_H__

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// tree.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTree window

class CTree : public CTreeCtrl
{
public:
	enum NODE_TYPE
	{
		// NOTE: order must match IDB_TREE bitmap order
		SITE_NODE = 0,
		TOC_NODE,
		PAGES_NODE,
		MEDIA_NODE,
		PAGE_NODE,
		WAVE_NODE,
		EMAIL_NODE,
		IMAGE_NODE,
		JAVA_NODE,
		DOC_NODE,
		TOC_PAGE_NODE,
		OFFSITE_PAGE_NODE,
	};

protected:
	int m_nColumnCount;
	CImageList m_ImageList;

// Construction
public:
	CTree();

// Attributes
public:
	static NODE_TYPE GetMediaType(CString& strFileName);

// Operations
public:
	HTREEITEM AddRootItem(LPCSTR lpszTitle, int nImage=-1);//�Բ�ֱ�Ӹ�ֵ��
	HTREEITEM AddChildItem(LPCTSTR lpszTitle, HTREEITEM htreeParent, int nImage=-1);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTree)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTree();

	// Generated message map functions
protected:
	//{{AFX_MSG(CTree)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(__TREE_H__)
