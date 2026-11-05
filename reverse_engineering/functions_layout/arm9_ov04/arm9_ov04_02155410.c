
/* JUS-GAME JQuizMainQuestionMask::JQuizMainQuestionMaskClass_Create [source-string]
   __FILE__="JQuizMainQuestionMask.cpp" __FUNCTION__="JQuizMainQuestionMaskClass_Create" lines=[32]
   passed to 1 source-location call(s) */

undefined4 * JQuizMainQuestionMask::JQuizMainQuestionMaskClass_Create(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_r3;
  undefined1 auStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = in_r3;
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(4,FUN_02160fc8,s_JQuizMainQuestionMaskClass_Creat_02160fa4,0x20);
  FUN_020517fc(puVar1,0,4);
  iVar2 = FUN_0203b3e4();
  *puVar1 = *(undefined4 *)(iVar2 + 0x88);
  FUN_0214e6e4(auStack_14,9,0x1f,0xf7,0x91);
  FUN_021554e8(*puVar1,0,auStack_14);
  FUN_02155520(*puVar1,0,0x1f);
  FUN_02155538(*puVar1,0,1);
  FUN_02155550(*puVar1,0);
  FUN_02155564(*puVar1,0x1f);
  FUN_02155578(*puVar1,0,1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0214cee0(*puVar1,0x16,0);
  }
  return puVar1;
}

