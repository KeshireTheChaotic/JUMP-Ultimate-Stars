
undefined4 FUN_0214f8c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == -1) {
    return 0;
  }
  uVar1 = FUN_0200d12c(*(int *)(param_1 + 0xc) - iVar2,0x90,iVar2,param_4,param_4);
  return uVar1;
}

