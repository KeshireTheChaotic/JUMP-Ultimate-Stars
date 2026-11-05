
void FUN_0215cb00(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar1 + 0x301) == '\0') {
    FUN_0207342c(0x78,1);
    FUN_020869ec(*(undefined4 *)(iVar1 + 0x2ec));
  }
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar1 + 0xac) + 4),1);
  return;
}

