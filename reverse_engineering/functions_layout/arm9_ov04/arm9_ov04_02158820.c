
void FUN_02158820(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  cVar1 = *(char *)(iVar2 + 0x18);
  if (cVar1 == '\0') {
    return;
  }
  if (cVar1 == '\x01') {
    *(short *)(iVar2 + 0x1a) = *(short *)(iVar2 + 0x1a) + -1;
    if (*(short *)(iVar2 + 0x1a) < 1) {
      (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),1);
      *(undefined2 *)(iVar2 + 0x1a) = *(undefined2 *)(iVar2 + 0x1c);
      *(undefined1 *)(iVar2 + 0x18) = 2;
      return;
    }
    return;
  }
  if (cVar1 != '\x02') {
    return;
  }
  *(short *)(iVar2 + 0x1a) = *(short *)(iVar2 + 0x1a) + -1;
  if (*(short *)(iVar2 + 0x1a) < 1) {
    (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),0);
    *(undefined1 *)(iVar2 + 0x18) = 0;
    return;
  }
  return;
}

