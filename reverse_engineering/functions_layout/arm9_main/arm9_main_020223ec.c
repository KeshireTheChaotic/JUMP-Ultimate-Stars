
int FUN_020223ec(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x1c);
  iVar2 = 0;
  while (puVar3 != (undefined4 *)0x0) {
    iVar1 = (**(code **)(*(int *)puVar3[-3] + 0x54))();
    puVar3 = (undefined4 *)*puVar3;
    if (iVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  for (puVar3 = *(undefined4 **)(param_1 + 0x5c); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)*puVar3) {
    iVar2 = iVar2 + 1;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))();
  return iVar2 + iVar1;
}

