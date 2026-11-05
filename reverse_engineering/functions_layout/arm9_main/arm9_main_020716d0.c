
void FUN_020716d0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_020716b0();
  if (iVar1 != 0) {
    iVar1 = (param_1 >> 5) * 4;
    *(uint *)(iVar1 + 0x20b0d18) = *(uint *)(iVar1 + 0x20b0d18) & ~(1 << (param_1 & 0x1f));
    DAT_020b02ac = 1;
    FUN_02073114(iVar1 + 0xa60,4,0x20b0d18,iVar1,param_4);
  }
  return;
}

