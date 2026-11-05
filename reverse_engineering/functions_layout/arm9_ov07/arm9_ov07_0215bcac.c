
undefined4 FUN_0215bcac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x74) + 0xc);
  if (iVar1 < 0) {
    FUN_0215bedc(param_1,*(undefined4 *)(param_1 + 0x5c),iVar1,param_4,param_4);
    return 0;
  }
  *(int *)(param_1 + 0x84) = iVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0xc) = 0xffffffff;
  return 1;
}

