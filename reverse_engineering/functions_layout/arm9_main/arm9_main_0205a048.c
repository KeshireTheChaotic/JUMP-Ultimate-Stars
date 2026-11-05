
void FUN_0205a048(int param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  if (iVar5 == 0) {
    return;
  }
  if (*(short *)(param_1 + 2) != 0) {
    *(undefined2 *)(iVar5 + 0x81c) = 5;
    return;
  }
  uVar4 = *(ushort *)(param_1 + 4);
  if (0x15 < uVar4) {
    if (0x1a < uVar4) {
      return;
    }
    if (uVar4 < 0x19) {
      return;
    }
    if (uVar4 == 0x19) {
      return;
    }
    return;
  }
  if (0x14 < uVar4) {
    puVar3 = *(ushort **)(param_1 + 0xc);
    uVar4 = *(ushort *)(param_1 + 0x10);
    uVar1 = *puVar3;
    uVar2 = FUN_02057adc();
    if ((uVar4 != *(ushort *)(iVar5 + 0x814)) && (0x200 < uVar4)) {
      uVar4 = 0x200;
    }
    if (uVar4 < 4) {
      return;
    }
    if (((uint)uVar1 & 1 << (uVar2 & 0xff)) == 0) {
      return;
    }
    MIi_CpuCopy16(puVar3,iVar5 + (uint)*(ushort *)(iVar5 + 0x808) * 0x200,uVar4);
    *(short *)(iVar5 + (uint)*(ushort *)(iVar5 + 0x808) * 2 + 0x800) =
         (short)((int)(uint)*(ushort *)(param_1 + 0x1a) >> 1);
    *(ushort *)(iVar5 + 0x808) = *(short *)(iVar5 + 0x808) + 1U & 3;
    return;
  }
  if (9 < uVar4) {
    return;
  }
  if (uVar4 < 7) {
    return;
  }
  if (uVar4 == 7) {
    return;
  }
  return;
}

