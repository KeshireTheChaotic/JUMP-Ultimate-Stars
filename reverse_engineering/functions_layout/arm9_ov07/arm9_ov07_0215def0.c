
void FUN_0215def0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207342c(0x78,3);
  *(bool *)(iVar1 + 0x9e) = *(int *)(*(int *)(param_1 + 4) + 0x124) != 10;
  if (*(char *)(iVar1 + 0x9e) == '\0') {
    FUN_0215e18c(*(undefined4 *)(iVar1 + 0x78),0);
    FUN_0206af68(*(undefined4 *)(iVar1 + 0x74),0x7fff,0);
    return;
  }
  FUN_0215e18c(*(undefined4 *)(iVar1 + 0x74),0);
  FUN_0206af68(*(undefined4 *)(iVar1 + 0x78),0x7fff,0);
  return;
}

