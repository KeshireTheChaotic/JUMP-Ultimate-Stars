
void FUN_02156b18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(uint **)(DAT_0216e6e0 + 0x1c) & 0xff) - 0xc;
  uVar2 = (uint)DAT_0216a80e;
  if ((int)uVar2 < iVar1) {
    FUN_02156354(1);
    return;
  }
  FUN_02156354(1,uVar2,uVar2,param_4,(**(uint **)(DAT_0216e6e0 + 0x1c) & 0x1ff0000) >> 0x10,iVar1);
  FUN_02156354(2,0xc0);
  FUN_021677b8(param_1,0x2156ab9);
  return;
}

