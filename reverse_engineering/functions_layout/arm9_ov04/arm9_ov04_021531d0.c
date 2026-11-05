
/* JUS-GAME JQuizMainCommon::JQuizMainCommon_ListRandomMix [source-string]
   __FILE__="JQuizMainCommon.cpp" __FUNCTION__="JQuizMainCommon_ListRandomMix" lines=[30] passed to
   1 source-location call(s) */

void JQuizMainCommon::JQuizMainCommon_ListRandomMix(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = thunk_FUN_0201a228(param_4 << 1,s_JQuizMainCommon_cpp_02160de8,0x2160da0,0x1e,param_4);
  for (iVar4 = 0; iVar4 < param_4; iVar4 = iVar4 + 1) {
    *(undefined2 *)(iVar1 + iVar4 * 2) = 0;
  }
  iVar4 = 0;
  do {
    if (param_2 <= iVar4) {
      FUN_0201b268(iVar1);
      return;
    }
    uVar2 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    FUN_0200d338(uVar2,param_4 - iVar4);
    iVar3 = extraout_r1;
    for (iVar5 = 0; iVar5 < param_4; iVar5 = iVar5 + 1) {
      if (*(short *)(iVar1 + iVar5 * 2) == 0) {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
      }
    }
    iVar3 = iVar4 * 2;
    iVar4 = iVar4 + 1;
    *(undefined2 *)(param_1 + iVar3) = *(undefined2 *)(param_3 + iVar5 * 2);
    *(undefined2 *)(iVar1 + iVar5 * 2) = 1;
  } while( true );
}

