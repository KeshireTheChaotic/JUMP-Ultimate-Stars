
void FUN_021817a4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_0200131c(*(undefined4 *)(param_1 + 4));
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)FUN_020012d8(*(undefined4 *)(param_1 + 4),iVar3);
      FUN_0218186c(param_1,*puVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_02000fc8(*(undefined4 *)(param_1 + 4));
  FUN_021817dc(param_1);
  return;
}

