
void FUN_02159d08(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint extraout_r1;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x124);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0200d12c(uVar5,5,param_3,param_4,param_4);
  uVar4 = extraout_r1 & 0xff;
  uVar1 = FUN_0200d12c(uVar5,5);
  uVar1 = uVar1 & 0xff;
  if (*(int *)(iVar3 + 0xc) != 0) {
    if (((param_2 & 1) != 0) && ((int)((uVar1 - 1) + (int)*(char *)(iVar3 + 0x4d8)) < 0)) {
      *param_3 = 0;
    }
    if (((param_2 & 2) != 0) &&
       (3 < (int)((int)*(char *)(iVar3 + 0x4da) + uVar1 + 1 + (int)*(char *)(iVar3 + 0x4d8)))) {
      *param_3 = 0;
    }
    if (((param_2 & 8) != 0) && ((int)((uVar4 - 1) + (int)*(char *)(iVar3 + 0x4d7)) < 0)) {
      *param_3 = 0;
    }
    if ((param_2 & 4) == 0) {
      return;
    }
    if ((int)((int)*(char *)(iVar3 + 0x4d9) + uVar4 + 1 + (int)*(char *)(iVar3 + 0x4d7)) < 5) {
      return;
    }
    if (uVar1 < 3) {
      *param_3 = *(undefined4 *)(iVar3 + 0x90);
    }
    else {
      *param_3 = *(undefined4 *)(iVar3 + 0x9c);
    }
    return;
  }
  iVar2 = FUN_0215b660(iVar3);
  if (iVar2 != 0) {
    if ((param_2 & 0x20) == 0) {
      return;
    }
    FUN_0215b5d8(iVar3,param_1);
    FUN_0207342c(0x78,1);
    return;
  }
  if ((param_2 & 4) == 0) {
    return;
  }
  if (uVar4 + 1 < 5) {
    return;
  }
  if (uVar1 < 2) {
    FUN_02159afc(iVar3,1);
    *param_3 = *(undefined4 *)(iVar3 + (uVar1 * 3 & 0xff) * 4 + 0x50);
    return;
  }
  *param_3 = *(undefined4 *)(iVar3 + ((uVar1 - 2) * 3 + 1 & 0xff) * 4 + 0x8c);
  return;
}

