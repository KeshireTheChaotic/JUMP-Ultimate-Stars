
bool FUN_02063c20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  uVar1 = OS_DisableInterrupts();
  bVar3 = (*(uint *)(param_1 + 0x1c) & 8) == 0;
  if (!bVar3) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffff7;
    iVar2 = FUN_020641d4(param_1);
  }
  OS_RestoreInterrupts(uVar1);
  if (iVar2 != 0) {
    FUN_02064160(iVar2);
  }
  return bVar3;
}

