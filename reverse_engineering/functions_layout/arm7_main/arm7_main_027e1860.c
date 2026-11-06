
void FUN_027e1860(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined2 uVar13;
  uint uVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  bool bVar18;
  undefined8 uVar19;
  int local_3c;
  
  iVar2 = DAT_027f97f0;
  if (*(int *)(DAT_027f97f0 + 0xc) != 0) {
    if ((*(short *)(param_1 + 0x12) == 0) &&
       ((*(short *)(DAT_027f97f0 + 0x66) != 1 || (*(short *)(param_1 + 0x10) == 0)))) {
      if (*(short *)(DAT_027f97f0 + 0x66) != 0) {
        *(undefined2 *)(DAT_027f97f0 + 0x66) = 0;
      }
      puVar16 = *(ushort **)(iVar2 + (uint)*(ushort *)(iVar2 + 0x70) * 4 + 0x74);
      uVar9 = (uint)*(ushort *)(param_1 + 0x16) * (uint)*(ushort *)(param_1 + 0x14) + 10;
      if (*(ushort *)(iVar2 + 0x72) < uVar9) {
        uVar9 = (uint)*(ushort *)(iVar2 + 0x72);
      }
      FUN_037fe788(param_1 + 0x10,puVar16,uVar9);
      FUN_027e16c4(param_1,*puVar16,*(undefined2 *)(iVar2 + 0x92));
      uVar19 = OS_GetTick();
      iVar7 = (int)((ulonglong)uVar19 >> 0x20);
      uVar9 = (uint)uVar19 | 1;
      puVar15 = puVar16 + 5;
      uVar17 = (uint)*puVar16;
      local_3c = 0;
      for (uVar3 = 0; uVar3 < puVar16[2]; uVar3 = uVar3 + 1) {
        uVar14 = (uint)puVar15[2];
        uVar1 = *puVar15;
        if ((uVar14 != 0) && (uVar14 < 0x10)) {
          if ((uVar1 < 2) || (uVar1 == 0xffff)) {
            if (uVar1 == 0) {
              iVar10 = iVar2 + uVar14 * 8;
              uVar4 = *(uint *)(iVar10 + 0x738);
              iVar10 = *(int *)(iVar10 + 0x73c);
              uVar17 = uVar17 | 1 << (uVar14 & 0xff);
              uVar11 = *(uint *)(iVar2 + 0x7b8);
              uVar8 = *(uint *)(iVar2 + 0x7bc);
              if ((uVar8 != 0 || uVar11 != 0) && (iVar10 != 0 || uVar4 != 0)) {
                uVar12 = iVar7 - (iVar10 + (uint)(uVar9 < uVar4));
                bVar18 = uVar8 <= uVar12;
                if (uVar12 == uVar8) {
                  bVar18 = uVar11 <= uVar9 - uVar4;
                }
                if (bVar18 && (uVar12 != uVar8 || uVar9 - uVar4 != uVar11)) {
                  puVar5 = (undefined4 *)FUN_027e0134();
                  iVar10 = iVar2 + uVar14 * 8;
                  *(undefined4 *)(iVar10 + 0x738) = 0;
                  *(undefined4 *)(iVar10 + 0x73c) = 0;
                  iVar10 = local_3c;
                  if (puVar5 != (undefined4 *)0x0) {
                    *puVar5 = 0x25;
                    puVar5[1] = 1 << (uVar14 & 0xff);
                    puVar5[2] = 0x8001;
                    iVar10 = FUN_037fcc6c(&DAT_027f8328,puVar5,0);
                  }
                  if (iVar10 == 0) {
                    puVar6 = (undefined2 *)FUN_03808074();
                    *puVar6 = 0x80;
                    puVar6[1] = 8;
                    puVar6[2] = 0x16;
                    puVar6[3] = 0x25;
                    FUN_038080d0();
                  }
                }
              }
            }
          }
          else {
            *puVar15 = uVar1 - 2;
            *(ushort *)(iVar2 + 0x86) = *(ushort *)(iVar2 + 0x86) | (ushort)(1 << (uVar14 & 0xff));
            iVar10 = iVar2 + uVar14 * 8;
            *(uint *)(iVar10 + 0x738) = uVar9;
            *(int *)(iVar10 + 0x73c) = iVar7;
            if ((ushort)(uVar1 - 2) != 0) {
              FUN_027e6a68(uVar14,puVar15[4],puVar15 + 5,uVar1 - 2,puVar16);
            }
          }
        }
        puVar15 = (ushort *)((int)puVar15 + (uint)puVar16[3]);
      }
      FUN_027e6f14(0,uVar17 & 0xffff);
      uVar3 = *puVar16;
      puVar6 = (undefined2 *)FUN_03808074();
      *puVar6 = 0xe;
      puVar6[1] = 0;
      puVar6[2] = 0xb;
      *(ushort **)(puVar6 + 4) = puVar16;
      FUN_038080d0();
      *(ushort *)(iVar2 + 0x70) = *(ushort *)(iVar2 + 0x70) ^ 1;
      OS_DisableInterrupts();
      if (uVar3 == 0) {
        *(short *)(iVar2 + 0x62) = *(short *)(iVar2 + 0x62) + -1;
      }
      if (0 < *(short *)(iVar2 + 100)) {
        *(short *)(iVar2 + 100) = *(short *)(iVar2 + 100) + -1;
      }
      if ((*(short *)(iVar2 + 0x62) < 1) || (*(short *)(iVar2 + 100) < 1)) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      OS_RestoreInterrupts();
      if (bVar18) {
        if (uVar3 != 0) {
          uVar13 = *(undefined2 *)(param_1 + 0x10);
        }
        else {
          uVar13 = 0xffff;
        }
        if (*(short *)(iVar2 + 0x44) == 0) {
          FUN_027e1744(uVar13);
        }
        else {
          FUN_037fd998(&DAT_0380bc3c);
          FUN_037fdaa4(&DAT_0380bc3c,*(undefined4 *)(iVar2 + 0x48),*(undefined4 *)(iVar2 + 0x4c),
                       &LAB_027e17cc,uVar13);
        }
      }
    }
    else {
      FUN_027e17e0();
    }
  }
  return;
}

