
void FUN_037fce24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = OS_DisableInterrupts();
  iVar1 = DAT_038082dc;
  do {
    if (*(int *)(param_1 + 8) == 0) {
      *(int *)(param_1 + 8) = iVar1;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      FUN_037fcd54(iVar1,param_1);
LAB_037fce98:
      OS_RestoreInterrupts(uVar2);
      return;
    }
    if (*(int *)(param_1 + 8) == iVar1) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      goto LAB_037fce98;
    }
    *(int *)(iVar1 + 0x68) = param_1;
    FUN_037fc4dc(param_1);
    *(undefined4 *)(iVar1 + 0x68) = 0;
  } while( true );
}

