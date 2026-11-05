
undefined4 FUN_021cfefc(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (*param_2 != 0x5f564354) {
    return 2;
  }
  if ((DAT_021d7bf0 == 0) || (DAT_021d7bdc == 0)) {
    return 0;
  }
  *param_4 = 0;
  param_4[1] = 0;
  uVar3 = FUN_02054b44();
  bVar1 = *(byte *)(param_2 + 1);
  if ((bVar1 & 0xf0) == 0x40) {
    DAT_021d7bd8 = DAT_021d7bd8 + 1;
    FUN_021cdca4(param_1,param_2,param_3,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    return 0;
  }
  if ((bVar1 != 0) && (bVar1 != 0xff)) {
    return 0;
  }
  iVar2 = FUN_021cf4f8(param_1,param_2,param_3,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}

