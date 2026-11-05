
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e39e0(int param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  bool bVar6;
  short *psVar7;
  undefined2 uVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  short sVar17;
  uint uVar18;
  ushort local_4d4 [3];
  undefined1 auStack_4ce [32];
  undefined1 auStack_4ae [32];
  undefined1 local_48e [18];
  undefined1 auStack_47c [1112];
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027fff98"] */
  psVar7 = DAT_027f97f0;
  sVar17 = *DAT_027f97f0;
  if (((sVar17 == 2) || (sVar17 == 3)) || (sVar17 == 5)) {
    *(undefined4 *)(DAT_027f97f0 + 0xc2) = *(undefined4 *)(param_1 + 4);
    uVar2 = *(ushort *)(param_1 + 2);
    psVar7[200] = uVar2;
    FUN_037fe788(param_1 + 0xc,local_4d4,6);
    uVar3 = *(ushort *)(param_1 + 0x36);
    sVar17 = *(short *)(param_1 + 0x12);
    if (sVar17 == 2) {
      bVar6 = true;
      sVar17 = 0;
    }
    else if (sVar17 == 3) {
      bVar6 = true;
      sVar17 = 1;
    }
    else {
      bVar6 = false;
    }
    sVar4 = *(short *)(param_1 + 0x14);
    FUN_037fe788(param_1 + 0x16,auStack_4ce,0x20);
    uVar8 = *(undefined2 *)(param_1 + 8);
    if ((local_4d4[0] != 0xffff) && ((local_4d4[0] & 1) != 0)) {
      local_4d4[0] = local_4d4[0] & 0xfffe;
    }
    uVar18 = (uVar2 & 0x7fff) << 1 & (uint)(ushort)psVar7[0xfa];
    if (uVar18 == 0) {
      puVar9 = (undefined2 *)FUN_03808074();
      *puVar9 = 0x26;
      puVar9[1] = 6;
      puVar9[4] = 4;
      FUN_038080d0();
    }
    else if (((*(uint *)(param_1 + 4) == 0) || ((*(uint *)(param_1 + 4) & 3) != 0)) ||
            (*(ushort *)(param_1 + 8) < 0x40)) {
      puVar9 = (undefined2 *)FUN_03808074();
      *puVar9 = 0x26;
      puVar9[1] = 6;
      puVar9[4] = 4;
      FUN_038080d0();
    }
    else {
      psVar7[0x73] = 2;
      iVar10 = FUN_027e2164(auStack_47c);
      if (*(short *)(iVar10 + 4) == 0) {
        if (*(short *)(iVar10 + 6) == 0x10) {
          iVar10 = FUN_027e0378(0x26,auStack_47c);
          if (iVar10 == 0) {
            return;
          }
          iVar10 = FUN_027e21d4(auStack_47c);
          if (*(short *)(iVar10 + 4) != 0) {
            FUN_027e3924(0x303,*(short *)(iVar10 + 4),1);
            return;
          }
          *psVar7 = 3;
          iVar10 = FUN_027e2d1c(auStack_47c,1,0,1);
          if (*(short *)(iVar10 + 4) != 0) {
            FUN_027e3924(1,*(short *)(iVar10 + 4),1);
            return;
          }
          psVar7[99] = 1;
        }
        if (sVar17 == 0) {
          if (psVar7[0xf7] == 1) {
            iVar10 = FUN_027e24dc(auStack_47c,0);
            if (*(short *)(iVar10 + 4) != 0) {
              FUN_027e3924(0x20e,*(short *)(iVar10 + 4),1);
              return;
            }
            psVar7[0xf7] = 0;
          }
        }
        else if (psVar7[0xf7] == 0) {
          iVar10 = FUN_027e24dc(auStack_47c,1);
          if (*(short *)(iVar10 + 4) != 0) {
            FUN_027e3924(0x20e,*(short *)(iVar10 + 4),1);
            return;
          }
          psVar7[0xf7] = 1;
        }
        if (bVar6) {
          FUN_037fe6f4(auStack_4ae,0xff,0x20);
          if (uVar3 < 0x21) {
            FUN_037fe6f4(auStack_4ae,0,uVar3);
          }
          iVar10 = FUN_027e253c(auStack_47c,auStack_4ae);
          if (*(short *)(iVar10 + 4) != 0) {
            FUN_027e3924(0x20d,*(short *)(iVar10 + 4),1);
            return;
          }
        }
        *psVar7 = 5;
        uVar14 = 0;
        FUN_037fe6f4(local_48e,0,0x10);
        uVar13 = 1;
        do {
          if ((uVar18 & 1 << (uVar13 & 0xff)) != 0) {
            local_48e[uVar14] = (char)uVar13;
            uVar14 = uVar14 + 1 & 0xffff;
          }
          uVar13 = uVar13 + 1 & 0xffff;
        } while (uVar13 < 0xf);
        uVar11 = FUN_027e3970(uVar8);
        iVar10 = FUN_027e2c60(auStack_47c,uVar11,local_4d4,sVar4);
        if (*(short *)(iVar10 + 4) == 0) {
          puVar9 = (undefined2 *)FUN_03808074();
          uVar5 = (undefined2)((int)uVar18 >> 1);
          if (*(short *)(iVar10 + 8) == 0) {
            *puVar9 = 0x26;
            puVar9[1] = 0;
            puVar9[4] = 4;
            puVar9[7] = 0;
            puVar9[5] = uVar5;
          }
          else {
            puVar15 = (ushort *)(iVar10 + 10);
            uVar18 = *(uint *)(psVar7 + 0xc2);
            MIi_CpuClear16(0,uVar18,uVar8);
            for (iVar16 = 0; iVar16 < (int)(uint)*(ushort *)(iVar10 + 8); iVar16 = iVar16 + 1) {
              uVar2 = *puVar15;
              iVar1 = (uVar2 & 0x7fff) * 2;
              FUN_037fe788(puVar15,uVar18,iVar1);
              if ((sVar4 != 0) && (iVar12 = FUN_027e3994(uVar18), iVar12 == 0)) {
                *(short *)(uVar18 + 10) = sVar4;
                FUN_037fe788(auStack_4ce,uVar18 + 0xc,0x20);
              }
              *(uint *)(puVar9 + iVar16 * 2 + 8) = uVar18;
              iVar12 = (int)(puVar15[1] & 0xff) >> 2;
              if ((puVar15[1] & 2) == 0) {
                iVar12 = iVar12 + 0x19;
              }
              uVar8 = FUN_027e0298(iVar12);
              puVar9[iVar16 + 0x28] = uVar8;
              _DAT_027fff98 = (ushort)iVar12 ^ _DAT_027fff98 << 1 ^ _DAT_027fff98 >> 0xf;
              puVar15 = puVar15 + (uVar2 & 0x7fff);
              uVar18 = uVar18 + iVar1;
              if ((uVar18 & 2) != 0) {
                uVar18 = uVar18 + 2 & 0xfffffffc;
              }
            }
            *puVar9 = 0x26;
            puVar9[1] = 0;
            puVar9[4] = 5;
            puVar9[7] = *(undefined2 *)(iVar10 + 8);
            puVar9[5] = uVar5;
          }
          FUN_038080d0(puVar9);
        }
        else {
          FUN_027e3924(2,*(short *)(iVar10 + 4),1);
        }
      }
      else {
        FUN_027e3924(0x308,*(short *)(iVar10 + 4),1);
      }
    }
  }
  else {
    puVar9 = (undefined2 *)FUN_03808074();
    *puVar9 = 0x26;
    puVar9[1] = 3;
    puVar9[4] = 4;
    FUN_038080d0();
  }
  return;
}

