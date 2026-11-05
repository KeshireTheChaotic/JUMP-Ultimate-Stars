
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_021537fc(uint param_1,uint param_2,uint param_3,uint param_4,int *param_5,int *param_6,
            int *param_7,int *param_8,int *param_9,int param_10)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (0x100 < param_1) {
    return 0;
  }
  iVar2 = thunk_FUN_02151bcc(param_4 << 2);
  *param_5 = iVar2;
  iVar2 = thunk_FUN_02151bcc(param_4 << 2);
  *param_6 = iVar2;
  uVar6 = 0;
  if (param_4 != 0) {
    iVar2 = (param_2 >> 1) << 8;
    do {
      uVar3 = thunk_FUN_02151bcc(param_2 << 8);
      *(undefined4 *)(*param_5 + uVar6 * 4) = uVar3;
      if (*(int *)(*param_5 + uVar6 * 4) == 0) {
        return 0;
      }
      uVar3 = thunk_FUN_02151bcc(iVar2);
      *(undefined4 *)(*param_6 + uVar6 * 4) = uVar3;
      if (*(int *)(*param_6 + uVar6 * 4) == 0) {
        return 0;
      }
      FUN_02002488(*(undefined4 *)(*param_5 + uVar6 * 4),0,param_2 << 8);
      FUN_02002488(*(undefined4 *)(*param_6 + uVar6 * 4),0x80,iVar2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_4);
  }
  iVar5 = ((param_2 >> 2) + 1) * 0x41;
  iVar2 = thunk_FUN_02151bcc(iVar5);
  *param_7 = iVar2;
  if (*param_7 == 0) {
    return 0;
  }
  iVar4 = ((param_2 >> 3) + 1) * 0x21;
  iVar2 = thunk_FUN_02151bcc(iVar4);
  *param_8 = iVar2;
  if (*param_8 == 0) {
    return 0;
  }
  FUN_02002488(*param_7,0,iVar5);
  FUN_02002488(*param_8,0,iVar4);
  iVar5 = ((param_2 >> 4) + 1) * 0x48;
  iVar2 = thunk_FUN_02151bcc(iVar5);
  *param_9 = iVar2;
  if (*param_9 == 0) {
    return 0;
  }
  FUN_02002488(*param_9,0,iVar5);
  *(int *)(param_10 + 0x2c) = *param_7 + 0x42;
  *(int *)(param_10 + 0x30) = *param_8 + 0x22;
  iVar5 = 0;
  *(int *)(param_10 + 0x34) = *param_9 + 0x4c;
  iVar2 = 0;
  do {
    iVar4 = 0;
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(int *)(param_10 + iVar5 * 4 + 0x38) =
           *(int *)(&DAT_0215ff64 + iVar1 + iVar2 * 0x10 + (param_3 % 6) * 0x20) <<
           (param_3 / 6 & 0xff);
      iVar5 = iVar5 + 1;
    } while (iVar4 < 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  iVar2 = 0;
  do {
    iVar5 = param_10 + iVar2;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar5 + 0x58) = 9;
  } while (iVar2 < 0x19);
  return 1;
}

