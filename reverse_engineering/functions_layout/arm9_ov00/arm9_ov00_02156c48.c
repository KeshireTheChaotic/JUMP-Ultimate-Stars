
void FUN_02156c48(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_02156944(param_2);
  if (iVar2 != 0) {
    FUN_021568dc(param_2[1],7);
    param_2[10] = 0;
    param_2[9] = 0;
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_2 + 0xc) = cVar1 + '\x01';
  if (cVar1 < '\x10') {
    return;
  }
  iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(param_2[1] + 0xc) + 4) + 0x68) + 0x68))();
  if (iVar2 != 0) {
    *(undefined1 *)((int)param_2 + 0x31) = 1;
    *param_2 = FUN_02156984;
  }
  return;
}

