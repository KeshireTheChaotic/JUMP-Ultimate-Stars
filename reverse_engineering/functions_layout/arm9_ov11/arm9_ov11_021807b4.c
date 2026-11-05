
void FUN_021807b4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x107) * 4 + 0xdc);
  iVar2 = FUN_0217e438(param_1);
  if (iVar2 == 0 && 0x7fff < iVar1) {
    *(undefined4 *)(**(int **)(param_1 + 0x14) + 0xe8) = 0x4000;
    return;
  }
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x105) = 1;
  return;
}

