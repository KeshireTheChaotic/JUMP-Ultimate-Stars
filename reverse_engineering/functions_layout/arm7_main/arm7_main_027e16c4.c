
void FUN_027e16c4(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)*(ushort *)(DAT_027f97f0 + 0xbe);
  if ((param_2 == 0) && (*(ushort *)(param_1 + 0x14) != 0)) {
    for (iVar4 = 0; iVar4 < (int)(uint)*(ushort *)(param_1 + 0x14); iVar4 = iVar4 + 1) {
      bVar1 = *(byte *)((uint)*(ushort *)(param_1 + 0x16) * iVar4 + param_1 + 0x1d);
      uVar2 = (int)(uint)bVar1 >> 2;
      if ((bVar1 & 2) == 0) {
        uVar2 = uVar2 + 0x19;
      }
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
    }
    *(short *)(DAT_027f97f0 + 0xbe) = (short)uVar3;
  }
  return;
}

