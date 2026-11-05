
undefined4 FUN_02001e30(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = func_0x021937c4(param_1,3,0);
  if (param_2 == 0) {
    uVar1 = uVar1 | 4;
  }
  else {
    uVar1 = uVar1 & 0xfffffffb;
  }
  iVar2 = func_0x021937c4(param_1,4,uVar1);
  if (iVar2 == 0) {
    return 1;
  }
  return 0;
}

