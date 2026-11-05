
undefined4 FUN_027e6f14(int param_1,ushort param_2)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  short *psVar5;
  undefined2 *puVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort uVar12;
  int local_4c;
  undefined4 local_48;
  uint local_44;
  
  psVar5 = DAT_027f97f0;
  local_48 = 0;
  if (*DAT_027f97f0 == 9) {
    bVar3 = true;
  }
  else {
    if (*DAT_027f97f0 != 10) {
      return 0;
    }
    bVar3 = false;
  }
  FUN_037fce24(DAT_027f97f0 + 0x38e);
  if (*(int *)(psVar5 + 0x39a) == 0) {
    FUN_037fcdb4(psVar5 + 0x38e);
    return 0;
  }
  if (bVar3) {
    OS_DisableInterrupts();
    uVar12 = psVar5[0xc1];
    OS_RestoreInterrupts();
  }
  else {
    uVar12 = 1;
  }
  local_4c = 0;
  puVar11 = (ushort *)(psVar5 + 0x37e);
  do {
    local_44 = 0xffff;
    uVar1 = *puVar11;
    uVar9 = 0xffff;
    while (uVar4 = (uint)uVar1, uVar4 != 0xffff) {
      puVar10 = (ushort *)(psVar5 + uVar4 * 0x10 + 0x17c);
      if (param_1 == 0) {
        puVar10[4] = puVar10[4] | puVar10[5] & ~param_2;
        puVar10[3] = puVar10[3] & ~puVar10[4];
      }
      puVar10[3] = puVar10[3] & uVar12;
      puVar10[5] = 0;
      if ((puVar10[3] == 0) || (((puVar10[1] & 8) == 0 && (puVar10[9] == 0)))) {
        puVar6 = (undefined2 *)FUN_03808074();
        *puVar6 = 0x81;
        if (puVar10[3] == 0) {
          puVar6[1] = 0;
        }
        else {
          puVar6[1] = 0xf;
        }
        puVar6[4] = 0x14;
        puVar6[5] = puVar10[1];
        puVar6[6] = puVar10[2];
        puVar6[7] = puVar10[3];
        puVar6[8] = puVar10[4];
        puVar6[0xc] = puVar10[7];
        *(undefined4 *)(puVar6 + 10) = *(undefined4 *)(puVar10 + 10);
        *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(puVar10 + 0xc);
        *(undefined4 *)(puVar6 + 0x10) = *(undefined4 *)(puVar10 + 0xe);
        puVar6[0xd] = puVar10[8];
        sVar2 = psVar5[0x18];
        sVar7 = psVar5[0x19];
        if (psVar5[0xc4] == 0) {
          sVar8 = sVar2;
        }
        else {
          sVar8 = sVar7;
        }
        puVar6[0x12] = sVar8;
        if (psVar5[0xc4] != 0) {
          sVar7 = sVar2;
        }
        puVar6[0x13] = sVar7;
        FUN_038080d0();
        if (*puVar10 == 0xffff) {
          puVar11[1] = 0xffff;
        }
        *puVar11 = *puVar10;
        *puVar10 = 0xffff;
        if ((ushort)psVar5[0x37d] == 0xffff) {
          psVar5[0x37c] = uVar1;
        }
        else {
          psVar5[(uint)(ushort)psVar5[0x37d] * 0x10 + 0x17c] = uVar1;
        }
        psVar5[0x37d] = uVar1;
      }
      else {
        local_48 = 1;
        if (puVar10[9] != 0) {
          puVar10[9] = puVar10[9] - 1;
        }
        if (*puVar10 == 0xffff) {
          puVar11[1] = 0xffff;
        }
        *puVar11 = *puVar10;
        *puVar10 = 0xffff;
        if (uVar9 == 0xffff) {
          local_44 = uVar4;
        }
        else {
          psVar5[uVar9 * 0x10 + 0x17c] = uVar1;
        }
        uVar9 = uVar4;
      }
      uVar1 = *puVar11;
    }
    if (uVar9 != 0xffff) {
      psVar5[uVar9 * 0x10 + 0x17c] = psVar5[local_4c * 2 + 0x386];
      if (psVar5[local_4c * 2 + 0x387] == -1) {
        psVar5[local_4c * 2 + 0x387] = (short)uVar9;
      }
      psVar5[local_4c * 2 + 0x386] = (short)local_44;
    }
    puVar11 = puVar11 + 2;
    local_4c = local_4c + 1;
  } while (local_4c < 4);
  psVar5[0x39a] = 0;
  psVar5[0x39b] = 0;
  FUN_037fcdb4(psVar5 + 0x38e);
  return local_48;
}

