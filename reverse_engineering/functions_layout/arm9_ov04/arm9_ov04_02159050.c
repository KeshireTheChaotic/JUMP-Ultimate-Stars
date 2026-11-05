
void FUN_02159050(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  iVar3 = *(int *)(param_1 + 4);
  uStack_10 = param_4;
  iVar2 = FUN_02151d90(param_1,0x31305053);
  bVar1 = *(byte *)(*(int *)(*(int *)(iVar2 + 4) + 100) + 0x10);
  if (((char)bVar1 < '\0') && ((bVar1 & 3) >> 1 != 0)) {
    FUN_0207342c(0x78,3);
  }
  local_18 = (int)*(short *)(iVar3 + 0xa2) << 0xc;
  local_14 = (int)*(short *)(iVar3 + 0xa0) << 0xc;
  FUN_0214e1b8(param_1,&local_14,&local_18);
  return;
}

