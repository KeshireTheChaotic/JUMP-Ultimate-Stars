
undefined4 FUN_0205c7cc(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_020643f4(param_1 + 0x34,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_02064430(param_1 + 0x34,param_1,0x30);
  if (iVar1 != 0x30) {
    return 0;
  }
  if (param_2 != 0) {
    uVar2 = FUN_0205cc44(param_2,*(undefined4 *)(param_1 + 0x1c),FUN_0205c394,param_1);
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
    if (*(int *)(param_1 + 0x8c) == 0) {
      return 0;
    }
    iVar1 = FUN_020643f4(param_1 + 0x34,*(undefined4 *)(param_1 + 0x18),0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_02064430(param_1 + 0x34,*(undefined4 *)(param_1 + 0x8c),
                         *(undefined4 *)(param_1 + 0x1c));
    if (iVar1 != *(int *)(param_1 + 0x1c)) {
      return 0;
    }
    uVar2 = FUN_0205cc44(param_2,*(undefined4 *)(param_1 + 0x24),FUN_0205c388,param_1);
    *(undefined4 *)(param_1 + 0x84) = uVar2;
    if (*(int *)(param_1 + 0x84) == 0) {
      return 0;
    }
    iVar1 = FUN_020643f4(param_1 + 0x34,*(undefined4 *)(param_1 + 0x20),0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_02064430(param_1 + 0x34,*(undefined4 *)(param_1 + 0x84),
                         *(undefined4 *)(param_1 + 0x24));
    if (iVar1 != *(int *)(param_1 + 0x24)) {
      return 0;
    }
    if ((param_3 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
      uVar2 = FUN_0205cc44(param_2,*(int *)(param_1 + 0x14),FUN_0205c37c,param_1);
      *(undefined4 *)(param_1 + 0x88) = uVar2;
      if (*(int *)(param_1 + 0x88) == 0) {
        return 0;
      }
      iVar1 = FUN_020643f4(param_1 + 0x34,*(undefined4 *)(param_1 + 0x10),0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_02064430(param_1 + 0x34,*(undefined4 *)(param_1 + 0x88),
                           *(undefined4 *)(param_1 + 0x14));
      if (iVar1 != *(int *)(param_1 + 0x14)) {
        return 0;
      }
    }
  }
  return 1;
}

