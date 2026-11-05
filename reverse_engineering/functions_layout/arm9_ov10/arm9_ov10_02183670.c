
undefined4
FUN_02183670(undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_28 [20];
  
  *param_3 = 0;
  if ((4 < param_2[2]) &&
     (puVar1 = (undefined1 *)FUN_02004d14(*param_2,10), puVar1 != (undefined1 *)0x0)) {
    iVar2 = FUN_02004cec(puVar1 + -5,s__msg__021a521c,5);
    if (iVar2 != 0) {
      return 3;
    }
    *puVar1 = 0;
    iVar2 = FUN_02189328(*param_2,&DAT_021a5224,auStack_28,0x10);
    if (iVar2 == 0) {
      return 3;
    }
    uVar3 = FUN_02005f14(auStack_28);
    *param_4 = uVar3;
    iVar2 = FUN_02189328(*param_2,s__len__021a5228,auStack_28,0x10);
    if (iVar2 == 0) {
      return 3;
    }
    iVar2 = FUN_02005f14(auStack_28);
    iVar4 = iVar2 + 1;
    if ((int)(puVar1 + (iVar4 - *param_2)) < param_2[2]) {
      if (puVar1[iVar4] != '\0') {
        return 3;
      }
      *param_3 = puVar1 + 1;
      *param_5 = iVar2;
      param_2[3] = (int)(puVar1 + (iVar4 - *param_2) + 1);
    }
    else {
      *puVar1 = 10;
    }
  }
  return 0;
}

