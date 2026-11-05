
void FUN_0205b310(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0205e0f0(&DAT_020ad63c,0);
  while ((iVar1 != 0 && (*(byte *)(iVar1 + 0x3d) <= *(byte *)(param_1 + 0x3d)))) {
    iVar1 = FUN_0205e0f0(&DAT_020ad63c);
  }
  FUN_0205e170(&DAT_020ad63c,iVar1,param_1);
  return;
}

