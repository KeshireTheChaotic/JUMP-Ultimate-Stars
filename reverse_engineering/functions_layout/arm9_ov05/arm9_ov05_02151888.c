
void FUN_02151888(undefined4 *param_1,int param_2,uint param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  
  iVar10 = 0;
  iVar2 = param_4;
  if (*(int *)(*(int *)(param_1[0x1a] + 4) + 0x148) != 0) {
    func_0x021ad110();
  }
  FUN_0214d5e4(*param_1,(&DAT_0216f40c)[param_2]);
  if (param_4 != 0) {
    return;
  }
  if (param_1[0xfc] == 1) {
    FUN_0214de14(*param_1,3,2,0,iVar2);
  }
  iVar8 = 0;
  do {
    if (param_1[iVar8 + 0x10f] != -1) {
      FUN_0214de14(*param_1,(&DAT_0216f414)[iVar8],param_1[iVar8 + 0x10f],0,iVar2);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 6);
  iVar2 = FUN_0214e000(*param_1);
  for (iVar8 = 0; iVar8 < iVar2; iVar8 = iVar8 + 1) {
    puVar3 = (ushort *)FUN_0214e018(*param_1,iVar8);
    iVar9 = ((byte)puVar3[2] + 0x875e) * 0x10000;
    DAT_02172288 = (undefined1)((uint)iVar9 >> 0x18);
    DAT_02172289 = (undefined1)((uint)iVar9 >> 0x10);
    pcVar12 = &DAT_0217228a;
    uVar1 = *puVar3;
    if (*(int *)(DAT_0214bd80 + 0x18e4) == 2) {
      if ((*(uint *)(*(int *)(DAT_0214bd80 + 0x60) + (uint)(uVar1 >> 5) * 4 + 0x74) &
          1 << (uVar1 & 0x1f)) != 0) {
        DAT_0217228a = 0x87;
        DAT_0217228b = 0x52;
        pcVar12 = &DAT_0217228c;
      }
    }
    else if ((*(uint *)(&DAT_020b0c20 + (uint)(uVar1 >> 5) * 4) & 1 << (uVar1 & 0x1f)) != 0) {
      DAT_0217228a = 0x87;
      DAT_0217228b = 0x52;
      pcVar12 = &DAT_0217228c;
    }
    pcVar4 = (char *)FUN_0214e030(puVar3);
    iVar9 = 0;
    while (*pcVar4 != '\0') {
      iVar9 = iVar9 + 1;
      pcVar4 = pcVar4 + 1;
    }
    pcVar4 = (char *)FUN_0214e030(puVar3);
    if (iVar9 >> 1 < 9) {
      for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
        *pcVar12 = *pcVar4;
        pcVar12 = pcVar12 + 1;
      }
      for (pcVar4 = (&PTR_DAT_0216f504)[iVar9 >> 1]; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
        *pcVar12 = *pcVar4;
        pcVar12 = pcVar12 + 1;
      }
    }
    else {
      iVar9 = 0;
      while (iVar9 < 0x10) {
        *pcVar12 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        iVar9 = iVar9 + 1;
        pcVar12 = pcVar12 + 1;
      }
      for (pcVar4 = PTR_DAT_0216f504; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
        *pcVar12 = *pcVar4;
        pcVar12 = pcVar12 + 1;
      }
    }
    if (param_1[0xfc] == 1) {
      uVar6 = FUN_0214e084();
      if (param_3 == uVar6) {
        iVar10 = iVar8;
      }
      uVar5 = FUN_0214e690();
      iVar9 = FUN_02162378(param_1[3],uVar6,param_1[4],uVar5);
      if (iVar9 != 0) {
        *pcVar12 = -0x79;
        pcVar12[1] = 'S';
        pcVar12 = pcVar12 + 2;
      }
    }
    else if (param_3 == *puVar3) {
      iVar10 = iVar8;
    }
    *pcVar12 = (&LAB_0216d51a)[(char)puVar3[4] * 2];
    pcVar12[1] = (&LAB_0216d51a_1)[(char)puVar3[4] * 2];
    iVar9 = ((int)*(char *)((int)puVar3 + 9) + (uint)(ushort)(&DAT_0216f4e4)[(char)puVar3[4]]) *
            0x10000;
    pcVar12[2] = (char)((uint)iVar9 >> 0x18);
    pcVar12[3] = (char)((uint)iVar9 >> 0x10);
    pcVar12[4] = (&DAT_0216d50c)[(uint)(byte)puVar3[3] * 2];
    pcVar12[5] = (&DAT_0216d50d)[(uint)(byte)puVar3[3] * 2];
    iVar9 = FUN_0214e480(puVar3);
    pcVar12[6] = (&DAT_0216d512)[iVar9 * 2];
    iVar9 = FUN_0214e480(puVar3);
    pcVar12[7] = (&DAT_0216d513)[iVar9 * 2];
    func_0x021ace90(*(undefined4 *)(param_1[0x1a] + 4),&DAT_02172288,puVar3);
  }
  (**(code **)(**(int **)(param_1[0x1a] + 4) + 0x1a0))(*(int **)(param_1[0x1a] + 4),iVar10,0);
  (**(code **)(**(int **)(param_1[0x1a] + 4) + 0x198))(*(int **)(param_1[0x1a] + 4),iVar10);
  uVar6 = func_0x021ad38c(*(undefined4 *)(param_1[0x1a] + 4));
  uVar11 = *(uint *)(*(int *)(param_1[0x1a] + 4) + 0x148);
  if (uVar6 <= uVar11) {
    return;
  }
  for (; uVar6 = func_0x021ad38c(*(undefined4 *)(param_1[0x1a] + 4)), uVar11 < uVar6;
      uVar11 = uVar11 + 1) {
    piVar7 = *(int **)(*(int *)(param_1[0x13] + 4) + 100);
    iVar10 = (**(code **)(*piVar7 + 0x70))(piVar7,0,uVar11 * 2 + 4);
    if (iVar10 != 0xc) {
      uVar6 = 0;
      do {
        uVar13 = 0;
        do {
          piVar7 = *(int **)(*(int *)(param_1[0x13] + 4) + 100);
          (**(code **)(*piVar7 + 0x88))(piVar7,uVar13,uVar6 + uVar11 * 2 + 4,0xc);
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 2);
    }
  }
  return;
}

