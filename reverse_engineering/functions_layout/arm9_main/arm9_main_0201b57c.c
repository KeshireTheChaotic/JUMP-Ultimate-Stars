
int FUN_0201b57c(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar1 = iVar1 + -4;
  }
  do {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_2 == *(int *)(iVar1 + 0x18)) {
      if (param_3 == 0) {
        return iVar1;
      }
      param_3 = param_3 + -1;
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 != 0) {
      iVar1 = iVar1 + -4;
    }
  } while( true );
}

