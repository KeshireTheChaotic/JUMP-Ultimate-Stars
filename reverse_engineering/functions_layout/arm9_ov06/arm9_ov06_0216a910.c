
undefined4 FUN_0216a910(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x1a);
  if (((cVar1 == '\x01' || cVar1 == '\x05') || cVar1 == '\x0e') || ((byte)(cVar1 - 0x17U) < 3)) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x2c);
}

