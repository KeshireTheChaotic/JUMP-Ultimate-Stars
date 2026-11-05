
undefined4 FUN_0215a664(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_70 [92];
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  uVar1 = FUN_0207879c(*(undefined4 *)(param_1 + 0x2cc));
  if ((uVar1 & 0x1f) == 0) {
    FUN_02076bbc(*(undefined4 *)(param_1 + 0x2cc),auStack_70);
    iVar2 = FUN_02078814(*(undefined4 *)(param_1 + 0x2cc),auStack_70);
    if (iVar2 == 0) {
      FUN_0207342c(0x78,2);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x60) + 4));
    uVar3 = 0xd;
    if ((uVar1 & 0x10) != 0) {
      if ((uVar1 & 0xf) == 0) {
        uVar3 = 0xe;
      }
      else {
        uVar3 = 0xf;
      }
    }
    FUN_0207342c(0x78,2);
    func_0x021bac28(*(undefined4 *)(param_1 + 0x2d8),uVar3,0,0,0,0,0,0);
    while (iVar2 = func_0x021bad2c(*(undefined4 *)(param_1 + 0x2d8)), iVar2 == 0) {
      (*DAT_020a0e18)();
    }
    if (*(char *)(param_1 + 0x301) == '\0') {
      func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x60) + 4));
      func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x60) + 4),1);
      func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0xac) + 4),1);
    }
    uVar3 = 0;
  }
  return uVar3;
}

