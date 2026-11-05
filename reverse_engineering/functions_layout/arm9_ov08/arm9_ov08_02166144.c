
void FUN_02166144(int param_1)

{
  short *psVar1;
  
  psVar1 = (short *)FUN_02166ba8((param_1 + 1) * 4 + 8,4);
  *psVar1 = (short)param_1 + 1;
  *(undefined1 *)(psVar1 + 1) = 0;
  *(undefined1 *)((int)psVar1 + 3) = 0;
  return;
}

