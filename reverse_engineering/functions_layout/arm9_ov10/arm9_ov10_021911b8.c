
undefined4 FUN_021911b8(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_02191234(param_1,param_2,param_4);
  iVar2 = FUN_02191234(param_3 + 0xc,8,uVar1);
  uVar3 = iVar2 + param_2;
  if ((uVar3 & 0x10000) != 0) {
    uVar3 = uVar3 + 1 & 0xffff;
  }
  if (uVar3 == 0xffff) {
    return 0;
  }
  return 1;
}

