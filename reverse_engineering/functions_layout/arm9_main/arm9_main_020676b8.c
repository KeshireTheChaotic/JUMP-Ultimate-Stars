
undefined4 FUN_020676b8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;
  
  DAT_020afbf4 = (undefined4 *)(*(code *)*param_1)(1,0x18);
  MIi_CpuClear32(0,DAT_020afbf4,0x18);
  puVar1 = DAT_020afbf4;
  *DAT_020afbf4 = *param_1;
  puVar1[1] = param_1[1];
  *(undefined1 *)((int)puVar1 + 9) = 1;
  *(undefined1 *)((int)puVar1 + 0x16) = 1;
  *(undefined1 *)(puVar1 + 2) = 1;
  DAT_020afbe4 = FUN_02067524(0x10,0xd18);
  DAT_020afbe8 = FUN_02067524(2,0x2300);
  DAT_020afbec = FUN_02067524(4,0x58);
  DAT_020afbf0 = (undefined4 *)FUN_02067524(8,0xc);
  MIi_CpuClear32(0,DAT_020afbe4,0xd18);
  MIi_CpuClear32(0,DAT_020afbe8,0x2300);
  MIi_CpuClear32(0,DAT_020afbec,0x58);
  MIi_CpuClear32(0,DAT_020afbf0,0xc);
  iVar2 = DAT_020afbe4;
  *(undefined1 *)(DAT_020afbe4 + 0xd0a) = *(undefined1 *)(param_1 + 2);
  pbVar3 = (byte *)(iVar2 + 0xd0b);
  *pbVar3 = *pbVar3 & 0xfc | *(byte *)((int)param_1 + 9) & 3;
  puVar1 = DAT_020afbf0;
  *DAT_020afbf0 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = 0;
  pbVar3 = (byte *)(iVar2 + 0xd0c);
  *pbVar3 = *pbVar3 & 0xf0 | *(byte *)((int)param_1 + 10) & 0xf;
  *pbVar3 = *pbVar3 & 0xcf | (*(byte *)((int)param_1 + 0xb) & 3) << 4;
  FUN_0206a58c();
  iVar2 = func_0x02199540(DAT_020afbe8,0x2300);
  if ((iVar2 == 1) || (3 < iVar2)) {
    FUN_02067454();
    return 0;
  }
  return 1;
}

