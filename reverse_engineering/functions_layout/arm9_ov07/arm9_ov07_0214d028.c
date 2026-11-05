
void FUN_0214d028(uint param_1)

{
  int iVar1;
  
  iVar1 = func_0x021be9f0(param_1,2);
  if (iVar1 == 0) {
    FUN_0214d5d0(param_1);
    func_0x021bfd64(param_1);
    return;
  }
  OS_DisableInterrupts();
  DAT_0216acee = DAT_0216acee & ~(ushort)(1 << (param_1 & 0xff));
  DAT_0216acf0 = DAT_0216acf0 | (ushort)(1 << (param_1 & 0xff));
  OS_RestoreInterrupts();
  return;
}

