
undefined4 FUN_0214f998(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  DAT_0216d108 = (undefined4 *)(param_2 + 0x53U & 0xfffffffc);
  DAT_0216d100 = (int)DAT_0216d108 + 0x2fU & 0xffffffe0;
  DAT_0216d120 = DAT_0216d100 + 0x2300;
  DAT_0216d124 = param_2;
  DAT_0216d108[1] = DAT_0216d100 + 0x23c0;
  DAT_0216d108[2] = (param_2 + param_3) - DAT_0216d108[1];
  DAT_0216d108[3] = 0;
  *DAT_0216d108 = 3;
  DAT_0216d11c = param_1;
  if (DAT_0216d118 == 0) {
    iVar2 = func_0x02199540(DAT_0216d100,0x2300);
    if (iVar2 != 0) {
      OS_RestoreInterrupts(uVar1);
      return 0;
    }
    DAT_0216d118 = 1;
  }
  if (DAT_0216d118 != 1) {
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  iVar2 = func_0x0219936c(DAT_0216d108,0x214fe11);
  if (iVar2 == 3) {
    DAT_0216d118 = 4;
    OS_RestoreInterrupts(uVar1);
    return 1;
  }
  OS_RestoreInterrupts(uVar1);
  return 0;
}

