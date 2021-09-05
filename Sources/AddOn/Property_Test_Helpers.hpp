// *****************************************************************************
// File:			Property_Test_Helper.hpp
// Description:		Property_Test add-on helper macros and functions
// Project:			APITools/Property_Test
// Namespace:		-
// Contact person:	CSAT
// *****************************************************************************

#if !defined (HELPERS_HPP)
#define	HELPERS_HPP
#define ELEMSTR_LEN				256
#define	CURR_ADDON_VERS			0x0100
#include "APICommon.h"
#include "DG.h"
#include "StringConversion.hpp"

// -----------------------------------------------------------------------------
// Helper functions
// -----------------------------------------------------------------------------
typedef struct {
	Int32		version;
	bool		syncNew;
	bool		syncMon;
	bool		wallS;
	bool		widoS;
	bool		objS;
} SyncPrefs;

bool GetLibParam(const API_Guid& elemGuid, const GS::UniString& paramName, GS::UniString& param_string, GS::Int32& param_int, bool& param_bool, double& param_real);
void CallOnSelectedElem(void (*function)(const API_Guid&), bool assertIfNoSel = true, bool onlyEditable = true);
static GS::Array<API_Guid>	GetSelectedElements(bool assertIfNoSel /* = true*/, bool onlyEditable /*= true*/);
bool	GetElementTypeString(API_ElemTypeID typeID, char* elemStr);
bool GetLibParam(const API_Guid& elemGuid, const GS::UniString& paramName, GS::UniString& param_string, GS::Int32& param_int, bool& param_bool, double& param_real);
bool InvertMenuItemMark(short menuResID, short itemIndex);
GSErrCode GetPropertyByGuid(const API_Guid& elemGuid, GS::Array<API_Property>& properties);
bool SyncString(GS::UniString& description_string, GS::UniString& paramName, int& synctype, int& syncdirection);
GSErrCode GetTypeByGUID(const API_Guid& elemGuid, API_ElemTypeID& elementType);
void	CheckACMenuItem(short itemInd, bool checked);
void GetSyncSettings(SyncPrefs& prefsData);


namespace PropertyTestHelpers
{

GS::UniString			ToString (const API_Variant& variant);

GS::UniString			ToString (const API_Property& property);
}

bool operator== (const API_Variant& lhs, const API_Variant& rhs);

bool operator== (const API_SingleVariant& lhs, const API_SingleVariant& rhs);

bool operator== (const API_ListVariant& lhs, const API_ListVariant& rhs);

bool operator== (const API_SingleEnumerationVariant& lhs, const API_SingleEnumerationVariant& rhs);

bool operator== (const API_MultipleEnumerationVariant& lhs, const API_MultipleEnumerationVariant& rhs);

bool Equals (const API_PropertyDefaultValue& lhs, const API_PropertyDefaultValue& rhs, API_PropertyCollectionType collType);

bool Equals (const API_PropertyValue& lhs, const API_PropertyValue& rhs, API_PropertyCollectionType collType);

bool operator== (const API_PropertyGroup& lhs, const API_PropertyGroup& rhs);

bool operator== (const API_PropertyDefinition& lhs, const API_PropertyDefinition& rhs);

bool operator== (const API_Property& lhs, const API_Property& rhs);

template <typename T>
bool operator!= (const T& lhs, const T& rhs)
{
	return !(lhs == rhs);
}

#endif