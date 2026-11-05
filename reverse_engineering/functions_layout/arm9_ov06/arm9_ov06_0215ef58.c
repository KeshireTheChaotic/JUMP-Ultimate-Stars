
undefined4 FUN_0215ef58(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_02159930();
  if (iVar1 != 0) {
    return 0;
  }
  if ((((*(uint *)(param_1 + 0x6c) & 0xc) == 0) && (iVar1 = FUN_02159910(param_1), iVar1 == 0)) &&
     (iVar1 = FUN_021599d0(param_1), iVar1 == 0)) {
    return 0;
  }
  FUN_0215efc0(param_1,param_2,1);
  return 1;
}

