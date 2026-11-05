
/* JUS-GAME JQuizMainMultiScore::JQuizMainMultiScoreClass_Create [source-string]
   __FILE__="JQuizMainMultiScore.cpp" __FUNCTION__="JQuizMainMultiScoreClass_Create" lines=[324]
   passed to 1 source-location call(s) */

undefined1 *
JQuizMainMultiScore::JQuizMainMultiScoreClass_Create
          (undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar2 = (undefined1 *)
           thunk_FUN_0201a228(0x14,s_JQuizMainMultiScore_cpp_0216119c,
                              s_JQuizMainMultiScoreClass_Create_02161158,0x144);
  FUN_020517fc(puVar2,0,0x14);
  *puVar2 = param_1;
  iVar4 = 0;
  puVar2[1] = (char)param_2;
  do {
    uVar3 = JQuizMainMultiScoreOneClass_Create(param_3,iVar4,param_2);
    iVar1 = iVar4 * 4;
    iVar4 = (iVar4 + 1) * 0x1000000 >> 0x18;
    *(undefined4 *)(puVar2 + iVar1 + 4) = uVar3;
  } while (iVar4 < 4);
  return puVar2;
}

