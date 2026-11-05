
void FUN_02030f24(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  iVar4 = 1;
  do {
    uVar2 = *(uint *)(param_1 + iVar4 * 4);
    iVar1 = iVar4 * 4;
    iVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + iVar4;
    iVar4 = iVar4 + 1;
    *(int *)(param_1 + iVar1 + 4) = iVar3;
  } while (iVar4 < 0x270);
  *(undefined4 *)(param_1 + 0x9c4) = 1;
  *(undefined4 *)(param_1 + 0x9c8) = 1;
  return;
}

