
void FUN_021565a4(int param_1,int param_2,undefined1 param_3)

{
  char cVar1;
  
  cVar1 = (&DAT_021710a8)[param_2];
  *(char *)(param_1 + cVar1 * 0x10) = (char)param_2;
  *(undefined1 *)(param_1 + cVar1 * 0x10 + 1) = param_3;
  return;
}

