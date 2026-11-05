
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_020502ac(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar4 = param_1 + 0x20;
  if (param_3 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x14) + param_3 * 8;
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (param_3 >> 0x1d);
  *(uint *)(param_1 + 0x14) = uVar1;
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 != 0) {
    if (iVar2 + param_3 < 0x40) {
      FUN_02051890(param_2,iVar4 + iVar2,param_3);
      *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_3;
      return;
    }
    iVar3 = 0x40 - iVar2;
    FUN_02051890(param_2,iVar4 + iVar2,iVar3);
    param_3 = param_3 - iVar3;
    param_2 = param_2 + iVar3;
    (*DAT_0209dce0)(param_1,iVar4,0x40);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (0x3f < param_3) {
    uVar1 = param_3 & 0xffffffc0;
    param_3 = param_3 - uVar1;
    if ((param_2 & 3) == 0) {
      (*DAT_0209dce0)(param_1,param_2,uVar1);
      param_2 = param_2 + uVar1;
    }
    else {
      do {
        FUN_02051890(param_2,iVar4,0x40);
        param_2 = param_2 + 0x40;
        (*DAT_0209dce0)(param_1,iVar4,0x40);
        uVar1 = uVar1 - 0x40;
      } while (0 < (int)uVar1);
    }
  }
  *(uint *)(param_1 + 0x1c) = param_3;
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x020503e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_02051890(param_2,iVar4,param_3);
  return;
}

