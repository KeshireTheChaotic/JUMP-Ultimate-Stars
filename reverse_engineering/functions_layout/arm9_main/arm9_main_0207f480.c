
void FUN_0207f480(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  iVar6 = 0;
  puVar7 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  piVar10 = puVar7 + 10;
  do {
    iVar8 = *piVar10;
    while (iVar8 != 0) {
      FUN_02037c24(piVar10,iVar8);
      *(undefined4 *)(iVar8 + 8) = 0;
      FUN_02037b98(puVar7 + 0x36,iVar8);
      iVar8 = *piVar10;
    }
    iVar6 = iVar6 + 1;
    piVar10 = piVar10 + 2;
  } while (iVar6 < 0x16);
  for (puVar11 = (undefined4 *)*puVar7; puVar11 != (undefined4 *)0x0;
      puVar11 = (undefined4 *)*puVar11) {
    iVar6 = 0;
    piVar10 = puVar11 + 4;
    do {
      iVar8 = *piVar10;
      while (iVar8 != 0) {
        FUN_02037c24(piVar10,iVar8);
        if (iVar6 == 0) {
          FUN_020517fc(iVar8,0,0x10);
          FUN_02037b98(puVar7 + 8,iVar8);
        }
        else {
          *(undefined4 *)(iVar8 + 8) = 0;
          FUN_02037b98(puVar7 + 0x36,iVar8);
        }
        iVar8 = *piVar10;
      }
      iVar6 = iVar6 + 1;
      piVar10 = piVar10 + 2;
    } while (iVar6 < 3);
  }
  for (puVar11 = (undefined4 *)*puVar7; puVar11 != (undefined4 *)0x0;
      puVar11 = (undefined4 *)*puVar11) {
    if ((puVar11[0x10] & 0x300) == 0) {
      if ((((puVar11[0x1e] & 0xe0000) == 0) && ((*(uint *)(puVar11[0x17] + 0x34) & 0x10) == 0)) &&
         ((puVar11[0xd] & 0x7ff) != 0)) {
        iVar6 = puVar7[0x36];
        FUN_02037c24(puVar7 + 0x36,iVar6);
        *(undefined4 **)(iVar6 + 8) = puVar11;
        FUN_02037b98(puVar7 + 0x20,iVar6);
      }
      if ((puVar11[0xd] & 0x800) != 0) {
        iVar8 = puVar11[2];
        iVar6 = FUN_0207fbb4(*(undefined4 *)(iVar8 + 8));
        sVar2 = 0;
        if (iVar6 != 0) {
          sVar2 = *(short *)(*(int *)(iVar8 + 8) + 0xc);
        }
        if (iVar6 != 0 && sVar2 != 0) {
          iVar6 = puVar7[0x36];
          FUN_02037c24(puVar7 + 0x36,iVar6);
          *(undefined4 **)(iVar6 + 8) = puVar11;
          FUN_02037b98(puVar7 + 0x26,iVar6);
        }
      }
      if (((puVar11[0x1e] & 0x10000) == 0) && ((puVar11[0xd] & 0x800) == 0)) {
        iVar6 = puVar7[0x36];
        FUN_02037c24(puVar7 + 0x36,iVar6);
        *(undefined4 **)(iVar6 + 8) = puVar11;
        FUN_02037b98(puVar7 + 10,iVar6);
      }
      if ((((puVar11[0x1e] & 0x10000) == 0) && ((puVar11[0x1e] & 0x20) != 0)) &&
         ((puVar11[0xd] & 0x800) == 0)) {
        iVar6 = puVar7[0x36];
        FUN_02037c24(puVar7 + 0x36,iVar6);
        *(undefined4 **)(iVar6 + 8) = puVar11;
        FUN_02037b98(puVar7 + 0x24,iVar6);
      }
      if ((puVar11[0xd] & 0x10800) == 0) {
        iVar6 = puVar7[0x36];
        FUN_02037c24(puVar7 + 0x36,iVar6);
        *(undefined4 **)(iVar6 + 8) = puVar11;
        FUN_02037b98(puVar7 + 0x16,iVar6);
      }
      if ((puVar11[0xd] & 0x900) == 0) {
        for (puVar5 = (undefined4 *)puVar11[2]; puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)*puVar5) {
          if (*(short *)(puVar5[2] + 0xc) == 0) {
            *(byte *)((int)puVar5 + 0x2a) = *(byte *)((int)puVar5 + 0x2a) & 0xfe;
          }
          uVar4 = puVar5[5];
          if ((((((uVar4 & 0x10000000) != 0) && ((uVar4 & 0x8000000) == 0)) &&
               ((uVar4 & 0x800000) == 0)) &&
              (((puVar5[6] & 0x200) == 0 && ((*(byte *)((int)puVar5 + 0x2a) & 1) == 0)))) &&
             (*(short *)(puVar5[2] + 0xc) != 0)) {
            iVar6 = puVar7[0x36];
            FUN_02037c24(puVar7 + 0x36,iVar6);
            *(undefined4 **)(iVar6 + 8) = puVar5;
            FUN_02037b98(puVar7 + 0x1c,iVar6);
          }
          uVar4 = puVar5[5];
          bVar14 = (uVar4 & 0x40000) != 0;
          if (bVar14) {
            uVar4 = (uint)*(ushort *)(puVar5[2] + 0xc);
          }
          if (bVar14 && uVar4 != 0) {
            iVar6 = puVar7[0x36];
            FUN_02037c24(puVar7 + 0x36,iVar6);
            *(undefined4 **)(iVar6 + 8) = puVar5;
            FUN_02037b98(puVar7 + 0x2c,iVar6);
          }
        }
      }
      if (((puVar11[0xd] & 0x6ff) != 0) || ((puVar11[0xe] & 0x800) != 0)) {
        iVar6 = puVar7[0x36];
        FUN_02037c24(puVar7 + 0x36,iVar6);
        *(undefined4 **)(iVar6 + 8) = puVar11;
        FUN_02037b98(puVar7 + 0x22,iVar6);
      }
      if ((puVar11[0xd] & 0x800000) != 0) {
        iVar6 = puVar7[0x36];
        FUN_02037c24(puVar7 + 0x36,iVar6);
        *(undefined4 **)(iVar6 + 8) = puVar11;
        FUN_02037b98(puVar7 + 0x32,iVar6);
      }
      if ((puVar11[0xd] & 0x80000) != 0) {
        iVar6 = puVar7[0x36];
        FUN_02037c24(puVar7 + 0x36,iVar6);
        *(undefined4 **)(iVar6 + 8) = puVar11;
        FUN_02037b98(puVar7 + 0x34,iVar6);
      }
      if ((puVar11[0xd] & 0x10000) != 0) {
        puVar11[0x11] = puVar11[0x11] | 1;
        iVar8 = puVar11[2];
        iVar6 = FUN_0207fbb4(*(undefined4 *)(iVar8 + 8));
        sVar2 = 0;
        if (iVar6 != 0) {
          sVar2 = *(short *)(*(int *)(iVar8 + 8) + 0xc);
        }
        if (iVar6 == 0 || sVar2 == 0) {
          puVar11[0x11] = puVar11[0x11] & 0xfffffffe;
        }
      }
    }
  }
  for (puVar11 = (undefined4 *)*puVar7; puVar11 != (undefined4 *)0x0;
      puVar11 = (undefined4 *)*puVar11) {
    puVar11[0x13] = 0;
    puVar11[0x12] = 0;
    puVar11[0x10] = puVar11[0x10] & 0x7e00c38e;
    puVar11[0x11] = puVar11[0x11] & 0xffcffff7;
    FUN_020517fc(puVar11 + 0x29,0,0xd0);
    iVar8 = 0;
    *(undefined1 *)((int)puVar11 + 0x182) = 0;
    *(undefined1 *)(puVar11 + 0x5d) = 0;
    puVar11[0x1e] = puVar11[0x1e] & 0xecbfc800 | (puVar11[0x1e] & 0x30f) << 4;
    puVar11[0x21] = 0x7fffffff;
    iVar6 = 0;
    puVar5 = puVar11 + 0x27;
    puVar12 = puVar11 + 0x25;
    puVar13 = puVar11 + 0x24;
    do {
      iVar8 = iVar8 + 1;
      *(undefined2 *)puVar12 = *(undefined2 *)puVar13;
      *(undefined2 *)puVar13 = 0xffff;
      puVar9 = (undefined4 *)((int)puVar5 + 1);
      *(undefined1 *)puVar5 = 0;
      puVar5 = puVar9;
      puVar12 = (undefined4 *)((int)puVar12 + 2);
      puVar13 = (undefined4 *)((int)puVar13 + 2);
    } while (iVar8 < 2);
    uVar4 = puVar11[0xd];
    bVar14 = (uVar4 & 0x800) != 0;
    if (bVar14) {
      uVar4 = puVar11[2];
      puVar9 = (undefined4 *)puVar11[0x17];
    }
    if (bVar14 && uVar4 != 0) {
      iVar8 = *(int *)(uVar4 + 8);
      puVar11[0x1f] =
           puVar9[4] + ((int)*(short *)(iVar8 + 0x2e) - (int)*(short *)(iVar8 + 0x32)) * 0x100;
      iVar6 = (int)*(short *)(iVar8 + 0x36);
      puVar11[0x20] = puVar9[6] + (iVar6 - *(short *)(iVar8 + 0x3a)) * 0x100;
    }
    *(undefined2 *)((int)puVar11 + 0x16e) = 0x100;
    bVar14 = (puVar11[0xd] & 0xff) != 0;
    if (bVar14) {
      iVar6 = puVar11[0x5e];
    }
    if (bVar14 && iVar6 != 0) {
      uVar3 = FUN_0200d12c(puVar11[0x5f] << 8);
      *(undefined2 *)((int)puVar11 + 0x16e) = uVar3;
    }
    if (((puVar11[0x1e] & 0x80000) != 0) &&
       (bVar1 = *(byte *)((int)puVar11 + 0x9e), *(byte *)((int)puVar11 + 0x9e) = bVar1 + 1,
       3 < bVar1)) {
      puVar11[0x1e] = puVar11[0x1e] & 0xfff7ffff;
      *(undefined1 *)((int)puVar11 + 0x9e) = 0;
    }
    for (puVar5 = (undefined4 *)puVar11[2]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)*puVar5) {
      *(undefined2 *)((int)puVar5 + 0x22) = 0;
      *(undefined2 *)(puVar5 + 8) = *(undefined2 *)((int)puVar5 + 0x22);
    }
    if (((puVar11[0xd] & 0x2000) != 0) && ((puVar11[0xd] & 0x1000) == 0)) {
      iVar6 = puVar11[2];
      if (iVar6 == 0) {
        puVar11[0x1d] = 0;
        puVar11[0x1c] = 0;
      }
      else if (puVar11[0x1c] == 0) {
        puVar11[0x1c] = *(int *)(iVar6 + 8) + 0x2c;
        puVar11[0x1d] = *(int *)(iVar6 + 8) + 0x34;
      }
    }
    if (puVar11[0x19] == 0) {
      puVar11[0x10] = puVar11[0x10] & 0xfffffff9;
    }
  }
  FUN_020517fc(puVar7 + 0x55,0,0xc0);
  FUN_0207fbd0(puVar7);
  FUN_02080c70(puVar7);
  FUN_02080e5c(puVar7);
  FUN_020801fc(puVar7);
  FUN_02080510(puVar7);
  FUN_020805e8(puVar7);
  FUN_020802d0(puVar7);
  FUN_02080c28(puVar7);
  for (puVar7 = (undefined4 *)*puVar7; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)*puVar7)
  {
    puVar7[0x10] = puVar7[0x10] & 0xffff3fff;
    puVar7[0x11] = puVar7[0x11] & 0xfffffffb;
    if (*(int *)(puVar7[0x18] + 0x10) != 0) {
      puVar7[0x10] = puVar7[0x10] | 1;
    }
    for (puVar11 = (undefined4 *)puVar7[2]; puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)*puVar11) {
      if (*(short *)(puVar11[2] + 0xc) == 0) {
        *(byte *)((int)puVar11 + 0x2a) = *(byte *)((int)puVar11 + 0x2a) & 0xfe;
      }
      if ((*(byte *)(puVar11[2] + 0x18) & 2) != 0) {
        puVar7[0x10] = puVar7[0x10] | 0x200;
      }
    }
    if ((puVar7[0x10] & 1) != 0) {
      (*(code *)puVar7[0x14])(puVar7,puVar7[0x15]);
    }
  }
  return;
}

