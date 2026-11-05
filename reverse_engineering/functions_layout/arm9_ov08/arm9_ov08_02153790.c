
undefined4 FUN_02153790(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  DAT_0216d158 = (undefined4 *)(param_2 + 99U & 0xfffffffc);
  DAT_0216d18c = (int)DAT_0216d158 + 0x2fU & 0xffffffe0;
  DAT_0216d19c = DAT_0216d18c + 0x2300;
  DAT_0216d178 = param_2;
  DAT_0216d158[1] = DAT_0216d18c + 0x23c0;
  DAT_0216d158[2] = (param_2 + param_3) - DAT_0216d158[1];
  DAT_0216d158[3] = 0;
  *DAT_0216d158 = 3;
  DAT_0216d1d0 = param_1;
  if (DAT_0216d17c == 0) {
    iVar2 = func_0x02199540(DAT_0216d18c,0x2300);
    if (iVar2 != 0) {
      OS_RestoreInterrupts(uVar1);
      return 0;
    }
    DAT_0216d17c = 1;
  }
  if (DAT_0216d17c != 1) {
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  iVar2 = func_0x0219936c(DAT_0216d158,0x2153bbd);
  if (iVar2 == 3) {
    DAT_0216d17c = 4;
    OS_RestoreInterrupts(uVar1);
    return 1;
  }
  OS_RestoreInterrupts(uVar1);
  return 0;
}

