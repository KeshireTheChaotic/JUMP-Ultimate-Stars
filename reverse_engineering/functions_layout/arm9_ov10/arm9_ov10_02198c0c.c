
uint FUN_02198c0c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  OS_DisableInterrupts();
  uVar1 = 0;
  uVar2 = *(uint *)(DAT_021aa094 + 0x2264);
  if (DAT_021aa094 == 0) {
    OS_RestoreInterrupts();
    return 0;
  }
  if (((param_1 & 0x8000) != 0) && (uVar1 = 0x3ffe, (param_1 & 0x3ffe) == 0)) {
    param_1 = param_1 | 0xa082;
  }
  if ((param_1 & 0x20000) != 0) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  if ((param_1 & 0x200000) != 0) {
    uVar1 = uVar1 | 0x100000;
  }
  if ((param_1 & 0x800000) != 0) {
    uVar1 = uVar1 | 0x400000;
  }
  *(uint *)(DAT_021aa094 + 0x2264) = param_1 | uVar2 & ~uVar1;
  OS_RestoreInterrupts();
  return uVar2;
}

