
void FUN_02167a68(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 != 0) {
    iVar1 = func_0x02199e58();
    if (iVar1 == 0) {
      func_0x021bac28(*(undefined4 *)(iVar2 + 0x40008),0x25,0,0,0,0,0,0);
      while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar2 + 0x40008)), iVar1 == 0) {
        (*DAT_020a0e18)();
      }
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02167b5c);
    }
    else {
      FUN_0206dcdc(0);
      FUN_02073284();
      FUN_02060c84();
      FUN_020609f4(4);
      FUN_020609e4(4);
      func_0x02175af8(2);
      FUN_02157418(iVar2,0,0x10);
      FUN_02042d14();
      (*DAT_020a0e18)();
      (*DAT_020a0e18)();
      FUN_0206dcec(1);
    }
  }
  return;
}

