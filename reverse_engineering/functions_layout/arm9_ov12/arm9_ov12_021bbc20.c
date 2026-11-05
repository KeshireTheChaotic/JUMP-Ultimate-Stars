
void FUN_021bbc20(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((param_2 & 0x20) == 0) {
    return;
  }
  if (*(char *)(iVar2 + 0x9c) == '\x01') {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  *(undefined1 *)(iVar2 + 0xa0) = uVar1;
  *(undefined1 *)(iVar2 + 0xa6) = 1;
  FUN_0207342c(0x78);
  return;
}

