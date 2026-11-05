
void FUN_0214d050(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0200d12c(param_3,2);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      *(byte *)(param_2 + iVar1 + iVar2) =
           *(byte *)(param_2 + iVar1 + iVar2) ^ *(byte *)(param_1 + iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

