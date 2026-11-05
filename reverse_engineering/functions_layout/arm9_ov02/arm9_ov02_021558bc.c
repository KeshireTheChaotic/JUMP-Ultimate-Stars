
void FUN_021558bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  
  iVar2 = 0;
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = puVar3[5];
  puVar3[5] = iVar1 + 0x1c;
  puVar3[4] = puVar3[4] + iVar1 + 0x1c;
  local_18 = param_4;
  do {
    if (puVar3[iVar2 + 2] != 0) {
      local_18 = puVar3[4];
      FUN_02151858(puVar3[iVar2 + 2],&local_18);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  if ((int)puVar3[4] < 0x14001) {
    return;
  }
  FUN_0214d348(*puVar3,*(undefined1 *)(puVar3 + 7));
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}

