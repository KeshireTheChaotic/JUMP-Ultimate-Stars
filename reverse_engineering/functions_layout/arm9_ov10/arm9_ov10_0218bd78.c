
void FUN_0218bd78(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0200131c(*(undefined4 *)(param_1 + 0x10));
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    puVar2 = (undefined4 *)FUN_020012d8(*(undefined4 *)(param_1 + 0x10),iVar1);
    FUN_0218bf18(*puVar2);
  }
  return;
}

