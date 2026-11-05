
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f3be0(int param_1,int *param_2)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  undefined2 *puVar11;
  ushort *puVar12;
  uint local_58;
  int local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  short local_48;
  undefined2 local_46;
  undefined2 local_44;
  
  iVar1 = _DAT_0380fff4;
  puVar11 = (undefined2 *)(_DAT_0380fff4 + 0x404);
  if (*(short *)(_DAT_0380fff4 + 0x404) == 0x13) {
    iVar10 = *(int *)(_DAT_0380fff4 + 0x420);
    iVar7 = *(int *)(_DAT_0380fff4 + 0x41c) + 0x4e;
    for (uVar8 = 0; uVar8 < *(ushort *)(*(int *)(iVar1 + 0x41c) + 0x4c); uVar8 = uVar8 + 1) {
      iVar4 = FUN_027e9cfc(iVar7,param_1 + 0x24);
      if (iVar4 != 0) {
        *(ushort *)(iVar10 + 6) = *(ushort *)(iVar10 + 6) | (ushort)(1 << (uVar8 & 0xff));
        return;
      }
      iVar7 = iVar7 + 6;
    }
    puVar9 = (ushort *)(iVar10 + 10);
    for (uVar8 = 0; uVar8 < *(ushort *)(iVar10 + 8); uVar8 = uVar8 + 1) {
      iVar7 = FUN_027e9cfc(param_1 + 0x24,puVar9 + 2);
      if (iVar7 != 0) {
        return;
      }
      puVar9 = puVar9 + *puVar9;
    }
    MIi_CpuClear16(0,puVar9,0x40);
    uVar3 = *(ushort *)(param_1 + 6);
    if (0xc < uVar3) {
      if (param_2 == (int *)0x0) {
        MIi_CpuClear32(0,&local_50,0x2c);
        local_50 = param_1 + 0x38;
        local_48 = uVar3 - 0xc;
        local_46 = 3;
        local_44 = 0x38;
        local_4c = *(undefined2 *)(param_1 + 8);
        local_4a = *(undefined2 *)(param_1 + 0x36);
        FUN_027f3248(&local_50);
        param_2 = &local_50;
      }
      if (param_2[10] == 0) {
        *puVar9 = (ushort)(*(ushort *)((int)param_2 + 0x1a) + 0x41 >> 1);
      }
      else {
        sVar2 = FUN_027e93b0(param_2[10] + 1);
        puVar9[0x1e] = sVar2 - 8;
        *puVar9 = (ushort)(puVar9[0x1e] + 0x41 >> 1);
      }
      if (((*(ushort *)((int)param_2 + 10) & 1) == 1) &&
         (*puVar9 <= *(ushort *)(_DAT_0380fff4 + 0x408))) {
        puVar9[0x16] = *(ushort *)(param_1 + 0x36);
        FUN_027ea0c8(puVar9 + 2,param_1 + 0x24);
        puVar9[0x19] = *(ushort *)(param_1 + 0x34);
        puVar9[1] = *(ushort *)(param_1 + 0x12) & 0xff;
        if (param_2[10] == 0) {
          puVar9[0x1f] = *(ushort *)(param_2 + 6);
          if ((short)param_2[6] != 0) {
            param_1 = param_1 + 0x38;
            puVar12 = puVar9 + 0x20;
            uVar8 = 0;
            local_58 = 0;
            while (uVar8 < *(ushort *)(param_2 + 6)) {
              uVar5 = FUN_027e93b0(param_1);
              iVar7 = FUN_027e93b0(param_1 + 1);
              if ((uVar5 < 7) || (param_1 == param_2[10])) {
                param_1 = param_1 + iVar7 + 2;
              }
              else {
                for (uVar5 = local_58; uVar5 < iVar7 + 2U; uVar5 = uVar5 + 1) {
                  uVar6 = FUN_027e93b0(param_1);
                  FUN_027e93d0(puVar12,uVar6);
                  puVar12 = (ushort *)((int)puVar12 + 1);
                  param_1 = param_1 + 1;
                }
                uVar8 = uVar8 + 1;
              }
            }
          }
        }
        else {
          for (uVar8 = 0; uVar8 < puVar9[0x1e]; uVar8 = uVar8 + 1) {
            uVar6 = FUN_027e93b0(param_2[10] + 10 + uVar8);
            FUN_027e93d0((int)puVar9 + uVar8 + 0x40,uVar6);
          }
        }
        if (param_2[7] == 0) {
          uVar8 = 0;
          puVar9[5] = 0;
          do {
            FUN_027e93d0((int)puVar9 + uVar8 + 0xc,0);
            uVar8 = uVar8 + 1;
          } while (uVar8 < 0x20);
        }
        else {
          uVar3 = FUN_027e93b0(param_2[7] + 1);
          puVar9[5] = uVar3;
          for (uVar8 = 0; uVar8 < puVar9[5]; uVar8 = uVar8 + 1) {
            uVar6 = FUN_027e93b0(param_2[7] + 2 + uVar8);
            FUN_027e93d0((int)puVar9 + uVar8 + 0xc,uVar6);
          }
        }
        puVar9[0x17] = *(ushort *)(param_2 + 5);
        puVar9[0x18] = *(ushort *)((int)param_2 + 0x16);
        puVar9[0x1b] = *(ushort *)((int)param_2 + 0x12);
        if (param_2[8] != 0) {
          uVar3 = FUN_027e93b0(param_2[8] + 3);
          puVar9[0x1c] = uVar3;
        }
        if (param_2[9] != 0) {
          uVar3 = FUN_027e93b0(param_2[9] + 3);
          puVar9[0x1a] = uVar3;
        }
        *(ushort *)(iVar10 + 2) = *(short *)(iVar10 + 2) + *puVar9;
        *(short *)(iVar10 + 8) = *(short *)(iVar10 + 8) + 1;
        *(ushort *)(iVar1 + 0x408) = *(short *)(iVar1 + 0x408) - *puVar9;
        if (*(ushort *)(iVar1 + 0x408) < 0x20) {
          FUN_027e9528();
          *puVar11 = 0x15;
          FUN_037f85f8(2,0);
        }
      }
      else {
        FUN_027ea0c8(puVar9 + 2,&DAT_027f7cd4);
      }
    }
  }
  return;
}

