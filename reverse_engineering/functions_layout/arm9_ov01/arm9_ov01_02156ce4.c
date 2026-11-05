
void FUN_02156ce4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar4 = *(int *)(iVar3 + 0xf8);
  if ((*(uint *)(iVar3 + 0xec) & 0x80) == 0) {
    if ((*(uint *)(iVar3 + 0xec) & 2) != 0) {
      *(uint *)(iVar3 + 0xec) = *(uint *)(iVar3 + 0xec) & 0xfffffffd;
    }
    iVar2 = 3;
    if ((DAT_020b0b90 & 0x40) != 0) {
      iVar2 = 4;
    }
    if (*(char *)(*(int *)(param_1 + 4) + 0xa8) == '\0') {
      uVar1 = FUN_02156e3c(*(undefined4 *)(iVar3 + 0xc));
      if (((uVar1 & 0x100) != 0) &&
         (*(int *)(iVar3 + 0xf8) = *(int *)(iVar3 + 0xf8) + -1, *(int *)(iVar3 + 0xf8) < 0)) {
        *(int *)(iVar3 + 0xf8) = iVar2 + -1;
      }
      uVar1 = FUN_02156e3c(*(undefined4 *)(iVar3 + 0xc));
      if (((uVar1 & 0x200) != 0) &&
         (*(int *)(iVar3 + 0xf8) = *(int *)(iVar3 + 0xf8) + 1, iVar2 <= *(int *)(iVar3 + 0xf8))) {
        *(undefined4 *)(iVar3 + 0xf8) = 0;
      }
    }
    if ((iVar4 != *(int *)(iVar3 + 0xf8)) || ((*(uint *)(iVar3 + 0xec) & 4) != 0)) {
      *(uint *)(iVar3 + 0xec) = *(uint *)(iVar3 + 0xec) & 0xfffffffb;
      *(uint *)(iVar3 + 0xec) = *(uint *)(iVar3 + 0xec) | 0x32;
      iVar4 = (**(code **)(*(int *)(iVar3 + 0xf8) * 4 + 0x2169d3c))();
      if (iVar4 == 0) {
        FUN_02023894(*(undefined4 *)(*(int *)(iVar3 + 0x7c) + 4),0x85000c,0);
      }
      else {
        iVar4 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x30) + 4) + 0x194))();
        if (*(byte *)(iVar3 + *(int *)(iVar3 + 0xf8) * 0x14 + iVar4 + 0x128) < 3) {
          FUN_02023894(*(undefined4 *)(*(int *)(iVar3 + 0x7c) + 4),0x850038,0);
        }
        else {
          FUN_02023894(*(undefined4 *)(*(int *)(iVar3 + 0x7c) + 4),0x85000c,0);
        }
      }
      (**(code **)(**(int **)(*(int *)(*(int *)(iVar3 + 0x7c) + 4) + 0x68) + 0x6c))();
    }
  }
  return;
}

