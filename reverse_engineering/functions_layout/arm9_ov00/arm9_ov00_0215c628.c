
void FUN_0215c628(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0215cb48(param_2);
  iVar2 = 0;
  if (*(byte *)(param_1 + 0x1b5) < *(byte *)(param_1 + 0x1b4)) {
    *(undefined1 *)(param_2 + 0x58) = 1;
    iVar3 = 0;
    *(uint *)(param_2 + 0x4c) =
         (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + 0x1b5) + 0x1b8) * 0x58 +
         *(int *)(param_1 + 0x40);
    do {
      FUN_0215c77c(*(undefined4 *)(param_2 + iVar3 * 4 + 0x18));
      iVar4 = iVar3 * 0x1c;
      piVar1 = *(int **)(*(int *)(*(int *)(param_2 + iVar3 * 4 + 0x18) + 4) + 100);
      (**(code **)(*piVar1 + 0x68))(piVar1,*(int *)(param_2 + 0x4c) + 4 + iVar4);
      iVar3 = iVar3 + 1;
      if (*(char *)(*(int *)(param_2 + 0x4c) + iVar4 + 4) != '\0') {
        iVar2 = iVar2 + 1;
      }
    } while (iVar3 < 3);
    iVar2 = iVar2 + -1;
    iVar3 = 0;
    do {
      iVar4 = *(int *)(*(int *)(*(int *)(param_2 + iVar3 * 4 + 0x18) + 4) + 0x50);
      *(undefined4 *)(iVar4 + 0xc) = (&DAT_02161758)[iVar2 * 9 + iVar3 * 3];
      *(undefined4 *)(iVar4 + 0x10) = (&DAT_02161758)[iVar2 * 9 + iVar3 * 3 + 1];
      *(undefined4 *)(iVar4 + 0x14) = (&DAT_02161758)[iVar2 * 9 + iVar3 * 3 + 2];
      FUN_02150fb8(iVar4,1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  }
  else {
    piVar1 = *(int **)(*(int *)(param_2 + 0xc) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    do {
      FUN_0215c77c(*(undefined4 *)(param_2 + iVar2 * 4 + 0x18));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  *(char *)(param_1 + 0x1b5) = *(char *)(param_1 + 0x1b5) + '\x01';
  return;
}

