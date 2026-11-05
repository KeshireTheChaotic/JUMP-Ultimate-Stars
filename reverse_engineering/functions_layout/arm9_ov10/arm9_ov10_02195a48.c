
uint FUN_02195a48(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x5af) == '\0') {
    uVar2 = 0x8000;
  }
  else {
    uVar2 = 0;
  }
  if (*(int *)(param_1 + 0x45c) == -1) {
    return uVar2 | 4;
  }
  if (*(int *)(param_1 + 0x458) == 3) {
    iVar3 = param_1 + 0x3fc;
    FUN_02196500(iVar3);
    FUN_02196474(iVar3,*(int *)(param_1 + 0x460),
                 *(int *)(param_1 + 0x464) - *(int *)(param_1 + 0x460));
    FUN_02196420(iVar3,param_1 + 0x468);
    *(undefined4 *)(param_1 + 0x47c) = 0x10;
  }
  else {
    if (*(int *)(param_1 + 0x458) != 4) {
      return uVar2 | 3;
    }
    iVar3 = param_1 + 0x348;
    FUN_02196a88(iVar3);
    FUN_021969fc(iVar3,*(int *)(param_1 + 0x460),
                 *(int *)(param_1 + 0x464) - *(int *)(param_1 + 0x460));
    FUN_021969a8(iVar3,param_1 + 0x468);
    *(undefined4 *)(param_1 + 0x47c) = 0x14;
  }
  iVar3 = FUN_02196128(param_1,param_1 + 0x5b0);
  if (iVar3 == 0) {
    return uVar2 | 1;
  }
  uVar1 = FUN_02195b3c(param_1);
  return uVar2 | uVar1;
}

