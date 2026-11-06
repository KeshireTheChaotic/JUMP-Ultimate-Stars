
/* WARNING: Removing unreachable block (ram,0x0214d9c0) */
/* WARNING: Removing unreachable block (ram,0x0214d9d0) */

undefined4 FUN_0214d8d8(int param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 < 1) {
    return 0xfffffffe;
  }
  while (*param_2 != (&DAT_0216af20)[param_1]) {
    iVar1 = FUN_0214cdc4(*(undefined2 *)(param_2 + 2));
    param_2 = param_2 + iVar1 + 4;
    param_3 = param_3 - (iVar1 + 4);
    if (param_3 < 1) {
      return 0xfffffffc;
    }
  }
  FUN_0214cdc4(*(undefined2 *)(param_2 + 2));
  if ((byte)param_2[4] < 0xb) {
    uVar2 = (*(code *)((int)&switchD_0214d958::switchdataD_0214d95a +
                      (int)(short)(&switchD_0214d958::switchdataD_0214d95a)[(byte)param_2[4]]))();
    return uVar2;
  }
  return 0xfffffffd;
}

