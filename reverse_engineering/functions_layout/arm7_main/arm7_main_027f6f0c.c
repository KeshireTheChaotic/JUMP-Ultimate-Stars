
void FUN_027f6f0c(uint param_1,uint param_2)

{
  int iVar1;
  
  do {
    iVar1 = FUN_037fe9ec(5,(param_1 & 0x7f) << 8 | 0x8000 | param_2 & 0xff,0);
  } while (iVar1 < 0);
  return;
}

