
undefined4 FUN_027e4b64(int param_1,int param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  short *psVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined2 uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  int local_260;
  undefined1 auStack_230 [6];
  undefined1 auStack_22a [6];
  undefined1 auStack_224 [512];
  
  psVar5 = DAT_027f97f0;
  uVar1 = *(uint *)(param_1 + 4) & 0xffff;
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (undefined2)*(undefined4 *)(param_1 + 8);
  }
  uVar12 = 0;
  bVar14 = false;
  sVar3 = *DAT_027f97f0;
  if ((sVar3 == 9) || (sVar3 == 7)) {
    bVar14 = *(int *)(DAT_027f97f0 + 6) == 1;
  }
  else {
    uVar11 = (undefined2)*(uint *)(param_1 + 4);
    if ((sVar3 != 10) && (sVar3 != 8)) {
      if (param_2 == 0) {
        puVar8 = (undefined2 *)FUN_03808074();
        *puVar8 = 0xd;
        puVar8[1] = 3;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = uVar11;
        puVar8[5] = 0;
        FUN_038080d0();
      }
      return 0;
    }
    uVar9 = OS_DisableInterrupts();
    if (psVar5[0xc1] == 0) {
      OS_RestoreInterrupts();
      if (param_2 == 0) {
        puVar8 = (undefined2 *)FUN_03808074();
        *puVar8 = 0xd;
        puVar8[1] = 3;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = uVar11;
        puVar8[5] = 0;
        FUN_038080d0();
      }
      return 0;
    }
    if (*(int *)(psVar5 + 6) == 1) {
      psVar5[6] = 0;
      psVar5[7] = 0;
      bVar14 = true;
      FUN_027e6748();
      FUN_027e0238();
      if (*psVar5 == 10) {
        *psVar5 = 8;
      }
    }
    psVar5[0xc1] = 0;
    psVar5[0x43] = 0;
    psVar5[10] = 0;
    psVar5[0xb] = 0;
    psVar5[8] = 0;
    psVar5[9] = 0;
    psVar5[0xe] = 0;
    psVar5[0xf] = 0;
    OS_RestoreInterrupts(uVar9);
  }
  if ((*psVar5 == 10) || (*psVar5 == 8)) {
    FUN_037fe788(psVar5 + 0xc5,auStack_230,6);
    for (iVar13 = 0; iVar13 < 2; iVar13 = iVar13 + 1) {
      iVar7 = FUN_027e2ad4(auStack_224,auStack_230,3);
      uVar4 = *(ushort *)(iVar7 + 4);
      if (uVar4 < 8) {
        if (uVar4 < 7) {
          if ((1 < uVar4) || ((uVar4 != 0 && (uVar4 != 1)))) {
LAB_027e4d54:
            if (param_2 == 0) {
              FUN_027e4a4c(5,uVar4,uVar1,0);
            }
            else {
              FUN_027e4a00(5,uVar4,uVar1,0);
            }
            if (bVar14) {
              FUN_027e6d04(1);
            }
            return 0;
          }
          break;
        }
      }
      else if (uVar4 != 0xc) goto LAB_027e4d54;
    }
    uVar11 = 1;
    psVar5[0x61] = 0;
    *psVar5 = 3;
    iVar13 = FUN_027e2d80(auStack_224,1);
    sVar3 = *(short *)(iVar13 + 4);
    if (sVar3 != 0) {
      if (param_2 == 0) {
        FUN_027e4a4c(0,sVar3,uVar1,1);
      }
      else {
        FUN_027e4a00(0,sVar3,uVar1,1);
      }
      if (bVar14) {
        FUN_027e6d04(1);
      }
      return 0;
    }
    iVar13 = FUN_027e21ec(auStack_224);
    sVar3 = *(short *)(iVar13 + 4);
    if (sVar3 != 0) {
      if (param_2 == 0) {
        FUN_027e4a4c(0x302,sVar3,uVar1,1);
      }
      else {
        FUN_027e4a00(0x302,sVar3,uVar1,1);
      }
      if (bVar14) {
        FUN_027e6d04(1);
      }
      return 0;
    }
    *psVar5 = 2;
    FUN_027e0100();
    if (param_2 == 1) {
      puVar8 = (undefined2 *)FUN_03808074();
      *puVar8 = 0xc;
      puVar8[1] = 0;
      puVar8[4] = 9;
      puVar8[6] = uVar6;
      puVar8[5] = psVar5[0xc4];
      FUN_037fe788(auStack_230,puVar8 + 8,6);
      puVar8[0xb] = psVar5[0x18];
      puVar8[0xc] = psVar5[0x19];
      FUN_038080d0(puVar8);
    }
    else {
      FUN_027e4a98(0,0,auStack_230);
    }
    if (bVar14) {
      FUN_027e6d04(1);
    }
  }
  else {
    for (uVar10 = 1; uVar11 = (undefined2)uVar12, (int)uVar10 < 0x10; uVar10 = uVar10 + 1) {
      uVar2 = 1 << (uVar10 & 0xff);
      if ((uVar2 & (ushort)psVar5[0xc1] & uVar1) != 0) {
        FUN_037fe788(psVar5 + (uVar10 - 1) * 3 + 0x94,auStack_22a,6);
        for (local_260 = 0; local_260 < 2; local_260 = local_260 + 1) {
          iVar13 = FUN_027e2ad4(auStack_224,auStack_22a,3);
          sVar3 = *(short *)(iVar13 + 4);
          if (sVar3 == 0) break;
          if ((sVar3 != 7) && (sVar3 != 0xc)) {
            if (param_2 == 0) {
              FUN_027e4a4c(5,sVar3,uVar1,uVar12);
            }
            else {
              FUN_027e4a00(5,sVar3,uVar1,uVar12);
            }
            if (bVar14) {
              FUN_027e6d04(1);
            }
            return 0;
          }
        }
        uVar9 = OS_DisableInterrupts();
        if (((ushort)psVar5[0xc1] & uVar2) == 0) {
          OS_RestoreInterrupts();
        }
        else {
          uVar12 = uVar12 | 1 << (uVar10 & 0xff) & 0xffffU;
          psVar5[0xc1] = psVar5[0xc1] & ~(ushort)uVar2;
          psVar5[0x43] = psVar5[0x43] & ~(ushort)uVar2;
          (psVar5 + (uVar10 & 0xffff) * 4 + 0x39c)[0] = 0;
          (psVar5 + (uVar10 & 0xffff) * 4 + 0x39c)[1] = 0;
          (psVar5 + (uVar10 & 0xffff) * 4 + 0x39e)[0] = 0;
          (psVar5 + (uVar10 & 0xffff) * 4 + 0x39e)[1] = 0;
          FUN_037fe6f4(psVar5 + (uVar10 - 1) * 3 + 0x94,0,6);
          OS_RestoreInterrupts(uVar9);
          if (param_2 == 1) {
            puVar8 = (undefined2 *)FUN_03808074();
            *puVar8 = 8;
            puVar8[1] = 0;
            puVar8[4] = 9;
            puVar8[9] = uVar6;
            puVar8[8] = (short)uVar10;
            FUN_037fe788(auStack_22a,puVar8 + 5,6);
            puVar8[0x16] = psVar5[0x18];
            puVar8[0x17] = psVar5[0x19];
            FUN_038080d0();
          }
          else {
            FUN_027e4a98(1,uVar10 & 0xffff,auStack_22a);
          }
          if (bVar14) {
            FUN_027e6d04(uVar2 & 0xffff);
          }
        }
      }
    }
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = uVar11;
  }
  return 1;
}

