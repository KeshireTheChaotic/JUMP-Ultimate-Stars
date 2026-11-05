
void FUN_0214cfc8(uint param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = func_0x021be9f0(param_1,0);
  if (iVar2 == 0) {
    FUN_0214d5d0(param_1);
    func_0x021bfd64(param_1);
    return;
  }
  OS_DisableInterrupts();
  uVar1 = ~(ushort)(1 << (param_1 & 0xff));
  DAT_0216acec = DAT_0216acec & uVar1;
  DAT_0216acea = DAT_0216acea & uVar1;
  OS_RestoreInterrupts();
  return;
}

