
void FUN_0214f8b4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  uint *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = param_3;
  puVar2 = param_1 + 1;
  *puVar2 = (uint)*(ushort *)(param_2 + 10);
  MIi_CpuCopy16(param_2 + 0xc,param_1 + 2,0x20);
  param_1[10] = (uint)*(ushort *)(param_2 + 0x36);
  MIi_CpuCopy16(param_2 + 4,param_1 + 0xd,6);
  iVar4 = 0;
  iVar5 = 0;
  puVar3 = &DAT_0216af9c;
  do {
    if ((*(ushort *)(param_2 + 0x30) & *puVar3) != 0) {
      *(char *)((int)puVar2 + iVar4 + 0x3c) = (char)puVar3[1];
      if ((*(ushort *)(param_2 + 0x2e) & *puVar3) != 0) {
        *(byte *)((int)puVar2 + iVar4 + 0x3c) = *(byte *)((int)puVar2 + iVar4 + 0x3c) | 0x80;
      }
      iVar4 = iVar4 + 1;
    }
    puVar3 = puVar3 + 2;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xc);
  param_1[0xf] = iVar4;
  param_1[0x14] = (uint)*(ushort *)(param_2 + 0x32);
  uVar1 = *(ushort *)(param_2 + 0x2c) & 3;
  if (uVar1 == 1) {
    param_1[0x15] = 1;
    return;
  }
  if (uVar1 == 2) {
    param_1[0x15] = 2;
    return;
  }
  param_1[0x15] = 0;
  return;
}

