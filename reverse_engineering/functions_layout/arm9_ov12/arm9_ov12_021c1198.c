
void FUN_021c1198(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = DAT_021d5280;
  iVar2 = FUN_021c12c4();
  if (iVar2 == 0) {
    FUN_02055684();
  }
  if ((param_1[1] & 1) != 0) {
    FUN_02055684();
  }
  uVar3 = param_4;
  if (0x1f < param_4) {
    uVar3 = FUN_02052f4c(iVar1);
    if (param_4 == 0x20) {
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 - 1;
      }
    }
    else if (param_4 == 0x21) {
      if (uVar3 < 0x1f) {
        uVar3 = uVar3 + 1;
      }
      else {
        uVar3 = 0x1f;
      }
    }
    else if (param_4 != 0x22) {
      uVar3 = 0x1f;
    }
  }
  uVar4 = OS_DisableInterrupts();
  param_1[1] = param_1[1] & 0xfffffffe | 1;
  param_1[1] = param_1[1] & 1 | uVar3 << 1;
  param_1[2] = param_2;
  param_1[3] = param_3;
  if (*(int *)(iVar1 + 0xc0) == 0) {
    if (param_1 == (undefined4 *)(iVar1 + 0xc4)) {
      DAT_021d5280 = 0;
    }
    *(undefined4 **)(iVar1 + 0xc0) = param_1;
    FUN_020531dc(iVar1);
  }
  else {
    piVar5 = *(int **)(iVar1 + 0xc0);
    if (param_1 == (undefined4 *)(iVar1 + 0xc4)) {
      for (piVar6 = (int *)*piVar5; piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
        piVar5 = piVar6;
      }
      *piVar5 = (int)param_1;
      DAT_021d5280 = 0;
    }
    else if (uVar3 < (uint)piVar5[1] >> 1) {
      *(undefined4 **)(iVar1 + 0xc0) = param_1;
      *param_1 = piVar5;
    }
    else {
      while ((piVar6 = (int *)*piVar5, piVar6 != (int *)0x0 && ((uint)piVar6[1] >> 1 <= uVar3))) {
        piVar5 = piVar6;
      }
      *param_1 = piVar6;
      *piVar5 = (int)param_1;
    }
  }
  OS_RestoreInterrupts(uVar4);
  return;
}

