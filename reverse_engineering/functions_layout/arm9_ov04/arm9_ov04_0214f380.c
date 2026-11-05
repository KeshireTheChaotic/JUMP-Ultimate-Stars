
/* JUS-GAME JQuizCommonWork::JQuizCommonWork_Quiz_Shuffle_Core [source-string]
   __FILE__="JQuizCommonWork.cpp" __FUNCTION__="JQuizCommonWork_Quiz_Shuffle_Core" lines=[215, 216,
   217] passed to 3 source-location call(s) */

void JQuizCommonWork::JQuizCommonWork_Quiz_Shuffle_Core(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  
  iVar5 = (int)(short)*(undefined4 *)(DAT_02161de8 + 0x44);
  iVar6 = iVar5 << 1;
  iVar1 = thunk_FUN_0201a228(iVar6,s_JQuizCommonWork_cpp_02160a98,
                             s_JQuizCommonWork_Quiz_Shuffle_Cor_02160a74,0xd7);
  uVar2 = thunk_FUN_0201a228(iVar6,s_JQuizCommonWork_cpp_02160a98,
                             s_JQuizCommonWork_Quiz_Shuffle_Cor_02160a74,0xd8);
  uVar3 = thunk_FUN_0201a228((int)*(short *)(DAT_02161de8 + 0x10) << 1,
                             s_JQuizCommonWork_cpp_02160a98,
                             s_JQuizCommonWork_Quiz_Shuffle_Cor_02160a74,0xd9);
  iVar6 = 0;
  iVar7 = *(int *)(DAT_02161de8 + 0x40);
  for (iVar8 = 0; iVar8 < iVar5; iVar8 = (iVar8 + 1) * 0x10000 >> 0x10) {
    uVar10 = FUN_0214f310(iVar7);
    iVar4 = (int)((ulonglong)uVar10 >> 0x20);
    bVar9 = (int)uVar10 != 0;
    if (bVar9) {
      iVar4 = iVar6 << 1;
      iVar6 = (iVar6 + 1) * 0x10000 >> 0x10;
    }
    if (bVar9) {
      *(short *)(iVar1 + iVar4) = (short)iVar8;
    }
    iVar7 = iVar7 + 0x28;
  }
  iVar5 = (int)*(short *)(DAT_02161de8 + 0x10);
  if ((iVar6 < iVar5) && (0 < iVar6)) {
    for (iVar8 = iVar6; iVar5 = (int)*(short *)(DAT_02161de8 + 0x10), iVar8 < iVar5;
        iVar8 = iVar8 + 1) {
      FUN_0200d12c(iVar8,iVar6);
      *(undefined2 *)(iVar1 + iVar8 * 2) = *(undefined2 *)(iVar1 + extraout_r1 * 2);
    }
  }
  iVar8 = (iVar5 - (iVar5 >> 0x1f)) * 0x8000 >> 0x10;
  if (0 < iVar8) {
    iVar8 = 0;
  }
  JQuizMainCommon::JQuizMainCommon_ListRandomMix
            (uVar3,(iVar5 - iVar8) * 0x10000 >> 0x10,iVar1,iVar6);
  JQuizMainCommon::JQuizMainCommon_ListRandomMix
            (DAT_02161de8 + 0x50,(int)*(short *)(DAT_02161de8 + 0x10),uVar3,
             (int)*(short *)(DAT_02161de8 + 0x10));
  FUN_0201b268(iVar1);
  FUN_0201b268(uVar2);
  FUN_0201b268(uVar3);
  return;
}

