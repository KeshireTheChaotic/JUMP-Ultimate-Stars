
void FUN_02064d7c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = iVar1 + *(int *)(param_1 + 0xc);
  IC_InvalidateRange(iVar2,iVar3);
  DC_InvalidateRange(iVar2,iVar3);
  FUN_020517fc(iVar2 + iVar1,0,iVar3 - iVar1);
  return;
}

