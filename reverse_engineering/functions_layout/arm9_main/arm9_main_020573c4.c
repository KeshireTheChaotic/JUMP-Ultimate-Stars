
undefined1 FUN_020573c4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = param_1 * 0xc;
  (&DAT_020aca80)[param_1 * 3] = param_2;
  (&DAT_020aca84)[param_1 * 3] = param_3;
  (&DAT_020aca88)[iVar1] = (&DAT_020aca88)[iVar1] + '\x01';
  return (&DAT_020aca88)[iVar1];
}

