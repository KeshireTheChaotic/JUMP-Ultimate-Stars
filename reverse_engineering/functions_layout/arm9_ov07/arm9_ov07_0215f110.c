
/* WARNING: Removing unreachable block (ram,0x0215f150) */

void FUN_0215f110(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0216ad84;
  iVar2 = FUN_0215fc84(DAT_0216ad84,param_1);
  if (iVar2 == 0) {
    return;
  }
  switch(*(short *)(param_1 + 8)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    return;
  case 7:
    if (*(int *)(iVar1 + 0x50f0) == 5) {
      return;
    }
    FUN_0215ef6c(param_1);
    return;
  case 8:
    return;
  case 9:
LAB_0215f1ac:
    if (*(int *)(iVar1 + 0x50f0) == 1) {
      *(undefined4 *)(iVar1 + 0x50f4) = 3;
      return;
    }
    *(undefined4 *)(iVar1 + 0x50f4) = 4;
    FUN_0215f488(0);
    return;
  default:
    if (*(short *)(param_1 + 8) == 0x1a) goto LAB_0215f1ac;
  }
  FUN_0215fe34(iVar1);
  return;
}

