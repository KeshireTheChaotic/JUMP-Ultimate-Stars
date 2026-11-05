
undefined4 FUN_02150150(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int aiStack_30 [7];
  
  aiStack_30[6] = param_4;
  for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)(param_1 + 199); iVar6 = iVar6 + 1) {
    aiStack_30[iVar6 + 3] = 0;
  }
  for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x14); iVar6 = iVar6 + 1) {
    aiStack_30[(char)(&DAT_020afebe)[iVar6] + 3] =
         aiStack_30[(char)(&DAT_020afebe)[iVar6] + 3] + *(int *)(param_1 + iVar6 * 4 + 0x1c);
  }
  bVar1 = *(byte *)(param_1 + 199);
  for (iVar6 = 0; iVar6 < (int)(uint)bVar1; iVar6 = iVar6 + 1) {
    aiStack_30[iVar6] = 0;
    bVar2 = *(byte *)(param_1 + 199);
    for (iVar3 = 0; iVar3 < (int)(uint)bVar2; iVar3 = iVar3 + 1) {
      if ((iVar6 != iVar3) && (aiStack_30[iVar6 + 3] < aiStack_30[iVar3 + 3])) {
        aiStack_30[iVar6] = aiStack_30[iVar6] + 1;
      }
    }
  }
  for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x14); iVar6 = iVar6 + 1) {
    *(int *)(param_1 + iVar6 * 4 + 0x4c) = aiStack_30[(char)(&DAT_020afebe)[iVar6]];
  }
  for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)(param_1 + 199); iVar6 = iVar6 + 1) {
    iVar3 = param_1 + iVar6 * 4;
    iVar5 = *(int *)(iVar3 + 0x5c);
    if (iVar5 != *(int *)(iVar3 + 0x4c)) {
      if ((iVar5 == 0) && (*(byte *)(param_1 + iVar6 + 0xc0) < 0xfe)) {
        *(char *)(param_1 + iVar6 + 0xc0) = *(char *)(param_1 + iVar6 + 0xc0) + '\x01';
      }
      iVar3 = param_1 + iVar6 * 4;
      *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar3 + 0x4c);
    }
  }
  iVar6 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(param_1 + 199) <= iVar6) {
      uVar4 = FUN_0214f998(param_1);
      return uVar4;
    }
    if ((int)(uint)*(byte *)(param_1 + 0xc6) <= aiStack_30[iVar6 + 3]) break;
    iVar6 = iVar6 + 1;
  }
  return 1;
}

