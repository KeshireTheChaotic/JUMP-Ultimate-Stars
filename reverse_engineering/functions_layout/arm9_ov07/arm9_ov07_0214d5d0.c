
void FUN_0214d5d0(uint param_1)

{
  ushort uVar1;
  
  uVar1 = ~(ushort)(1 << (param_1 & 0xff));
  OS_DisableInterrupts();
  DAT_0216acea = DAT_0216acea & uVar1;
  DAT_0216acec = DAT_0216acec & uVar1;
  DAT_0216acee = DAT_0216acee & uVar1;
  DAT_0216acf0 = DAT_0216acf0 & uVar1;
  DAT_0216acf2 = DAT_0216acf2 & uVar1;
  DAT_0216acf4 = DAT_0216acf4 & uVar1;
  OS_RestoreInterrupts();
  return;
}

