
void FUN_0215b174(int param_1)

{
  char cVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0x112) = 0;
  FUN_0215f334(*(undefined4 *)(param_1 + 0x1a0),1);
  FUN_0215b40c(param_1);
  FUN_0207cec8(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0x20000000);
  FUN_0215b1e8(*(undefined4 *)(param_1 + 0x1a8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x1a8) + 8);
  if (iVar2 == 0) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = *(char *)(*(int *)(*(int *)(iVar2 + 4) + 100) + 0x49);
  }
  if (cVar1 == '\0') {
    return;
  }
  FUN_0215b204(*(int *)(param_1 + 0x1a8),0);
  return;
}

