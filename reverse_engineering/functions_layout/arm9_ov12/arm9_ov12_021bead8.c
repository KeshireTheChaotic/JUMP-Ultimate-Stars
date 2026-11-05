
int FUN_021bead8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  if ((DAT_021d525c == 0) || (iVar2 = FUN_021bddb0(param_1), iVar2 == 0)) {
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  FUN_02051890(DAT_021d525c + 0x1340 + (param_1 + -1) * 0x16,DAT_021d525c + 0x1772);
  OS_RestoreInterrupts(uVar1);
  return DAT_021d525c + 0x1772;
}

