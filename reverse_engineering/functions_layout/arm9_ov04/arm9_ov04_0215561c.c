
/* JUS-GAME JQuizMainQuestionMask::JQuizMainAnswerMaskClass_Create [source-string]
   __FILE__="JQuizMainQuestionMask.cpp" __FUNCTION__="JQuizMainAnswerMaskClass_Create" lines=[96]
   passed to 1 source-location call(s) */

undefined4 * JQuizMainQuestionMask::JQuizMainAnswerMaskClass_Create(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(4,&DAT_02160fc8,s_JQuizMainAnswerMaskClass_Create_02160f84,0x60);
  FUN_020517fc(puVar1,0,4);
  iVar2 = FUN_0203b3f4();
  uVar3 = *(undefined4 *)(iVar2 + 0x88);
  *puVar1 = uVar3;
  FUN_02155520(uVar3,0,0x1f);
  FUN_02155538(*puVar1,0,0);
  FUN_02155550(*puVar1,1);
  FUN_02155564(*puVar1,0x1f);
  FUN_02155578(*puVar1,0,1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0214cee0(*puVar1,6,0);
  }
  return puVar1;
}

