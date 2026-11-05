
void FUN_027e51a0(int param_1)

{
  short *psVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  undefined8 uVar10;
  undefined1 auStack_220 [512];
  
  psVar1 = DAT_027f97f0;
  sVar9 = 0;
  iVar8 = *(int *)(param_1 + 4);
  uVar7 = *(uint *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x10);
  if (DAT_027f97f0[0x4e] == 0) {
    if (uVar5 < ((ushort)DAT_027f97f0[0x1e] + 0x1f & 0xffffffe0)) {
      sVar9 = 6;
    }
    if (DAT_027f97f0[0xc4] == 0) {
      uVar2 = ((ushort)DAT_027f97f0[0x1f] + 0xc) * (uint)(ushort)DAT_027f97f0[0x7c] + 0x29;
    }
    else {
      uVar2 = (ushort)DAT_027f97f0[0x1f] + 0x51;
    }
    if (uVar7 < (uVar2 & 0xffffffe0)) {
      sVar9 = 6;
    }
  }
  if ((DAT_027f97f0[0x73] == 2) &&
     (((uint)(ushort)DAT_027f97f0[0xfb] & (1 << (*(ushort *)(DAT_027f97ec + 0x46) & 0xff)) >> 1) ==
      0)) {
    sVar9 = 6;
  }
  if (sVar9 == 0) {
    if (*(int *)(DAT_027f97f0 + 6) != 0) {
      psVar1[6] = 0;
      psVar1[7] = 0;
      FUN_027e6d04(0xffff);
    }
    FUN_027e7cc4();
    FUN_027e8458(param_1 + 0x14,0);
    uVar4 = OS_DisableInterrupts();
    if ((ushort)(*psVar1 - 7U) < 2) {
      psVar1[0x42] = 0;
      psVar1[0x2f] = 0;
      psVar1[0x30] = 1;
      psVar1[0x44] = 0;
      psVar1[0x4f] = 0;
      psVar1[0x50] = 0x3c;
      psVar1[0x39a] = 0;
      psVar1[0x39b] = 0;
      psVar1[0x45] = 0;
      psVar1[0x46] = 0;
      psVar1[0x47] = 0;
      psVar1[0x48] = 0;
      psVar1[0x33] = 0;
      *(int *)(psVar1 + 0x3a) = iVar8;
      psVar1[0x39] = (short)uVar7;
      *(uint *)(psVar1 + 0x3c) = iVar8 + uVar7;
      psVar1[0x38] = 0;
      *(undefined4 *)(psVar1 + 0x3e) = uVar6;
      psVar1[0x40] = (short)uVar5;
      psVar1[0x31] = 0;
      psVar1[0x32] = 0;
      psVar1[0x34] = 0;
      psVar1[0x35] = 0;
      psVar1[0x5f] = -1;
      psVar1[0x60] = 1;
      uVar10 = FUN_037fd6ac();
      iVar8 = 0;
      do {
        *(uint *)(psVar1 + iVar8 * 4 + 0x39c) = (uint)uVar10 | 1;
        *(int *)(psVar1 + iVar8 * 4 + 0x39e) = (int)((ulonglong)uVar10 >> 0x20);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x10);
      FUN_027e01d8();
      psVar1[0x67] = 0;
      FUN_027e66b8();
      if (*psVar1 == 8) {
        *psVar1 = 10;
      }
      else if (*psVar1 == 7) {
        *psVar1 = 9;
      }
      puVar3 = (undefined2 *)FUN_03808074();
      *puVar3 = 0xe;
      puVar3[1] = 0;
      puVar3[2] = 10;
      FUN_038080d0();
      psVar1[6] = 1;
      psVar1[7] = 0;
      OS_RestoreInterrupts(uVar4);
      iVar8 = FUN_027e2350(auStack_220,1);
      if (*(short *)(iVar8 + 4) != 0) {
        puVar3 = (undefined2 *)FUN_03808074();
        *puVar3 = 0xe;
        puVar3[1] = 1;
        puVar3[2] = 0x216;
        puVar3[3] = *(undefined2 *)(iVar8 + 4);
        FUN_038080d0();
      }
    }
    else {
      OS_RestoreInterrupts();
      puVar3 = (undefined2 *)FUN_03808074();
      *puVar3 = 0xe;
      puVar3[1] = 3;
      puVar3[2] = 10;
      FUN_038080d0();
    }
  }
  else {
    puVar3 = (undefined2 *)FUN_03808074();
    *puVar3 = 0xe;
    puVar3[1] = sVar9;
    puVar3[2] = 10;
    FUN_038080d0();
  }
  return;
}

