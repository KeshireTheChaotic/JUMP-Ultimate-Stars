
void FUN_021669e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(DAT_0214ccf8 + 0xc) != 0) {
    iVar2 = 0;
    iVar4 = 0;
    OS_GetTick();
    if (param_1 != 0) {
      iVar4 = 0x14;
    }
    while (iVar1 = func_0x02175918(), iVar1 == 0) {
      if ((0 < iVar4) && (iVar4 = iVar4 + -1, iVar4 < 1)) {
        func_0x021bac28(param_1,0x24,0,0,0,0,0,0,param_4);
        iVar2 = param_1;
      }
      (*DAT_020a0e18)();
    }
    OS_GetTick();
    uVar3 = 0;
    *(undefined4 *)(DAT_0214ccf8 + 0xc) = 0;
    if (iVar2 != 0) {
      do {
        (*DAT_020a0e18)();
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x1e);
      func_0x021bace0(iVar2);
      while (iVar4 = func_0x021bacf4(iVar2), iVar4 != 0) {
        (*DAT_020a0e18)();
      }
    }
    FUN_02086c24();
    FUN_02087980();
  }
  return;
}

