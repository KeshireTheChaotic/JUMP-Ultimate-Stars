
void FUN_02190efc(undefined4 param_1,undefined4 param_2,char *param_3,int param_4,int param_5,
                 int param_6)

{
  uint uVar1;
  uint uVar2;
  
  if ((((((DAT_021a8540 != 0) && (DAT_021a8544 != 0)) && (uVar1 = param_4 + param_6, 7 < uVar1)) &&
       ((uVar1 < 0x5e5 && (*param_3 == DAT_021a6eb0)))) &&
      ((param_3[1] == DAT_021a6eb1 && ((param_3[2] == DAT_021a6eb2 && (param_3[6] == '\b')))))) &&
     ((param_3[7] == '\0' || (param_3[7] == '\x06')))) {
    uVar2 = uVar1 + 9 & 0xfffe;
    uVar1 = DAT_021a8510 + uVar2;
    if ((DAT_021a8518 <= DAT_021a8510) || (uVar1 < DAT_021a8518)) {
      if (uVar1 == DAT_021a8544) {
        uVar1 = 0;
        if (DAT_021a8518 == 0) {
          return;
        }
      }
      else if ((DAT_021a8544 < uVar1) && (uVar1 = uVar2, DAT_021a8518 <= uVar2)) {
        return;
      }
      if (DAT_021a8544 < DAT_021a8510 + uVar2) {
        if (1 < DAT_021a8544 - DAT_021a8510) {
          *(undefined2 *)(DAT_021a8540 + DAT_021a8510) = 0;
        }
        DAT_021a8510 = 0;
      }
      *(short *)(DAT_021a8540 + DAT_021a8510) = (short)uVar2;
      FUN_02051890(param_2,DAT_021a8540 + DAT_021a8510 + 2,6);
      FUN_02051890(param_1,DAT_021a8540 + DAT_021a8510 + 8,6);
      FUN_02051890(param_3 + 6,DAT_021a8540 + DAT_021a8510 + 0xe,param_4 + -6);
      if ((param_5 != 0) && (param_6 != 0)) {
        FUN_02051890(param_5,DAT_021a8540 + DAT_021a8510 + 8 + param_4);
      }
      DAT_021a8510 = uVar1;
    }
  }
  return;
}

