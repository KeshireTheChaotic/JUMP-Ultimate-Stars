
void FUN_027ebadc(void)

{
  OS_DisableIrqMask(0x1000000);
  OS_SetIrqFunction(0x1000000,0);
  return;
}

