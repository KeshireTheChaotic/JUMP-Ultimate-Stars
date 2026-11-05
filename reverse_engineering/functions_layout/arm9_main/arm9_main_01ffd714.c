
void FUN_01ffd714(int *param_1)

{
  undefined2 uVar1;
  uint unaff_r4;
  undefined2 *puVar2;
  int unaff_r5;
  undefined2 *puVar3;
  int unaff_r6;
  uint unaff_r11;
  uint uVar4;
  uint in_r12;
  int iVar5;
  
  uVar4 = unaff_r11 + in_r12 * 0x100;
  iVar5 = (unaff_r11 & 0xfffffffe) + (in_r12 & 0xfffffffe) * 0x80;
  *(uint *)param_1[4] = uVar4;
  if ((uVar4 & 1) == 0) {
    puVar2 = (undefined2 *)(unaff_r5 + uVar4 + *param_1);
    puVar3 = (undefined2 *)(param_1[-2] + *param_1);
    uVar4 = unaff_r4;
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 0x80;
      uVar4 = uVar4 - 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 0x80;
    } while (uVar4 != 0);
    puVar2 = (undefined2 *)(unaff_r6 + iVar5 + param_1[1]);
    puVar3 = (undefined2 *)(param_1[-1] + param_1[1]);
    uVar4 = unaff_r4 >> 1;
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 0x80;
      uVar4 = uVar4 - 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 0x80;
    } while (uVar4 != 0);
    return;
  }
  puVar2 = (undefined2 *)(unaff_r5 + uVar4 + *param_1);
  puVar3 = (undefined2 *)(param_1[-2] + *param_1);
  uVar4 = unaff_r4;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 0x80;
    uVar4 = uVar4 - 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 0x80;
  } while (uVar4 != 0);
  puVar2 = (undefined2 *)(unaff_r6 + iVar5 + param_1[1]);
  puVar3 = (undefined2 *)(param_1[-1] + param_1[1]);
  uVar4 = unaff_r4 >> 1;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 0x80;
    uVar4 = uVar4 - 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 0x80;
  } while (uVar4 != 0);
  return;
}

