
int FUN_02151764(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *local_1c;
  int local_18;
  
  iVar1 = FUN_02151928();
  iVar5 = 0;
  iVar4 = iVar1 * 4;
  if (0 < iVar4) {
    puVar3 = param_1 + iVar1 * 4;
    local_1c = param_1;
    do {
      uVar2 = *local_1c;
      *local_1c = *puVar3;
      *puVar3 = uVar2;
      uVar2 = param_1[iVar5 + 1];
      param_1[iVar5 + 1] = param_1[iVar4 + 1];
      param_1[iVar4 + 1] = uVar2;
      uVar2 = param_1[iVar5 + 2];
      param_1[iVar5 + 2] = param_1[iVar4 + 2];
      param_1[iVar4 + 2] = uVar2;
      uVar2 = param_1[iVar5 + 3];
      param_1[iVar5 + 3] = param_1[iVar4 + 3];
      param_1[iVar4 + 3] = uVar2;
      local_1c = local_1c + 4;
      iVar5 = iVar5 + 4;
      puVar3 = puVar3 + -4;
      iVar4 = iVar4 + -4;
    } while (iVar5 < iVar4);
  }
  local_18 = 1;
  if (1 < iVar1) {
    do {
      puVar3 = param_1 + 4;
      uVar2 = *puVar3;
      *puVar3 = *(uint *)(&DAT_02168010 + (*(uint *)(&DAT_02169810 + (uVar2 & 0xff) * 4) & 0xff) * 4
                         ) ^
                *(uint *)(&DAT_02167c10 +
                         (*(uint *)(&DAT_02169810 + (uVar2 >> 8 & 0xff) * 4) & 0xff) * 4) ^
                *(uint *)(&DAT_02169c10 +
                         (*(uint *)(&DAT_02169810 + (uVar2 >> 0x18) * 4) & 0xff) * 4) ^
                *(uint *)(&DAT_0216a010 +
                         (*(uint *)(&DAT_02169810 + (uVar2 >> 0x10 & 0xff) * 4) & 0xff) * 4);
      uVar2 = param_1[5];
      param_1[5] = *(uint *)(&DAT_02168010 +
                            (*(uint *)(&DAT_02169810 + (uVar2 & 0xff) * 4) & 0xff) * 4) ^
                   *(uint *)(&DAT_02167c10 +
                            (*(uint *)(&DAT_02169810 + (uVar2 >> 8 & 0xff) * 4) & 0xff) * 4) ^
                   *(uint *)(&DAT_02169c10 +
                            (*(uint *)(&DAT_02169810 + (uVar2 >> 0x18) * 4) & 0xff) * 4) ^
                   *(uint *)(&DAT_0216a010 +
                            (*(uint *)(&DAT_02169810 + (uVar2 >> 0x10 & 0xff) * 4) & 0xff) * 4);
      uVar2 = param_1[6];
      param_1[6] = *(uint *)(&DAT_02168010 +
                            (*(uint *)(&DAT_02169810 + (uVar2 & 0xff) * 4) & 0xff) * 4) ^
                   *(uint *)(&DAT_02167c10 +
                            (*(uint *)(&DAT_02169810 + (uVar2 >> 8 & 0xff) * 4) & 0xff) * 4) ^
                   *(uint *)(&DAT_02169c10 +
                            (*(uint *)(&DAT_02169810 + (uVar2 >> 0x18) * 4) & 0xff) * 4) ^
                   *(uint *)(&DAT_0216a010 +
                            (*(uint *)(&DAT_02169810 + (uVar2 >> 0x10 & 0xff) * 4) & 0xff) * 4);
      uVar2 = param_1[7];
      param_1[7] = *(uint *)(&DAT_02168010 +
                            (*(uint *)(&DAT_02169810 + (uVar2 & 0xff) * 4) & 0xff) * 4) ^
                   *(uint *)(&DAT_02167c10 +
                            (*(uint *)(&DAT_02169810 + (uVar2 >> 8 & 0xff) * 4) & 0xff) * 4) ^
                   *(uint *)(&DAT_02169c10 +
                            (*(uint *)(&DAT_02169810 + (uVar2 >> 0x18) * 4) & 0xff) * 4) ^
                   *(uint *)(&DAT_0216a010 +
                            (*(uint *)(&DAT_02169810 + (uVar2 >> 0x10 & 0xff) * 4) & 0xff) * 4);
      local_18 = local_18 + 1;
      param_1 = puVar3;
    } while (local_18 < iVar1);
  }
  return iVar1;
}

