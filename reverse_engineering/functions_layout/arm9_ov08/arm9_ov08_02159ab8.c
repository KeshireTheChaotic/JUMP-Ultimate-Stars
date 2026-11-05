
void FUN_02159ab8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [28];
  
  iVar1 = FUN_021576e4();
  uVar2 = FUN_021665f8(0,0);
  DAT_0216e754 = 0;
  DAT_0216e750 = 0;
  FUN_02159a58();
  MIi_CpuClear16(0,auStack_28,0x16);
  MIi_CpuCopy16(iVar1 + 2,auStack_28,(uint)*(byte *)(iVar1 + 1) << 1);
  FUN_02166408(uVar2,(uint)DAT_0216a958,(uint)DAT_0216a95a,(uint)DAT_0216a95c - (uint)DAT_0216a958,
               (uint)DAT_0216a95e - (uint)DAT_0216a95a,2,0x480,auStack_28);
  FUN_02166370(uVar2);
  FUN_02157700(0x2159865);
  FUN_02157088(0x2159a31);
  return;
}

