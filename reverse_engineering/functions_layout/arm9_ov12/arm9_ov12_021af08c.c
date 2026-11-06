
void FUN_021af08c(int param_1)

{
  int *piVar1;
  
  if ((-1 < (int)((uint)*(byte *)(param_1 + 0x29) << 0x18)) &&
     (piVar1 = *(int **)(param_1 + 0x9c), -1 < (int)((uint)*(byte *)((int)piVar1 + 0x29) << 0x18)))
  {
    (**(code **)(*piVar1 + 400))();
    (**(code **)(*piVar1 + 0x178))();
    *(undefined1 *)(piVar1[0x19] + 0x40) = 1;
  }
  return;
}

