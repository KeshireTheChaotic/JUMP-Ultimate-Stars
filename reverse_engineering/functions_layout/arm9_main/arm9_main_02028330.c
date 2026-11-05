
void FUN_02028330(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_02028818(param_1,0x80020000);
  if (iVar1 != 0) {
    FUN_02028838(param_1);
  }
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfd;
  FUN_02027edc(param_1);
  return;
}

