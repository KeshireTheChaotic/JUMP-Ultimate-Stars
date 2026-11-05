
void FUN_02023854(int param_1,int param_2)

{
  *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfd | (param_2 == 0) << 1;
  FUN_02027edc(param_1);
  FUN_02014fd8(*(undefined4 *)(param_1 + 100),param_2);
  return;
}

