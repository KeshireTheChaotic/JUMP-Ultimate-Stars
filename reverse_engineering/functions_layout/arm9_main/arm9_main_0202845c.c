
void FUN_0202845c(int param_1,int param_2)

{
  *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfd | (param_2 == 0) << 1;
  FUN_02027edc();
  return;
}

