
int FUN_02192388(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 100);
  uVar1 = OS_DisableInterrupts();
  iVar2 = *(int *)(iVar3 + 0xf8);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar3 + 0xf8) = 0;
    FUN_0218efb4(iVar2);
  }
  OS_RestoreInterrupts(uVar1);
  return iVar2;
}

