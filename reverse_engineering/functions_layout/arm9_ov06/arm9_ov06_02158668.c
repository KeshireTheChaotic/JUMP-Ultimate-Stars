
void FUN_02158668(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0xe2) == 0) {
    return;
  }
  for (iVar1 = 0; iVar1 < *(int *)(DAT_02172960 + 0x158); iVar1 = iVar1 + 1) {
    if (iVar1 != *(char *)(param_1 + 0x1e0)) {
      FUN_020781e4(*(undefined4 *)(DAT_02172960 + iVar1 * 4 + 0x118),(int)*(short *)(param_1 + 0xe2)
                  );
    }
  }
  return;
}

