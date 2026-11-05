
void FUN_020715f4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_020715d4();
  if (iVar1 != 0) {
    iVar1 = (param_1 >> 5) * 4;
    *(uint *)(iVar1 + 0x20b0d04) = *(uint *)(iVar1 + 0x20b0d04) & ~(1 << (param_1 & 0x1f));
    DAT_020b02ac = 1;
    FUN_02073114(iVar1 + 0xa4c,4,0x20b0d04,iVar1,param_4);
  }
  return;
}

