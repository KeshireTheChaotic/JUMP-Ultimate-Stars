
void FUN_02071874(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_1 >> 5) * 4;
  uVar2 = 1 << (param_1 & 0x1f);
  if ((uVar2 & *(uint *)(iVar1 + 0x20b0d40)) != 0) {
    *(uint *)(iVar1 + 0x20b0d40) = ~uVar2 & *(uint *)(iVar1 + 0x20b0d40);
    DAT_020b02ac = 1;
    FUN_02073114(iVar1 + 0xa88,4,0x20b0d40,iVar1,param_4);
  }
  return;
}

