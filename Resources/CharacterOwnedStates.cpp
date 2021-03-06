#include "CharacterOwnedStates.h"
#include "CharacterType.h"


//=======重生状态相关=======
CMotionState_Respawn * CMotionState_Respawn::Instance()
{
	static CMotionState_Respawn instance;
	return &instance;
}

void CMotionState_Respawn::Enter(Character * pCharacter)
{

	pCharacter->Set_Pos(Vec2(200, 300));
	//设置对应的动画
	pCharacter->Get_CharacterType()->GetSequence(pCharacter, 0);	
	//执行相应动画
	pCharacter->RunAnimation();
}

void CMotionState_Respawn::Execute(Character * pCharacter)
{
}

void CMotionState_Respawn::Exit(Character * pCharacter)
{
	//pCharacter->Get_Sequence()->autorelease();
}

bool CMotionState_Respawn::OnMessage(Character * pCharacter, const Telegram & msg)
{
	return false;
}


//=======战立状态相关=======
CMotionState_Stand * CMotionState_Stand::Instance()
{
	static CMotionState_Stand instance;
	return &instance;
}

void CMotionState_Stand::Enter(Character * pCharacter)
{
	pCharacter->Get_CharacterType()->GetSequence(pCharacter, 0);

	pCharacter->RunAnimation();
}

void CMotionState_Stand::Execute(Character * pCharacter)
{
}

void CMotionState_Stand::Exit(Character * pCharacter)
{
}

bool CMotionState_Stand::OnMessage(Character * pCharacter, const Telegram & msg)
{
	return false;
}

//=======行走状态相关=======
CMotionState_Walk * CMotionState_Walk::Instance()
{
	static CMotionState_Walk instance;
	return &instance;
}

void CMotionState_Walk::Enter(Character * pCharacter)
{
	pCharacter->Set_Pos(Vec2(200, 300));
	//设置对应的动画
	pCharacter->Get_CharacterType()->GetSequence(pCharacter, 1);
	//执行相应动画
	pCharacter->RunAnimation();
}

void CMotionState_Walk::Execute(Character * pCharacter)
{
}

void CMotionState_Walk::Exit(Character * pCharacter)
{
}

bool CMotionState_Walk::OnMessage(Character * pCharacter, const Telegram & msg)
{
	return false;
}


