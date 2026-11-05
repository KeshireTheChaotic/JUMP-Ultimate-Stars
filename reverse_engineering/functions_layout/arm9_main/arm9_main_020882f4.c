
void FUN_020882f4(uint param_1)

{
  *(uint *)(iRam0208830c + 8) = *(uint *)(iRam0208830c + 8) | 1 << (param_1 & 0xff);
  return;
}

