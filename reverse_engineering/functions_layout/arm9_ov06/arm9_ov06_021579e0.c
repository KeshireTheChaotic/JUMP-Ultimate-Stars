
void FUN_021579e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  if ((iVar1 != 0) && (FUN_0215857c(iVar1), *(int *)(iVar1 + 0x88) != 0)) {
    FUN_0206c650();
  }
  FUN_02078a44(*(undefined4 *)(param_2 + 0x1b4));
  if (*(char *)(param_2 + 0xd6) != '\0') {
    *(char *)(param_2 + 0xd6) = *(char *)(param_2 + 0xd6) + -1;
  }
  *(undefined4 *)(param_2 + 0x1ac) = 0;
  *(undefined4 *)(param_2 + 0xb4) = 0;
  FUN_0207342c(0x7a,0x33);
  return;
}

