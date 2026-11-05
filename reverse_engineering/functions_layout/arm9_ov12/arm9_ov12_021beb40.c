
void FUN_021beb40(undefined4 param_1)

{
  OS_DisableInterrupts();
  *(undefined4 *)(DAT_021d525c + 0x14e4) = param_1;
  OS_RestoreInterrupts();
  return;
}

