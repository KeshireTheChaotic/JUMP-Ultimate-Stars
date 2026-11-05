
void FUN_02196420(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_02196970(param_2,param_1 + 0x10,8);
  uVar1 = *(uint *)(param_1 + 0x10) >> 3 & 0x3f;
  if (uVar1 < 0x38) {
    iVar2 = 0x38 - uVar1;
  }
  else {
    iVar2 = 0x78 - uVar1;
  }
  FUN_02196474(param_1,&DAT_021a6fc4,iVar2);
  FUN_02196474(param_1,param_2,8);
  FUN_02196970(param_2,param_1,0x10);
  return;
}

