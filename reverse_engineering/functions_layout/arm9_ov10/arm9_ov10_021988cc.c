
void FUN_021988cc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  if ((*(int *)(DAT_021aa094 + 0x2260) == 9) && (param_1 != 9)) {
    FUN_02054e50(DAT_021aa094 + 0x22cc);
  }
  if (*(int *)(DAT_021aa094 + 0x2260) != 0xb) {
    *(int *)(DAT_021aa094 + 0x2260) = param_1;
  }
  if (param_1 == 9) {
    FUN_02054ee8(DAT_021aa094 + 0x22cc,0x22f5341,0,0x2198865,0);
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

