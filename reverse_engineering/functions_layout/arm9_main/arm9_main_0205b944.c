
void FUN_0205b944(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0205e0f0(&DAT_020ad63c,0);
  if (iVar1 == 0) {
    return;
  }
  do {
    iVar2 = FUN_0205e0f0(&DAT_020ad63c,iVar1);
    FUN_0205b460(iVar1,param_1);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  return;
}

