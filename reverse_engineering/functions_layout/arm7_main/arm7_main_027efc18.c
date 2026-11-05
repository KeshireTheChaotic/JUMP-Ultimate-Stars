
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027efc18(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  
                    /* JUS-TAG hw={"WIRELESS":6}
                       io=["04808000","04808090","048080c0","048080c4","048080f8","04808118"] */
  iVar1 = _DAT_0380fff4;
  uVar8 = *(ushort *)(_DAT_0380fff4 + 0x690);
  bVar3 = true;
  *(undefined2 *)(param_2 + 2) = 1;
  if (*(short *)(iVar1 + 0x32e) == 1) {
    if (*(short *)(iVar1 + 0x468) == 0) {
      puVar11 = *(undefined2 **)(iVar1 + 0x470);
      if ((*(ushort *)(param_1 + 0x10) & 0x8000) != 0) {
        if ((*(ushort *)(param_1 + 0x10) & 2) == 0) {
          *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(iVar1 + 0x4c0);
        }
        if ((*(ushort *)(param_1 + 0x10) & 4) == 0) {
          *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(iVar1 + 0x4cc);
        }
        if ((*(ushort *)(param_1 + 0x10) & 8) == 0) {
          *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(iVar1 + 0x4c2);
        }
        if ((*(ushort *)(param_1 + 0x10) & 0x10) == 0) {
          *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(iVar1 + 0x4c8);
          bVar3 = false;
        }
      }
      if (*(ushort *)(param_1 + 0x1c) < 0x205) {
        iVar12 = 0;
        for (uVar7 = 2; uVar7 != 0; uVar7 = uVar7 << 1) {
          if ((*(ushort *)(param_1 + 0x16) & uVar7) != 0) {
            iVar12 = iVar12 + 1;
          }
        }
        *(undefined2 *)(iVar1 + 0x4c0) = *(undefined2 *)(param_1 + 0x14);
        uVar7 = *(ushort *)(param_1 + 0x14);
        if ((uVar7 & 0x8000) == 0) {
          bVar14 = (uVar8 & 2) != 0;
          if (bVar14) {
            sVar5 = 2;
            sVar4 = 6;
          }
          else {
            sVar5 = 0;
            sVar4 = sVar5;
          }
          uVar2 = (uint)bVar14;
          uVar13 = uVar7 + uVar2;
          if (uVar2 + 0x206 < uVar13) {
            return 5;
          }
          *(short *)(param_1 + 0x14) = sVar5 + (short)uVar13 * 4 + 0xd0;
          puVar11[7] = sVar4 + 0xea;
        }
        else {
          *(ushort *)(param_1 + 0x14) = uVar7 & 0x7fff;
          uVar13 = *(ushort *)(param_1 + 0x14) - 0xd0 >> 2;
          puVar11[7] = 0xea;
          if (0x10000 < uVar13) {
            return 5;
          }
        }
        uVar13 = uVar13 + 9 & 0xfffffffe;
        uVar6 = FUN_037f8910(iVar1 + 0x188,uVar13 * iVar12 + 0x1a);
        *(undefined4 *)(iVar1 + 0x4bc) = uVar6;
        if (*(int *)(iVar1 + 0x4bc) == 0) {
          uVar6 = 8;
        }
        else {
          *(undefined2 *)(iVar1 + 0x468) = 1;
          *(short *)(iVar1 + 0x46a) = *(short *)(iVar1 + 0x46a) + 1;
          *(undefined2 *)(iVar1 + 0x4c2) = *(undefined2 *)(param_1 + 0x18);
          *(undefined2 *)(iVar1 + 0x4c4) = *(undefined2 *)(param_1 + 0x16);
          *(undefined2 *)(iVar1 + 0x4c6) = 0;
          *(undefined2 *)(iVar1 + 0x4c8) = *(undefined2 *)(param_1 + 0x1c);
          *(undefined2 *)(iVar1 + 0x4ca) = *(undefined2 *)(param_1 + 0x12);
          *puVar11 = 0;
          puVar11[1] = *(undefined2 *)(param_1 + 0x16);
          puVar11[2] = 0;
          puVar11[4] = 0x14;
          puVar11[5] = *(short *)(param_1 + 0x1c) + 0x22;
          puVar11[6] = 0x228;
          puVar11[7] = (*(short *)(param_1 + 0x14) + 10) * (short)iVar12 + puVar11[7];
          FUN_027ea048(puVar11 + 8,&DAT_027f7cdc,iVar1 + 0x3a8,iVar1 + 0x324);
          if (((*(ushort *)(param_1 + 0x10) & 0x8000) == 0) || (puVar11[0x11] == -1)) {
            uVar7 = 0;
            puVar11[0x11] = 0xffff;
          }
          else {
            uVar7 = 0x4000;
          }
          puVar11[0x12] = *(undefined2 *)(param_1 + 0x14);
          puVar11[0x13] = *(undefined2 *)(param_1 + 0x16);
          puVar11[0x14] = *(undefined2 *)(param_1 + 0x1e);
          if ((bVar3) && (*(short *)(param_1 + 0x1c) != 0)) {
            FUN_027e9e08();
            FUN_027e9474(puVar11 + 0x15,*(undefined4 *)(param_1 + 0x20),
                         *(undefined2 *)(param_1 + 0x1c));
          }
          if ((uVar8 & 4) != 0) {
            puVar9 = (undefined2 *)((int)puVar11 + *(ushort *)(param_1 + 0x1c) + 0x2d & 0xfffffffc);
            *puVar9 = 0xb6b8;
            puVar9[1] = 0x1d46;
          }
          *(undefined2 *)(*(int *)(iVar1 + 0x4bc) + 0xc) = 0x184;
          *(short *)(*(int *)(iVar1 + 0x4bc) + 0xe) = (short)(uVar13 * iVar12 + 0xb >> 1);
          *(undefined2 *)(*(int *)(iVar1 + 0x4bc) + 0x10) = *(undefined2 *)(param_1 + 0x16);
          *(short *)(*(int *)(iVar1 + 0x4bc) + 0x14) = (short)iVar12;
          *(short *)(*(int *)(iVar1 + 0x4bc) + 0x16) = (short)uVar13;
          *(undefined2 *)(*(int *)(iVar1 + 0x4bc) + 0x18) = 0;
          puVar9 = (undefined2 *)(*(int *)(iVar1 + 0x4bc) + 0x1a);
          sVar5 = 1;
          for (uVar8 = 2; uVar8 != 0; uVar8 = uVar8 << 1) {
            if ((*(ushort *)(param_1 + 0x16) & uVar8) != 0) {
              *puVar9 = 0xffff;
              puVar9[1] = 0;
              puVar9[3] = 0;
              puVar9[2] = sVar5;
              puVar9 = (undefined2 *)((int)puVar9 + uVar13);
            }
            sVar5 = sVar5 + 1;
          }
          _DAT_048080c4 = *(undefined2 *)(param_1 + 0x14);
          _DAT_048080c0 = puVar11[7];
          sVar5 = *(short *)(param_1 + 0x1a);
          if (*(short *)(param_1 + 0x18) == 0) {
            iVar1 = (*(ushort *)(param_1 + 0x1c) + 0x22) * 4;
            iVar10 = iVar1 + 0x60;
            if (_DAT_04808000 != 0x1440) {
              iVar10 = iVar1 + 0x448;
            }
            sVar5 = FUN_03807acc(iVar10 + (uint)*(ushort *)(param_1 + 0x14) * iVar12 + 0x3ba,10);
            OS_DisableInterrupts();
            _DAT_04808090 = (ushort)(((uint)puVar11 & 0x3fff) >> 1) | 0x8000 | uVar7;
            _DAT_04808118 = sVar5;
            OS_RestoreInterrupts();
          }
          else {
            uVar6 = OS_DisableInterrupts();
            iVar12 = FUN_03807acc(_DAT_048080f8 - sVar5,10);
            if ((uint)*(ushort *)(param_1 + 0x18) <= iVar12 + 3U) {
              OS_RestoreInterrupts(uVar6);
              FUN_037f89b8(iVar1 + 0x188,*(undefined4 *)(iVar1 + 0x4bc));
              *(undefined2 *)(iVar1 + 0x468) = 0;
              *(short *)(iVar1 + 0x46a) = *(short *)(iVar1 + 0x46a) + -1;
              return 5;
            }
            _DAT_04808118 = (*(ushort *)(param_1 + 0x18) - (short)iVar12) + -1;
            _DAT_04808090 = (ushort)(((uint)puVar11 & 0x3fff) >> 1) | 0x8000 | uVar7;
            OS_RestoreInterrupts(uVar6);
          }
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 5;
      }
    }
    else {
      uVar6 = 8;
    }
  }
  else {
    uVar6 = 0xb;
  }
  return uVar6;
}

