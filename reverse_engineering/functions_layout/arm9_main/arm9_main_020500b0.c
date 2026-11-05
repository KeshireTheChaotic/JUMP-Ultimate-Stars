
void FUN_020500b0(undefined4 *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar4 = param_1[7];
  puVar5 = param_1 + 8;
  if ((uVar4 & 3) == 0) {
    puVar5[(int)uVar4 >> 2] = 0;
  }
  *(undefined1 *)((int)param_1 + uVar4 + 0x20) = 0x80;
  uVar1 = uVar4;
  while ((uVar1 + 1 & 3) != 0) {
    *(undefined1 *)((int)param_1 + uVar1 + 0x21) = 0;
    uVar1 = uVar1 + 1;
  }
  iVar2 = ((int)uVar4 >> 2) + 1;
  uStack_4 = param_4;
  uStack_8 = param_3;
  puStack_c = param_2;
  local_10 = param_1;
  if (0x37 < (int)param_1[7]) {
    for (; iVar2 < 0x10; iVar2 = iVar2 + 1) {
      puVar5[iVar2] = 0;
    }
    (*DAT_0209dce0)(param_1,puVar5,0x40);
    iVar2 = 0;
  }
  for (; iVar2 < 0xe; iVar2 = iVar2 + 1) {
    puVar5[iVar2] = 0;
  }
  uVar3 = local_10[5];
  *(char *)((int)param_1 + 0x5f) = (char)uVar3;
  *(char *)((int)param_1 + 0x5e) = (char)((uint)uVar3 >> 8);
  *(char *)((int)param_1 + 0x5d) = (char)((uint)uVar3 >> 0x10);
  *(char *)(param_1 + 0x17) = (char)((uint)uVar3 >> 0x18);
  uVar3 = local_10[6];
  *(char *)((int)param_1 + 0x5b) = (char)uVar3;
  *(char *)((int)param_1 + 0x5a) = (char)((uint)uVar3 >> 8);
  *(char *)((int)param_1 + 0x59) = (char)((uint)uVar3 >> 0x10);
  *(char *)(param_1 + 0x16) = (char)((uint)uVar3 >> 0x18);
  (*DAT_0209dce0)(local_10,puVar5,0x40);
  uVar3 = *local_10;
  *param_2 = (char)((uint)uVar3 >> 0x18);
  param_2[1] = (char)((uint)uVar3 >> 0x10);
  param_2[2] = (char)((uint)uVar3 >> 8);
  param_2[3] = (char)uVar3;
  uVar3 = local_10[1];
  param_2[4] = (char)((uint)uVar3 >> 0x18);
  param_2[5] = (char)((uint)uVar3 >> 0x10);
  param_2[6] = (char)((uint)uVar3 >> 8);
  param_2[7] = (char)uVar3;
  uVar3 = local_10[2];
  param_2[8] = (char)((uint)uVar3 >> 0x18);
  param_2[9] = (char)((uint)uVar3 >> 0x10);
  param_2[10] = (char)((uint)uVar3 >> 8);
  param_2[0xb] = (char)uVar3;
  uVar3 = local_10[3];
  param_2[0xc] = (char)((uint)uVar3 >> 0x18);
  param_2[0xd] = (char)((uint)uVar3 >> 0x10);
  param_2[0xe] = (char)((uint)uVar3 >> 8);
  param_2[0xf] = (char)uVar3;
  uVar3 = local_10[4];
  param_2[0x10] = (char)((uint)uVar3 >> 0x18);
  param_2[0x11] = (char)((uint)uVar3 >> 0x10);
  param_2[0x12] = (char)((uint)uVar3 >> 8);
  param_2[0x13] = (char)uVar3;
  local_10[7] = 0;
  MIi_CpuClear32(0,&local_10,4);
  return;
}

