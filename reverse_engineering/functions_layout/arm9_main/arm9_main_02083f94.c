
void FUN_02083f94(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x74);
  while (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    (**(code **)(*piVar1 + 0x24))();
  }
  return;
}

