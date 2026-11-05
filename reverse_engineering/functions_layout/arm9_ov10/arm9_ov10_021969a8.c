
void FUN_021969a8(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_021970d8(param_2,param_1 + 0x14,8);
  uVar1 = *(uint *)(param_1 + 0x18) >> 3 & 0x3f;
  if (uVar1 < 0x38) {
    iVar2 = 0x38 - uVar1;
  }
  else {
    iVar2 = 0x78 - uVar1;
  }
  FUN_021969fc(param_1,FUN_021a7104,iVar2);
  FUN_021969fc(param_1,param_2,8);
  FUN_021970d8(param_2,param_1,0x14);
  return;
}

