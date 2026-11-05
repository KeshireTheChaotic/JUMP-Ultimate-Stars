
void FUN_020461fc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  while( true ) {
    if (DAT_02093c24 - 1U <= *(uint *)(iVar1 + 0xc)) {
      return;
    }
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 == 0) break;
    FUN_02045bd0(param_1);
  }
  return;
}

