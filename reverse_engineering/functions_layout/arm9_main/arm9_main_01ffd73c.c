
void FUN_01ffd73c(void)

{
  undefined2 uVar1;
  int *piVar2;
  uint unaff_r4;
  undefined2 *puVar3;
  int unaff_r5;
  undefined2 *puVar4;
  int unaff_r6;
  int unaff_r11;
  uint uVar5;
  int in_r12;
  int iVar6;
  
  FUN_01ff9450();
  piVar2 = (int *)FUN_01ff9450();
  uVar5 = unaff_r11 + unaff_r6 + (in_r12 + unaff_r6) * 0x100;
  iVar6 = (unaff_r11 + unaff_r6 & 0xfffffffeU) + (in_r12 + unaff_r6 & 0xfffffffeU) * 0x80;
  *(uint *)piVar2[4] = uVar5;
  if ((uVar5 & 1) == 0) {
    puVar3 = (undefined2 *)(unaff_r5 + uVar5 + *piVar2);
    puVar4 = (undefined2 *)(piVar2[-2] + *piVar2);
    uVar5 = unaff_r4;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 0x80;
      uVar5 = uVar5 - 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 0x80;
    } while (uVar5 != 0);
    puVar3 = (undefined2 *)(unaff_r6 + iVar6 + piVar2[1]);
    puVar4 = (undefined2 *)(piVar2[-1] + piVar2[1]);
    uVar5 = unaff_r4 >> 1;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 0x80;
      uVar5 = uVar5 - 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 0x80;
    } while (uVar5 != 0);
    return;
  }
  puVar3 = (undefined2 *)(unaff_r5 + uVar5 + *piVar2);
  puVar4 = (undefined2 *)(piVar2[-2] + *piVar2);
  uVar5 = unaff_r4;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 0x80;
    uVar5 = uVar5 - 1;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 0x80;
  } while (uVar5 != 0);
  puVar3 = (undefined2 *)(unaff_r6 + iVar6 + piVar2[1]);
  puVar4 = (undefined2 *)(piVar2[-1] + piVar2[1]);
  uVar5 = unaff_r4 >> 1;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 0x80;
    uVar5 = uVar5 - 1;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 0x80;
  } while (uVar5 != 0);
  return;
}

