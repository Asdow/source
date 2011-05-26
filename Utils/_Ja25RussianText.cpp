// WANNE: Yes, this should be disabled, otherwise we get weird behavior when running the game with a VS 2005 build!
//#pragma setlocale("RUSSIAN")

#ifdef PRECOMPILEDHEADERS
	#include "Utils All.h"
	#include "_Ja25RussianText.h"
#else
	#include "Language Defines.h"
	#ifdef RUSSIAN
		#include "text.h"
		#include "Fileman.h"
	#endif
#endif

//suppress : warning LNK4221: no public symbols found; archive member will be inaccessible
void this_is_the_Ja25RussianText_public_symbol(void){;}

#ifdef RUSSIAN

// VERY TRUNCATED FILE COPIED FROM JA2.5 FOR ITS FEATURES FOR JA2 GOLD

STR16	zNewTacticalMessages[]=
{
	//L"���������� �� ����: %d ��., ������������: %d/%d",
	L"���������� ��������� � ������ ��������.",
	L"�� �� ������ ������ %s",
	L"����������� ��������� ������������ ����� � ��������� ��������� ����� �� ��� ������, ���� �� ��� �� �������� ������������, ������������� ����.",
	L"������� %s - ���� ����������� ���������������� '���� ����� �� ���'. �� ����� ��������� �������� ��� ������������ ����������.",
	L"�������",
	L"� ������� ���-�� ����...",
	//L"�������������� ������: %d ��., ���� �������: %d%%",
	L"�������� �������",
	L"����� �������",
	L"����� �������� �� ����� ���������� �����.",
	L"��� ��� ��� ������� ������� �������, �� �� �� ������� ������ ����� ���������. ��������, ������ ��� ����� ��������� ���� �� ����������� ���, ��� ������ ���� ������!",
	L"%s ������ ������������� ����� ��� ����� ������. �������, ��� ��� ������� ������� ������ ��������.",  //the %s is the name of a merc.
	L"����� ��������� �������, ����������� ���������� ��������� �������, %s �����, ��� �� ��� ��� ��������. � ������� ���������� ���������� ������� ������� ��� ������� �� ��� �����. ����� ����, ��� ����� ������� ���������� ����� �������� ����.",
	L"������ ������ ����������, %s ��������, ��� ���������� ���� ����� ��������, � ����� ������ ��������� ��� ����.  %s �� ���������� �������, � ������ ����� ������� ������ ����������. ������, ��� ����� ������� ������ ��� ����...",
	L"� ������ ���� �� ������� ���������� ���� � \"������ �����\" � ������ �� ������ ������������ �� ����� ���.",
	L"(������ ����������� �� ����� ���)",
	L"������� �������� ������� 30 ��������.",
	L"������� �������� �� �������.",
	L"��������: �� ��������� ( %S )",
	L"��������: %S",
	L"�� ������� �������� %S. ��� �������� �������� ������������ ������������ �������� Unfinished Business. �� �������, ��� ������ ������ �������� %S?",
	L"����� ��������������� ����������, ������� �������� �� ��������� �� ������.",
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SANDRO - New STOMP laptop strings
//these strings match up with the defines in IMP Skill trait.cpp
STR16 gzIMPSkillTraitsText[]=
{
	// made this more elegant
	L"����� ������",
	L"���������� ���",
	L"�����������",
	L"������",
	L"�������",
	L"����������",
	L"������� ������",
	L"�������������� ������",
	L"����������",
	L"������",
	L"�������� ������",
	L"�������",
	L"��������",
	L"������ ���������",

	L"���",
	L"I.M.P.: �������������",
	L"(�������)",
};

//added another set of skill texts for new major traits
STR16 gzIMPSkillTraitsTextNewMajor[]=
{
	L"����������",	//Auto Weapons
	L"�������",	//Heavy Weapons
	L"�������",	//Marksman
	L"�������",	//Hunter
	L"������",	//Gunslinger
	L"�����",	//Hand to Hand
	L"��������",	//Deputy
	L"�������-�����������",	//Technician
	L"�������",	//Paramedic

	L"���",
	L"I.M.P.: �������� ������",	//I.M.P. Major Traits
	// second names
	L"���������",	//Machinegunner
	L"�����������",	//Bombardier
	L"�������",	//Sniper
	L"��������",	//Ranger
	L"�����������",	//Gunfighter
	L"������ ���������",	//Martial Arts
	L"��������",	//Squadleader
	L"�������",	//Engineer
	L"������",	//Doctor
};

//added another set of skill texts for new minor traits
STR16 gzIMPSkillTraitsTextNewMinor[]=
{
	L"������",	//Ambidextrous
	L"������ ������",	//Melee
	L"������ �� �������",	//Throwing
	L"������",	//Night Ops
	L"��������� ������",	//Stealthy
	L"���������",	//Athletics
	L"����������",	//Bodybuilding
	L"���������",	//Demolitions
	L"����������",	//Teaching
	L"���������",	//Scouting

	L"���",
	L"I.M.P.: �������������� ������",	//I.M.P. Minor Traits
};

//these texts are for help popup windows, describing trait properties
STR16 gzIMPMajorTraitsHelpTextsAutoWeapons[]=
{
	L"+%d%s � ����� �������� �� ��������\n",
	L"+%d%s � ����� �������� �� ��������-�������\n",
	L"+%d%s � ����� �������� �� ������� �������\n",
	L"-%d%s �� �� �������� �� ������� ������� � ������ ������� ��� ������� � ��������\n",
	L"-%d%s �� �� ������� ������� �������\n",
	L"����� �� ���� ��������� � �������������� ������ ���� � � ������ ������� ������� �� %d%s\n",
	L"������� ���� ������ ��������� ��� �������������� ��������\n",

};
STR16 gzIMPMajorTraitsHelpTextsHeavyWeapons[]=
{
	L"-%d%s �� �� �������� �� ����������\n",
	L"-%d%s �� �� �������� �� ����������� ����������\n",
	L"+%d%s � ����� �������� �� ����������\n",
	L"+%d%s � ����� �������� �� ����������� ����������\n",
	L"-%d%s �� �� ���� �� �������\n",
	L"������� ����� �� ���� ��������� ��� �������� � ������� �� %d%s\n",
	L"+%d%s � ����� ������ �� ��������� �� ������� ������, ������ � ����������\n",
	L"+%d%s � ����� ���� ����� �� ������� ������\n",

};
STR16 gzIMPMajorTraitsHelpTextsSniper[]=
{
	L"+%d%s � ����� �������� �� ��������\n",
	L"+%d%s � ����� ������� �� ����������� ��������\n",
	L"-%d%s ����������� ��������� �� ���� ��� ����� ���� ������\n",	//-%d%s effective range to target with all weapons
	L"+%d%s � ������ ������������ �� ������ ������ ���� (�������� � ����������)\n",
	L"+%d%s � ����������� �� ��������",	//+%d%s damage on shot
	L" ����",
	L" � ������ ������",
	L" ����� �������",
	L" ����� �������",
	L" ����� ��������",
	L" ����� ���������",
	L" ����� ������",
	L" ����� �������",
	L" ����� ��������",
	L"-%d%s �� �� ������������� ������� ���������� ��������\n",
	L"���� 1 ����-������������ � ������ ���� ��������\n",
	L"���� %d ����-������������ � ������ ���� ��������\n",

};
STR16 gzIMPMajorTraitsHelpTextsRanger[]=
{
	L"+%d%s � ����� �������� �� ��������\n",
	L"+%d%s � ����� �������� �� �����\n",
	L"-%d%s �� �� ����������� �����\n",
	L"+%d%s � �������� ������������ ������ ����� ���������, ���� ���� ������\n",
	L"+%d%s � �������� ������������ ������ ����� ���������, \n���� ������������� �� ���������� (� ����������� �� ��������)\n",
	L"-%d%s � ������� ������� ��� �������� ����� ���������\n",	//������ ������ ���
	L"-%d%s �� ����� �������� �������\n",
	L"+%d%s � ������������� ���������\n",
	L"-%d%s �� �������� ��������� ��������� �� ���� � �������\n",

};
STR16 gzIMPMajorTraitsHelpTextsGunslinger[]=
{
	L"-%d%s �� ����������� ��� �������� �� ���������� � �����������\n",
	L"+%d%s � ����������� �������������� ���������� � �����������\n",
	L"+%d%s � ����� ��������� �� ���������� � �����������\n",
	L"+%d%s � ����� ��������� �� ��������-��������",
	L" (���� ��� ���������� ��������)",
	L"+%d%s ������ �� ���� ������ ���� ��� ������������ �� ���������, ��������-������� � ����������\n",
	L"-%d%s �� ����������� �� ������� ��������� � ����������\n",
	L"-%d%s �� ����������� �� ����������� ���������, ��������-������� � ����������\n",
	L"��� %d �������������� ������ ���� �� ������������ ����������, ��������-�������� � �����������",
	L"��� %d �������������� ������� ���� �� ������������ ����������, ��������-�������� � �����������\n",

};
STR16 gzIMPMajorTraitsHelpTextsMartialArts[]=
{
	L"-%d%s �� �� ��������� ����� (�������� � ��������)\n",
	L"+%d%s � ����� �� �������������� ���� �����\n",
	L"+%d%s � ����� �� �������������� ���� ��������\n",
	L"+%d%s � ����� � ���������� ������ (�������� � ��������)\n",
	L"+%d%s � ����� ������������ � ���������� ������ (�������� � ��������)\n",
	L"����, ��������� ������ �������, ������� ������ �������� � ����\n",
	L"����, ��������� ������ �������, ������ �������� � ����\n",
	L"����, ��������� ������ �������, ������� ������ �������� � ����\n",
	L"����, ��������� ������ �������, ����� ����� �������� � ����\n",
	L"����, ��������� ������ �������, ������� ������ ��������\n",
	L"����, ��������� ������ �������, ������ �������� �� ����� �����\n",
	L"����, ��������� ������ �������, �������� ������ �� �������\n",
	L"���������� ���� ������� �� %d%s ������ �����\n",
	L"���� ����� � ��������� ������� �� %d%s ������ �����\n",
	L"+%d%s � ����� ���������� �� �����\n",
	L"+%d%s � ����� ���������� �� ����� �����",
	L" ��� ��������",
	L" (+%d%s � ��������)",
	L"+%d%s � ����� ���������� �� ����� ��������\n",
	L"+%d%s � ����� ���������� �� ����� ����� �������� �������\n",
	L"����� �� %d%s �� ������ ����� ��������� ������ �� ��� ����������\n",
	L"����� �� %d%s �� ������ ����� ������� ��������� (����, ����, ����), �����������, ������/������� �� ����� � ������������ �����������\n",
	L"����� �� %d%s �� ������ ����� ������� ��������� (����, ����, ����)\n",
	L"����� �� %d%s �� ������ ����� �����������\n",
	L"����� �� %d%s �� ������ ����� ������/������� �� ����� � ������������ �����������\n",
	L"+%d%s � ����� ������ ����� �����\n",
	L"�� ��������� ����������� �������� ��� ���� � ������� ���\n",

};
STR16 gzIMPMajorTraitsHelpTextsSquadleader[]=
{
	L"+%d%s �� �� ������ ��� ����� ����������� ��������\n",
	L"+%d � ������������ ������ ����� ����������� ��������, � ������� ������� ���� ��� � %s\n",
	L"+%d � ������ ����� ��������� ��� �������� ������ ���������� ��� �� ����\n",
	L"�� +%d%s ������� �������� %s � �������� ����� � ���\n",
	L"+%d � ������� ���� ����� ����������� ��������\n",
	L"-%d � ������ ������� ���� ��� ����� ����������� ��������\n",
	L"������ ������� ������ �� ������ �������� %d ������",
	L" (%d ������ � ���������� �����)",
	L"(������������ ���������� ������������� ������� ��� ������ ������� %d)\n",
	L"+%d%s ������������� ������ � %s\n",
	L"����������: %dx ������� ��������� ������� ���� � �������� ���� �������� %s\n",

};
STR16 gzIMPMajorTraitsHelpTextsTechnician[]=
{
	L"+%d%s � �������� �������\n",
	L"+%d%s � ������ ������ ������ (�������/�����������)\n",
	L"+%d%s � ������ ��������� ����������� �������\n",
	L"+%d%s � ������ ������ ����� � ������������� ������ �������\n",
	L"+%d%s � ������ �������� ������ � ������� ��������� � ��� ���� ��� ��������\n",
	L"������� ����� �� ������ ����������� ��������� �� %d%s\n",
	L"������� ���� ���������� ����������� ������� � ���� (+%d � ������ �����������)\n",
	L"+%d%s � ����� �������� ���� ������ ������������ %s\n",
	L"%s ��� ����������� ������������� ������\n",
	L"������� ����� �� ������ ������ �� %d%s\n",
};
STR16 gzIMPMajorTraitsHelpTextsDoctor[]=
{
	L"����� ��������� ������������� �������� ��� ������� ����������� �����\n",
	L"������������� �������� ���������� %d%s ������ ����������� ��������.",
	L" (������� ������������� ������� ����������� ���. �����.)",
	L"����� ������� ������������ ������ (� ��������� ������������ �������) ����",
	L" �������������� ������������� ���",
	L" ������� ��������.\n",
	L"+%d%s � ������������� ��� ������ ������-�������\n",
	L"+%d%s � �������� ���������\n",
	L"+%d%s � ��������� �������� ����������� ��� ���� ������ � ��� �� �������",
	L" (�������� %d ������ �� ����������� � �������)",

};
STR16 gzIMPMajorTraitsHelpTextsNone[]=
{
	L"��� �����������",
};

STR16 gzIMPMinorTraitsHelpTextsAmbidextrous[]=
{
	L"������� ����� �� �������� � ���� ��� �� %d%s\n",
	L"+%d%s � �������� �� ����������� ������ ���������\n",
	L"+%d%s � �������� �� ��������� �������� ������\n",
	L"-%d%s �� ����� ������� �������\n",
	L"-%d%s �� �� ����������� � ��������\n",
	L"-%d%s �� �� �������� � ������\n",
	L"-%d%s ��, ����������� ��� ���������/�������������� ���� � ���\n",
	L"-%d%s ��, ����������� �� ������������� �������\n",
};
STR16 gzIMPMinorTraitsHelpTextsMelee[]=
{
	L"-%d%s �� �� �� ����� ��������� �������\n",
	L"+%d%s � ����� �������� ��������� �������\n",
	L"+%d%s � ����� �������� ������ �������� �������\n",
	L"+%d%s � ����� �� ���������� ������\n",
	L"+%d%s � ����� �� ������� ��������� ������\n",
	L"���� �� ���������� ����� ����� �������� ������� ���������� �� +%d%s\n",
	L"+%d%s � ����� ���������� �� ����� ��������� �������\n",
	L"+%d%s � ����� ���������� �� ����� ��������� ������� ���� � ����� ���\n",
	L"+%d%s � ����� ���������� �� ����� ������ �������� �������\n",
	L"+%d%s � ����� ���������� �� ����� ������ �������� ������� ���� � ����� ���\n",

};
STR16 gzIMPMinorTraitsHelpTextsThrowing[]=
{
	L"-%d%s �� ������� �� ������ �� ������ ����\n",
	L"+%d%s � ������������ ����������� ��������� ������ ����\n",
	L"+%d%s � ����� �������� ���� ��� ������� ����\n",
	L"+%d%s � ����� �������� ���� ��� ������� ���� ���������\n",
	L"+%d%s � ����� ������������ ����\n",
	L"+%d%s � ����� ������������ ���� ��� ���������� ������\n",
	L"+%d%s � ����� ������� ����������� ���� ��� ������ ����, ���� ��� �� ������� � �� ������\n",
	L"+%d � ��������� �� ����������� ���� ��� ������ ����\n",
	L"��������� %d ������ ���� �� ������������ � ������ ����\n",
	L"��������� %d ������� ���� �� ������������ � ������ ����\n",

};
STR16 gzIMPMinorTraitsHelpTextsNightOps[]=
{
	L"+%d � ������ � �������\n",
	L"+%d � ��������� �����\n",
	L"+%d ������������� � ����� � �������\n",
	L"+%d � ����������� ��������� ���� � ����\n",
	L"-%d � ����� � ���\n",

};
STR16 gzIMPMinorTraitsHelpTextsStealthy[]=
{
	L"-%d%s � ��, ����������� ��� ������ ������������\n",
	L"+%d%s ��������� ����\n",
	L"+%d%s � ���������� (���� '���������' ���� ��� �� ����������)\n",
	L"���������� ������ �� ��������� � ������� �� %d%s\n",

};
STR16 gzIMPMinorTraitsHelpTextsAthletics[]=
{
	L"-%d%s �� �� �������� (���, ���, ��� ���������, ������������, �������� � �.�.)\n",
	L"-%d%s �� ������� ������� ��� ��������, �������������� �� �����, ������ ����� �����������, �������� � �.�.\n",
};
STR16 gzIMPMinorTraitsHelpTextsBodybuilding[]=
{
	L"����� %d%s ������������ � ������������\n",
	L"+%d%s � ���� �� ��������� ����������\n",
	L"��������� ������ ��� ��� ����������� ������ � ������� ��� �� %d%s\n",
	L"������� ����, ����������� ����� ������� � ��� ��� ������� � ���� �� %d%s\n",

};
STR16 gzIMPMinorTraitsHelpTextsDemolitions[]=
{
	L"-%d%s �� �� �� ������ �������\n",
	L"+%d%s � ������������ ��������� ������ �������\n",
	L"+%d%s � �������� ������ �������\n",
	L"+%d%s � ����� �� ������������� ���� � ���\n",
	L"+%d%s � � ����� ������������� ���������\n",
	L"+%d%s � ���������/�������������� ����\n",
	L"��������� ���� ����������� ����������� ������������� ���� � ��� (+%d � ������ ����)\n",
	L"�������� ����������� �������� ����� �������� ������� (��������� ����������� %d)\n",

};
STR16 gzIMPMinorTraitsHelpTextsTeaching[]=
{
	L"+%d%s � �������� �������� ���������\n",
	L"+%d%s � ����������� �������� �������� ���������\n",
	L"+%d%s � �������� �������� ������ ��������\n",
	L"�������� ������ ������ ����� ���� �� +%d ��� �������� ������� ����� ����� ������\n",
	L"+%d%s � �������� ���������������� ��������/����������\n",

};
STR16 gzIMPMinorTraitsHelpTextsScouting[]=
{
	L"+%d � ����������� ���������� ��������� ��� ������ � ����������� ���������\n",
	L"+%d � ����������� ��������� ��������� ��� �������� (� ���������� �������� ������������� �� ������)\n",
	L"-%d �� ����������� ������ ��� �������� (� ���������� �������� ������������� �� ������)\n",
	L"���� � �������, � ������� �������� ����� �������� ������ ���������� ������\n",
	L"���� � �������, � ������� �������� ����� �������� ������� ������\n",
	L"������������� ��������� ������ �� ��������� ������\n",
	L"������������� ��������� ������ � ������ �����-�����\n",

};
STR16 gzIMPMinorTraitsHelpTextsNone[]=
{
	L"��� �����������",
};

STR16 gzIMPOldSkillTraitsHelpTexts[]=
{
	L"+%d%s ����� � ������ ������\n",
	L"+%d%s � �������� ����� � ���������� �������\n",
	L"+%d%s � ������������ � ���������� �������\n",
	L"+%d%s � ����� ���������� �� ����� ������ � ���������� �������\n",
	L"��� ������ ��� ������� � ������������� ����������� ��������� \n(������, �������, �����������, ������ � �.�.)\n",
	L"+%d � ������ � �������\n",
	L"+%d � ��������� �����\n",
	L"+%d ������������� � ����� � �������\n",
	L"+%d � ����������� ��������� ���� � ����\n",
	L"-%d � ����� � ���\n",
	L"+%d%s � ������������� ������� ��������� ��� �������\n",
	L"+%d%s � �������� ��� �������\n",
	L"+%d%s ���� ��������� ����� ����������� �����, ����� ��� ����� �� ������� � �� �������\n",
	L"+%d%s � �������� �������� ��������� ��� ������ ���������\n",
	L"+%d%s � ����������� �������� �������� ���������\n",
	L"+%d%s � ����� �������� �� ����������, ����������� ���������� � �� �������\n",
	L"����� �� ����������� ��������� ���� ��� �������� �������� ������� �� %d\n",
	L"������� ���� ������ ��������� ��� �������������� ��������\n",
	L"+%d%s � ���������� ������������\n",
	L"+%d%s � ���������� (���������� ��� �����, ���� ��� �� ����������)\n",
	L"��� ������� �� ���� �������� ���� ��� �������� � ���� ���\n",
	L"+%d%s � ����� �������� �������� �������\n",
	L"+%d%s � ����� ���������� �� ����� �������� �������, ���� � ����� ���� ���\n",
	L"+%d%s � ����� ���������� �� ����� �������� �������, ���� � ����� �� ���\n",
	L"+%d%s � ����� ���������� �� ����� � ����������, ���� � ����� ���� ���\n",
	L"-%d%s � ����������� ��������� �� ���� ��� ����� ���� ������\n",
	L"+%d%s � ������ ������������ �� ������ ������ ����\n",
	L"����������� ��������.\n",
	L"+%d%s � ����� �������� � ���������� ���\n",
	L"+%d%s � ������������ � ���������� ���\n",
	L"+%d%s � ����� ���������� �� ����� � ���������� ��� ���� � ����� ������ ���\n",
	L"+%d%s � ����� ���������� �� ����� � ���������� ��� ���� ���� ������\n",
	L"+%d%s � ����� ���������� �� ����� �������� �������\n",
	L"�������� ������� ���� '��������' � ������ �� ���������� ���������� � ���������� �������� �����\n",
	L"� ��� ����� ������ �������� ��� ���������� �����.\n",
	L"��� �����������",
};

STR16 gzIMPNewCharacterTraitsHelpTexts[]=
{
//I.M.P. Character Traits help text
	L"�����: ��� �����������.\n \n������: ��� �����.",	//Neutral
	L"�����: ����� �������� � �������.\n \n������: ������ ��� �� �����, ����� ������ �������� ����.",	//Sociable
	L"�����: ����� �������� � �����������.\n \n������: ������ ��� �� ����� � ����������� ������ ������.",	//Loner
	L"�����: ������ ��� ������ �������, � ��������� ��������� ��������.\n \n������: ���� ���������� ���� � ������� ���� ��������.",	//Optimist
	L"�����: ����� ����� � ������ � ��������� ���������.\n \n������: �������� ������ ������ �� ������ �� ��� ������ ���.",	//Assertive
	L"�����: ������� ������� ���������.\n \n������: �������� ������� �������������� ������ � ����������.",	//Intellectual
	L"�����: ����� ��������� ������, ���� �� �������� ��� ����, ���������, ������ ��� ������.\n \n������: ��� ��������, ���������, �������� ����, �������� � �������� ������ ��������� ��������.",	//Primitive
	L"�����: ����� ����� � �������� ��������� � ����� � ����������. \n��� �������� ����� ������ ��� ����� ������, ��� � ������.\n \n������: ���� ��������� �����������, ��� ������� ��������� ��������: \n������, �������� ������, ������ �������, �������, ���������� ���������.",	//Aggressive
	L"�����: ����� ��������� �����������, ��������� ��������: \n������, �������� ������, ������ �������, �������, ���������� ���������.\n \n������: ����� ������� ���� ����������� ��� �����.",	//Phlegmatic
	L"�����: ����� ���������� ������������� ���������� � ������. \n������ ��� ��� �������� � ������ ��������� ���������� ���������, ��� � ������.\n \n������: ����� ���� � ������� ������������ ������� �� ����� ��������.",	//Dauntless
	L"�����: ������ ��� ���������� ��� ���������� �������� ������� (����� ���������� ���������).\n \n������: �������� ������ �� �������� ������ ���.",	//Pacifist
	L"�����: ����� ������� ���� ������� ����������� ���� � ������, ���������� � ��������� ����������.\n \n������: ����� �������� � ������� � ������ ������ ������ ���, ���� �� ���������.",	//Malicious
	L"�����: ����� �������� � �������� �������������� ���������������� ����.\n \n������: ������ ��� ������ ���� �� ���� � ��� ����������� ����� ���������.",	//Show-off
};

STR16 gzIMPDisabilitiesHelpTexts[]=
{
	L"�������� �������.",
	L"����������� ����������������� � ��������� �������� � �������� \n���� ��������� � ��������� ��� ����������� ���������.",
	L"����� ������ � ������ ���� �������� ������ � ����������� ���������.",
	L"���������� ���������������� � ��������� ����������, �����������.",
	L"��� ������� ����� ����� � �������� �������.",
	L"��� ���� ������� ��������� ����� ������ � ��������� � ���������� ���... \n���������� � ����������� ����� ��� �� �������� ��� �����������������.",
	L"������ �������� �������, ��-�� ���� ������ \n��������� ���������� ����� �������� �� ����� ���.",
	L"������ ������ �������� ���������� ��������. \n� ����� ������� �� ������������� ���� ������� �� ��������� ����. \n������ �����, ���� ��� ������ ����� �� ���������.",
};


STR16 gzIMPProfileCostText[]=
{
	L"����������� ����� ��������������� ����� %d$. ����������� ������? ",
};

STR16 zGioNewTraitsImpossibleText[]=
{
	L"������ ������� ����� ������ IMP ��������� � ����������� PROFEX. ��������� �������� ����� �������� JA2_Options.ini, ����: READ_PROFILE_DATA_FROM_XML.",
};

//@@@:  New string as of March 3, 2000.
STR16	gzIronManModeWarningText[]=
{
	L"��� ����� �������� ����������� ���� � \"������ �����\". ��������� ���� ������ ������� �������, ��� ��� ����������� �� ������� ������ ����� �����. ����� ������ ���� �������� ��� ��������� ������. �� �������, ��� ������ ���������� � ������������ ����������� � ���?",
};

STR16 gzDisplayCoverText[]=
{
	L"���������: %d/100 %s, ������������: %d/100",
	L"�������������� ������: %d/%d ��., ���� �������: %d/100",
	L"�������������� ������: %d/%d ��., Muzzle Stability: %d/100",
	L"��������� ��������� ������� ��� ������� � �����",
	L"������� ���� ������",
	L"������� ���� ��� �������",
	L"�������", //Wood //wanted to use jungle , but wood is shorter in german too (dschungel vs wald)
	L"�����",
	L"�������",
	L"����",	//NOT USED!!!
	L"��� � �������",
	L"" // yes empty for now
};


#endif
