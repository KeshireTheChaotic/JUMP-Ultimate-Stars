
void FUN_021619a4(undefined4 *param_1,short param_2,short param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = *(undefined1 **)(*(int *)(param_1[8] + 0xc) + 0x24);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(short *)(puVar2 + 0x168) = param_2 + -8;
  *(short *)(puVar2 + 0x16a) = param_3 + -8;
  do {
    iVar1 = iVar3 * 2;
    iVar3 = iVar3 + 1;
    *(undefined2 *)(puVar2 + iVar1 + 0x16c) = 0;
  } while (iVar3 < 2);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar2[1] = 5;
  puVar2[4] = 0;
  puVar2[5] = 0;
  MIi_CpuClear32(0,puVar2 + 0x10,0x158);
  *(undefined4 *)(puVar2 + 0x170) = 1;
  return;
}

