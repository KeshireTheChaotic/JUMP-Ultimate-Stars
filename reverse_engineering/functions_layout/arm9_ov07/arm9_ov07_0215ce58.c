
void FUN_0215ce58(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if ((iVar1 == -0x7ffef000) && (uVar2 = (**(code **)*param_2)(), (uVar2 & 4) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    if (*(char *)(iVar1 + 0x7f) == '\0') {
      FUN_0207342c(0x78,2);
      FUN_0215cba0(iVar1,1);
      func_0x021bac28(*(undefined4 *)(iVar1 + 0x5c),0x50,0,0,0,0,0,0);
      while (iVar3 = func_0x021bad2c(*(undefined4 *)(iVar1 + 0x5c)), iVar3 == 0) {
        (*DAT_020a0e18)();
      }
      FUN_0215cba0(iVar1,0);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar1 + 0x28) + 4),1);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar1 + 0x30) + 4),1);
    }
    else {
      FUN_0207342c(0x78,0);
      if ((*(int *)(*(int *)(param_1 + 4) + 0x124) == 4) && (iVar3 = func_0x0219a5e8(), iVar3 != 0))
      {
        FUN_0215cba0(iVar1,1);
        uVar4 = func_0x0219a62c();
        func_0x021bac78(*(undefined4 *)(iVar1 + 0x5c),0x3c,uVar4,0,0,0,0,0,0);
        while (iVar3 = func_0x021bad2c(*(undefined4 *)(iVar1 + 0x5c)), iVar3 == 0) {
          (*DAT_020a0e18)();
        }
        iVar3 = func_0x021bacfc(*(undefined4 *)(iVar1 + 0x5c));
        if (iVar3 == 0) {
          FUN_0215cba0(iVar1,0);
          func_0x021b6214(*(undefined4 *)(*(int *)(iVar1 + 0x28) + 4),1);
          func_0x021b6214(*(undefined4 *)(*(int *)(iVar1 + 0x30) + 4),1);
          func_0x0219a588();
          return;
        }
      }
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x124);
      uVar4 = FUN_0214dd50();
      FUN_0214dd98(uVar4,iVar3 + -3);
      uVar4 = FUN_0214dd50();
      FUN_0214dd60(uVar4,iVar3 + 0xb);
      FUN_0215cbcc(iVar1);
    }
  }
  return;
}

