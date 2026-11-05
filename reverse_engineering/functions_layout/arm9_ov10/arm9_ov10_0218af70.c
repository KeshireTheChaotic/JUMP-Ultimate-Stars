
undefined4 FUN_0218af70(int param_1,undefined1 param_2,int param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = FUN_02189ee0(param_1 + 0x50);
  if (iVar2 < param_3) {
    iVar2 = FUN_0218bca4(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    *param_4 = 1;
    return 1;
  }
  iVar2 = FUN_0218b018(param_1,*(undefined2 *)(param_1 + 100),param_3);
  if (iVar2 != 0) {
    FUN_02189e18(param_1 + 0x50,&DAT_021a66a8,2);
    FUN_02189eac(param_1 + 0x50,param_2);
    uVar1 = *(undefined2 *)(param_1 + 100);
    *(short *)(param_1 + 100) = *(short *)(param_1 + 100) + 1;
    FUN_02189e6c(param_1 + 0x50,uVar1);
    FUN_02189e6c(param_1 + 0x50,*(undefined2 *)(param_1 + 0x66));
    *param_4 = 0;
    return 1;
  }
  iVar2 = FUN_0218bca4(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *param_4 = 1;
  return 1;
}

