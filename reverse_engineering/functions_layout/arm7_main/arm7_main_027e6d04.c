
void FUN_027e6d04(ushort param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  ushort *puVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  int local_48;
  int local_44;
  
  iVar6 = DAT_027f97f0;
  iVar12 = DAT_027f97f0 + 0x2f8;
  uVar3 = ~param_1 & *(ushort *)(DAT_027f97f0 + 0x182);
  FUN_037fce24(DAT_027f97f0 + 0x71c);
  local_48 = 0;
  do {
    local_44 = 0;
    puVar10 = (ushort *)(iVar6 + 0x70c);
    do {
      uVar1 = *puVar10;
      uVar4 = 0xffff;
      puVar5 = puVar10;
      while (uVar13 = (uint)uVar1, uVar13 != 0xffff) {
        puVar11 = (ushort *)(iVar12 + uVar13 * 0x20);
        puVar11[3] = puVar11[3] & uVar3;
        puVar11[5] = puVar11[5] & uVar3;
        if (puVar11[3] == 0) {
          puVar7 = (undefined2 *)FUN_03808074();
          *puVar7 = 0x81;
          puVar7[1] = 0;
          puVar7[4] = 0x14;
          puVar7[5] = puVar11[1];
          puVar7[6] = puVar11[2];
          puVar7[7] = puVar11[3];
          puVar7[8] = puVar11[4];
          puVar7[0xc] = puVar11[7];
          *(undefined4 *)(puVar7 + 10) = *(undefined4 *)(puVar11 + 10);
          *(undefined4 *)(puVar7 + 0xe) = *(undefined4 *)(puVar11 + 0xc);
          *(undefined4 *)(puVar7 + 0x10) = *(undefined4 *)(puVar11 + 0xe);
          puVar7[0xd] = puVar11[8];
          uVar2 = *(undefined2 *)(iVar6 + 0x30);
          uVar8 = *(undefined2 *)(iVar6 + 0x32);
          if (*(short *)(iVar6 + 0x188) == 0) {
            uVar9 = uVar2;
          }
          else {
            uVar9 = uVar8;
          }
          puVar7[0x12] = uVar9;
          if (*(short *)(iVar6 + 0x188) != 0) {
            uVar8 = uVar2;
          }
          puVar7[0x13] = uVar8;
          FUN_038080d0();
          if (*puVar11 == 0xffff) {
            puVar10[1] = (ushort)uVar4;
          }
          *puVar5 = *puVar11;
          *puVar11 = 0xffff;
          if (*(ushort *)(iVar6 + 0x6fa) == 0xffff) {
            *(ushort *)(iVar6 + 0x6f8) = uVar1;
          }
          else {
            *(ushort *)(iVar12 + (uint)*(ushort *)(iVar6 + 0x6fa) * 0x20) = uVar1;
          }
          *(ushort *)(iVar6 + 0x6fa) = uVar1;
          uVar13 = uVar4;
        }
        uVar4 = uVar13;
        if (uVar13 == 0xffff) {
          uVar1 = *puVar10;
          puVar5 = puVar10;
        }
        else {
          uVar1 = *(ushort *)(iVar12 + uVar13 * 0x20);
          puVar5 = (ushort *)(iVar12 + uVar13 * 0x20);
        }
      }
      puVar10 = puVar10 + 2;
      local_44 = local_44 + 1;
    } while (local_44 < 4);
    local_48 = local_48 + 1;
  } while (local_48 < 2);
  FUN_037fcdb4(iVar6 + 0x71c);
  return;
}

