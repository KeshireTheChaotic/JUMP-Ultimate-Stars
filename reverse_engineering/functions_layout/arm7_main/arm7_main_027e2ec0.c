
/* WARNING: Removing unreachable block (ram,0x027e305c) */

void FUN_027e2ec0(void)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  short *psVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  uint unaff_r10;
  undefined1 auStack_234 [6];
  undefined1 auStack_22e [6];
  undefined1 auStack_228 [516];
  
  psVar4 = DAT_027f97f0;
  bVar3 = false;
  uVar5 = OS_DisableInterrupts();
  if (*(int *)(psVar4 + 6) == 1) {
    psVar4[6] = 0;
    psVar4[7] = 0;
    bVar3 = true;
    FUN_027e6748();
    FUN_027e0238();
    if (*psVar4 == 10) {
      *psVar4 = 8;
    }
    else if (*psVar4 == 9) {
      *psVar4 = 7;
    }
  }
  if ((ushort)(*psVar4 - 7U) < 2) {
    uVar10 = (uint)(ushort)psVar4[0xc1];
    unaff_r10 = (uint)(*psVar4 == 7);
  }
  else {
    uVar10 = 0;
  }
  psVar4[0xc1] = 0;
  psVar4[0x43] = 0;
  psVar4[10] = 0;
  psVar4[0xb] = 0;
  psVar4[8] = 0;
  psVar4[9] = 0;
  psVar4[0xe] = 0;
  psVar4[0xf] = 0;
  psVar4[0x61] = 0;
  OS_RestoreInterrupts(uVar5);
  if (bVar3) {
    FUN_027e6d04(0xffff);
  }
  if (uVar10 != 0) {
    uVar9 = 0;
    do {
      if ((uVar10 & 1 << (uVar9 & 0xff)) != 0) {
        FUN_027e4a98(unaff_r10,uVar9 & 0xffff);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 0x10);
  }
  FUN_037fe6f4(psVar4 + 0x94,0,0x5a);
  iVar6 = FUN_027e2164(auStack_228);
  if (*(short *)(iVar6 + 4) != 0) {
    FUN_027e2e88(0x308);
    return;
  }
  uVar1 = *(ushort *)(iVar6 + 6);
  iVar6 = FUN_027e221c(auStack_228);
  if (*(short *)(iVar6 + 4) != 0) {
    FUN_027e2e88(0x284);
    return;
  }
  sVar2 = *(short *)(iVar6 + 6);
  if (uVar1 < 0x21) {
    if (0x1f < uVar1) goto LAB_027e3168;
    if (uVar1 == 0) goto LAB_027e318c;
    if ((0x12 < uVar1) || (uVar1 < 0x10)) goto LAB_027e3260;
    if (uVar1 != 0x10) {
      if ((uVar1 != 0x11) && (uVar1 != 0x12)) goto LAB_027e3260;
      if ((sVar2 == 0) && (iVar6 = FUN_027e20f0(auStack_228,0,0,0x14,1), *(short *)(iVar6 + 4) != 0)
         ) {
        FUN_027e2e88(0x309);
        return;
      }
      iVar6 = FUN_027e21ec(auStack_228);
      if (*(short *)(iVar6 + 4) != 0) {
        FUN_027e2e88(0x302);
        return;
      }
      *psVar4 = 2;
      goto LAB_027e3270;
    }
  }
  else {
    if (uVar1 < 0x31) {
      if (uVar1 != 0x30) {
LAB_027e3260:
        FUN_027e2e88(0x308,0);
        return;
      }
    }
    else if (uVar1 != 0x40) goto LAB_027e3260;
    if ((ushort)(sVar2 - 2U) < 2) {
      FUN_037fe788(psVar4 + 0xc5,auStack_234,6);
      for (iVar6 = 0; iVar6 < 2; iVar6 = iVar6 + 1) {
        iVar7 = FUN_027e2ad4(auStack_228,auStack_234,3);
        sVar2 = *(short *)(iVar7 + 4);
        if (sVar2 == 0) {
          *psVar4 = 3;
          break;
        }
        if ((sVar2 != 7) && (sVar2 != 0xc)) break;
      }
    }
    else if (sVar2 == 1) {
      FUN_037fe6f4(auStack_22e,0xff,6);
      iVar6 = FUN_027e2ad4(auStack_228,auStack_22e,3);
      if (*(short *)(iVar6 + 4) == 0) {
        *psVar4 = 3;
      }
    }
LAB_027e3168:
    iVar6 = FUN_027e2d80(auStack_228,1);
    if (*(short *)(iVar6 + 4) != 0) {
      FUN_027e2e88(0);
      return;
    }
LAB_027e318c:
    iVar6 = FUN_027e21ec(auStack_228);
    if (*(short *)(iVar6 + 4) != 0) {
      FUN_027e2e88(0x302);
      return;
    }
  }
  if (psVar4[0xf7] == 0) {
    iVar6 = FUN_027e24dc(auStack_228,1);
    if (*(short *)(iVar6 + 4) != 0) {
      FUN_027e2e88(0x20e);
      return;
    }
    psVar4[0xf7] = 1;
  }
  *psVar4 = 2;
LAB_027e3270:
  puVar8 = (undefined2 *)FUN_03808074();
  *puVar8 = 1;
  puVar8[1] = 0;
  FUN_038080d0();
  return;
}

