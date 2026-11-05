
undefined4 FUN_02155f14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x021a3264();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xa8) == '\0') {
      if (((*(int *)(param_1 + 0xb4) == 0) || (*(char *)(param_1 + 0xa9) != '\0')) ||
         (iVar1 = func_0x0219af84(), iVar1 == 0)) {
        uVar2 = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
        func_0x0219d6c4();
        FUN_021586bc(*(undefined4 *)(param_1 + 0xa4),1);
        uVar2 = FUN_021586a4(*(undefined4 *)(param_1 + 0xa4));
        FUN_0207342c(0x78,0xb);
        func_0x021bac28(uVar2,0x51,0,0,0,0,0,0);
        while (iVar1 = func_0x021bad2c(uVar2), iVar1 == 0) {
          (*DAT_020a0e18)();
        }
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

