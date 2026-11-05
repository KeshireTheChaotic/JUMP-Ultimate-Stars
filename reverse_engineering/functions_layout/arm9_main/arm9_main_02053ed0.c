
void FUN_02053ed0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = OS_DisableInterrupts();
  iVar1 = DAT_020aab78;
  do {
    if (*(int *)(param_1 + 8) == 0) {
      *(int *)(param_1 + 8) = iVar1;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      FUN_02053d80(iVar1,param_1);
LAB_02053f44:
      OS_RestoreInterrupts(uVar2);
      return;
    }
    if (*(int *)(param_1 + 8) == iVar1) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      goto LAB_02053f44;
    }
    *(int *)(iVar1 + 0x84) = param_1;
    FUN_02053290(param_1);
    *(undefined4 *)(iVar1 + 0x84) = 0;
  } while( true );
}

